/*
* module: gpio driver
*copyright@sinorail
*author  @jiayu
*date     @2016-06-24 17:39
*dir:       linux-2.6-imx-imx_3.0.35_4.1.0\drivers\gpio  静态编译
*
*/


#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/interrupt.h>
#include <linux/irq.h>
#include <linux/spinlock.h>
#include <linux/device.h>
#include <linux/err.h>
#include <linux/debugfs.h>
#include <linux/seq_file.h>
#include <linux/gpio.h>
#include <linux/of_gpio.h>
#include <linux/idr.h>
#include <linux/slab.h>

#include <linux/cdev.h>    // cdev
#include <linux/device.h> // udev

#include "/home/lim/Pantum/bsplib/linux-2.6-imx-imx_3.0.35_4.1.0/arch/arm/mach-mx6/board-myimx6ek200-6q.h"

#define DRV_VERSION "1.0"
#define DEVICE_NAME     "mx6_gpio"   /* 加载模式后，执行”cat /proc/devices”命令看到的设备名称 */
#define GPIO_MAJOR 248


#define SABRESD_SD2_DAT0_DIR IMX_GPIO_NR(1,15)
#define SABRESD_SD2_DAT1_DIR IMX_GPIO_NR(1,14)
#define SABRESD_SD2_DAT2_DIR IMX_GPIO_NR(1,13)

unsigned int gpio_major = GPIO_MAJOR;

/*
PAD
	MX6Q_PAD_SD2_DAT0__GPIO_1_15,
	MX6Q_PAD_SD2_DAT1__GPIO_1_14,
	MX6Q_PAD_SD2_DAT2__GPIO_1_13,
*/

unsigned int gpio_table[] = {
    SABRESD_SD2_DAT0_DIR,
	SABRESD_SD2_DAT1_DIR,
	SABRESD_SD2_DAT2_DIR
};


struct cdev cdev; 
struct class *gpio_class;// 设备节点



/*
* 板文件已经完成了 IOMUX 寄存器的 初始化
*/ 

static int gpio_open(struct inode *inode, struct file *file)
{
	int i;
	iomux_v3_cfg_t gpio_pads[] ={
	    MX6Q_PAD_SD2_DAT0__GPIO_1_15,
	    MX6Q_PAD_SD2_DAT1__GPIO_1_14,
	    MX6Q_PAD_SD2_DAT2__GPIO_1_13,
	};
	mxc_iomux_v3_setup_multiple_pads(gpio_pads,
	                    ARRAY_SIZE(gpio_pads));

	for(i = 0; i < sizeof(gpio_table); i++){
		gpio_direction_output(gpio_table[i], 1);
	}
	
	return 0;

}


static int gpio_ioctl(struct file *file,
		   unsigned int cmd, unsigned long arg)
{
   // printk("gpio ctrl\n");
	
	if(cmd)
		cmd = 1;
	else
		cmd = 0;
	
	switch (cmd) {
		case 0: gpio_direction_output(gpio_table[arg], cmd);break;
		case 1: gpio_direction_output(gpio_table[arg], cmd);break;
		case 2: gpio_direction_output(gpio_table[arg], cmd);break;
		default:
			return -EINVAL;
	}
    
    //printk("gpio_table[%ld], cmd = %d\n",arg,cmd);

	return 0;
}


static int gpio_close(struct inode *inode, struct file *file)
{
	return 0;
}


static struct file_operations gpio_fops = {
	.owner   =   THIS_MODULE,    /* 这是一个宏，指向编译模块时自动创建的__this_module变量 */
	.open = gpio_open,
	.unlocked_ioctl = gpio_ioctl,
	.release = gpio_close,
};


static void gpio_setup_cdev(void)
{
	int err,devno = MKDEV(gpio_major,0);
	cdev_init(&cdev,&gpio_fops);
	cdev.owner = THIS_MODULE;
	cdev.ops = &gpio_fops;
	err = cdev_add(&cdev, devno, 1);     // 注册设备
    if (err)
        printk(KERN_NOTICE "Error %d add cdev", err);
}



/*
 * 执行“insmod 调用
 */

static int __init gpio_init(void)
{
	int result;
	
	dev_t devno = MKDEV(gpio_major,0); // 创建设备节点
	
	if (gpio_major)   //如果定义主设备号，调用register_chrdev_region
        result = register_chrdev_region(devno, 1, DEVICE_NAME);// 注册字符设备
    else
    {
		// 动态分配 设备号
        result = alloc_chrdev_region(&devno, 0, 1, DEVICE_NAME);
        gpio_major = MAJOR(devno); // 从dev_t devno 中获得主设备号
        printk(KERN_INFO "Todo: mknod /dev/%s c %d 0\n", DEVICE_NAME, gpio_major);// 
    }

    if (result < 0)
        return result;
	
	// 创建 /sys/class 创建文件夹
	gpio_class = class_create(THIS_MODULE,DEVICE_NAME);
	
	 if(IS_ERR(gpio_class)){  
       printk("%s create class error\n",__func__);  
       return -1;  
    } 
	// 在/dev/下创建设备节点
	 //class_device_create(gpio_class, NULL, MKDEV(gpio_major,0), NULL, DEVICE_NAME);  
	 
	device_create(gpio_class, NULL, MKDEV(gpio_major,0), NULL, DEVICE_NAME);  
	gpio_setup_cdev();
	
	printk(KERN_INFO "Initial imx6 gpio driver!\n");
	
	 
	return 0;
}

/*
 * 执行”rmmod 
 */
static void __exit gpio_exit(void)
{
	printk("%s\n",__func__); 
	cdev_del(&cdev);                                          // 注销设备
	//class_device_destroy(gpio_class,MKDEV(gpio_major,0));  
	device_destroy(gpio_class,MKDEV(gpio_major,0));  
    class_destroy(gpio_class); 
	unregister_chrdev_region(MKDEV(gpio_major, 0), 1);// 释放占用的设备号
}



MODULE_AUTHOR("jiayu@sinorail.com");
MODULE_DESCRIPTION("GPIO output driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);

module_init(gpio_init);
module_exit(gpio_exit);
