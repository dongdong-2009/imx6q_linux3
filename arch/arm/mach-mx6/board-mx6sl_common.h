/*
 * Copyright (C) 2012-2013 Freescale Semiconductor, Inc. All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef _BOARD_MX6SL_COMMON_H
#define _BOARD_MX6SL_COMMON_H
#include <mach/iomux-mx6sl.h>

#define MX6_BRD_LCD_RESET	IMX_GPIO_NR(2, 19)	/* LCD_REST */

#define MX6_BRD_USBOTG1_PWR	IMX_GPIO_NR(4, 0)       /* KEY_COL4 */
#define MX6_BRD_USBOTG2_PWR	IMX_GPIO_NR(4, 2)       /* KEY_COL5 */
#define MX6_BRD_LCD_PWR_EN	IMX_GPIO_NR(4, 3)	/* KEY_ROW5 */
#define MX6_BRD_SD1_WP		IMX_GPIO_NR(4, 6)	/* KEY_COL7 */
#define MX6_BRD_SD1_CD		IMX_GPIO_NR(4, 7)	/* KEY_ROW7 */
#define MX6_BRD_ECSPI1_CS0	IMX_GPIO_NR(4, 11)	/* ECSPI1_SS0 */
#define MX6_BRD_HEADPHONE_DET	IMX_GPIO_NR(4, 19)	/* FEC_RX_ER */
#define MX6_BRD_SD2_WP		IMX_GPIO_NR(4, 29)	/* SD2_DAT6 */
#define MX6_BRD_SD2_CD		IMX_GPIO_NR(5, 0)	/* SD2_DAT7 */
#define MX6_BRD_SD3_CD		IMX_GPIO_NR(3, 22)	/* REF_CLK_32K */
#define MX6_BRD_FEC_PWR_EN	IMX_GPIO_NR(4, 21)	/* FEC_TX_CLK */
#define MX6_BRD_CHG_FLT	IMX_GPIO_NR(4, 14)	/* ECSPI2_MISO  */
#define MX6_BRD_CHG_UOK	IMX_GPIO_NR(4, 13)	/* ECSPI2_MOSI */
#define MX6_BRD_CHG_DOK	IMX_GPIO_NR(4, 13)	/* ECSPI2_MOSI */
#define MX6_BRD_CHG_STATUS	IMX_GPIO_NR(4, 15)	/* ECSPI2_SS0  */

/* EPDC GPIO pins */
#define MX6SL_BRD_EPDC_SDDO_0		IMX_GPIO_NR(1, 7)
#define MX6SL_BRD_EPDC_SDDO_1		IMX_GPIO_NR(1, 8)
#define MX6SL_BRD_EPDC_SDDO_2		IMX_GPIO_NR(1, 9)
#define MX6SL_BRD_EPDC_SDDO_3		IMX_GPIO_NR(1, 10)
#define MX6SL_BRD_EPDC_SDDO_4		IMX_GPIO_NR(1, 11)
#define MX6SL_BRD_EPDC_SDDO_5		IMX_GPIO_NR(1, 12)
#define MX6SL_BRD_EPDC_SDDO_6		IMX_GPIO_NR(1, 13)
#define MX6SL_BRD_EPDC_SDDO_7		IMX_GPIO_NR(1, 14)
#define MX6SL_BRD_EPDC_SDDO_8		IMX_GPIO_NR(1, 15)
#define MX6SL_BRD_EPDC_SDDO_9		IMX_GPIO_NR(1, 16)
#define MX6SL_BRD_EPDC_SDDO_10		IMX_GPIO_NR(1, 17)
#define MX6SL_BRD_EPDC_SDDO_11		IMX_GPIO_NR(1, 18)
#define MX6SL_BRD_EPDC_SDDO_12		IMX_GPIO_NR(1, 19)
#define MX6SL_BRD_EPDC_SDDO_13		IMX_GPIO_NR(1, 20)
#define MX6SL_BRD_EPDC_SDDO_14		IMX_GPIO_NR(1, 21)
#define MX6SL_BRD_EPDC_SDDO_15		IMX_GPIO_NR(1, 22)
#define MX6SL_BRD_EPDC_GDCLK		IMX_GPIO_NR(1, 31)
#define MX6SL_BRD_EPDC_GDSP		IMX_GPIO_NR(2, 2)
#define MX6SL_BRD_EPDC_GDOE		IMX_GPIO_NR(2, 0)
#define MX6SL_BRD_EPDC_GDRL		IMX_GPIO_NR(2, 1)
#define MX6SL_BRD_EPDC_SDCLK		IMX_GPIO_NR(1, 23)
#define MX6SL_BRD_EPDC_SDOE		IMX_GPIO_NR(1, 25)
#define MX6SL_BRD_EPDC_SDLE		IMX_GPIO_NR(1, 24)
#define MX6SL_BRD_EPDC_SDSHR		IMX_GPIO_NR(1, 26)
#define MX6SL_BRD_EPDC_PWRCOM		IMX_GPIO_NR(2, 11)
#define MX6SL_BRD_EPDC_PWRSTAT		IMX_GPIO_NR(2, 13)
#define MX6SL_BRD_EPDC_PWRCTRL0		IMX_GPIO_NR(2, 7)
#define MX6SL_BRD_EPDC_PWRCTRL1		IMX_GPIO_NR(2, 8)
#define MX6SL_BRD_EPDC_PWRCTRL2		IMX_GPIO_NR(2, 9)
#define MX6SL_BRD_EPDC_PWRCTRL3		IMX_GPIO_NR(2, 10)
#define MX6SL_BRD_EPDC_BDR0		IMX_GPIO_NR(2, 5)
#define MX6SL_BRD_EPDC_BDR1		IMX_GPIO_NR(2, 6)
#define MX6SL_BRD_EPDC_SDCE0		IMX_GPIO_NR(1, 27)
#define MX6SL_BRD_EPDC_SDCE1		IMX_GPIO_NR(1, 28)
#define MX6SL_BRD_EPDC_SDCE2		IMX_GPIO_NR(1, 29)
#define MX6SL_BRD_EPDC_SDCE3		IMX_GPIO_NR(1, 30)
#define MX6SL_BRD_EPDC_PMIC_WAKE	IMX_GPIO_NR(2, 14) /* EPDC_PWRWAKEUP */
#define MX6SL_BRD_EPDC_PMIC_INT		IMX_GPIO_NR(2, 12) /* EPDC_PWRINT */
#define MX6SL_BRD_EPDC_VCOM		IMX_GPIO_NR(2, 3)
/* ELAN TS */
#define MX6SL_BRD_ELAN_CE		IMX_GPIO_NR(2, 9)
#define MX6SL_BRD_ELAN_INT		IMX_GPIO_NR(2, 10)
#define MX6SL_BRD_ELAN_RST		IMX_GPIO_NR(4, 4)
/* CSI */
#define MX6SL_BRD_CSI_PWDN		IMX_GPIO_NR(1, 25)
#define MX6SL_BRD_CSI_RST		IMX_GPIO_NR(1, 26)
/* bt */
#define MX6SL_BRD_BT_RESET		IMX_GPIO_NR(5, 11)

static iomux_v3_cfg_t mx6sl_brd_pads[] = {

	/* AUDMUX */
	MX6SL_PAD_AUD_TXC__AUDMUX_AUD3_TXC,
	MX6SL_PAD_AUD_TXD__AUDMUX_AUD3_TXD,
	MX6SL_PAD_AUD_TXFS__AUDMUX_AUD3_TXFS,
	MX6SL_PAD_AUD_RXD__AUDMUX_AUD3_RXD,
	MX6SL_PAD_AUD_MCLK__AUDMUX_AUDIO_CLK_OUT,

	/* Audio Codec */
	MX6SL_PAD_FEC_RX_ER__GPIO_4_19,	/* HEADPHONE_DET */

	/* SPDIF TX */
	MX6SL_PAD_SD2_DAT4__SPDIF_OUT1,

	/* UART1 */
	MX6SL_PAD_UART1_RXD__UART1_RXD,
	MX6SL_PAD_UART1_TXD__UART1_TXD,

	/* USBOTG ID pin */
	MX6SL_PAD_EPDC_PWRCOM__ANATOP_USBOTG1_ID,

	/* USBOTG POWER GPIO */
	MX6SL_PAD_KEY_COL4__GPIO_4_0,
	MX6SL_PAD_KEY_COL5__GPIO_4_2,
	/* USB OC pin */
	MX6SL_PAD_KEY_ROW4__USB_USBOTG1_OC,
	MX6SL_PAD_ECSPI2_SCLK__USB_USBOTG2_OC,
	/* USB HSIC pin */
	MX6SL_PAD_HSIC_STROBE__USB_H_STROBE,
	MX6SL_PAD_HSIC_DAT__USB_H_DATA,

	/* SD1 */
	MX6SL_PAD_SD1_CLK__USDHC1_CLK_50MHZ,
	MX6SL_PAD_SD1_CMD__USDHC1_CMD_50MHZ,
	MX6SL_PAD_SD1_DAT0__USDHC1_DAT0_50MHZ,
	MX6SL_PAD_SD1_DAT1__USDHC1_DAT1_50MHZ,
	MX6SL_PAD_SD1_DAT2__USDHC1_DAT2_50MHZ,
	MX6SL_PAD_SD1_DAT3__USDHC1_DAT3_50MHZ,
	MX6SL_PAD_SD1_DAT4__USDHC1_DAT4_50MHZ,
	MX6SL_PAD_SD1_DAT5__USDHC1_DAT5_50MHZ,
	MX6SL_PAD_SD1_DAT6__USDHC1_DAT6_50MHZ,
	MX6SL_PAD_SD1_DAT7__USDHC1_DAT7_50MHZ,
	/* SD1 CD & WP */
	MX6SL_PAD_KEY_ROW7__GPIO_4_7,
	MX6SL_PAD_KEY_COL7__GPIO_4_6,
	/* SD2 */
	MX6SL_PAD_SD2_CLK__USDHC2_CLK_50MHZ,
	MX6SL_PAD_SD2_CMD__USDHC2_CMD_50MHZ,
	MX6SL_PAD_SD2_DAT0__USDHC2_DAT0_50MHZ,
	MX6SL_PAD_SD2_DAT1__USDHC2_DAT1_50MHZ,
	MX6SL_PAD_SD2_DAT2__USDHC2_DAT2_50MHZ,
	MX6SL_PAD_SD2_DAT3__USDHC2_DAT3_50MHZ,
	/* SD2 CD & WP */
	MX6SL_PAD_SD2_DAT7__GPIO_5_0,
	MX6SL_PAD_SD2_DAT6__GPIO_4_29,
	/* SD3 */
	MX6SL_PAD_SD3_CLK__USDHC3_CLK_50MHZ,
	MX6SL_PAD_SD3_CMD__USDHC3_CMD_50MHZ,
	MX6SL_PAD_SD3_DAT0__USDHC3_DAT0_50MHZ,
	MX6SL_PAD_SD3_DAT1__USDHC3_DAT1_50MHZ,
	MX6SL_PAD_SD3_DAT2__USDHC3_DAT2_50MHZ,
	MX6SL_PAD_SD3_DAT3__USDHC3_DAT3_50MHZ,
	/* SD3 CD */
	MX6SL_PAD_REF_CLK_32K__GPIO_3_22,

	/* FEC */
	MX6SL_PAD_FEC_MDC__FEC_MDC,
	MX6SL_PAD_FEC_MDIO__FEC_MDIO,
	MX6SL_PAD_FEC_REF_CLK__FEC_REF_OUT, /* clock from anatop */
	MX6SL_PAD_FEC_RX_ER__GPIO_4_19,
	MX6SL_PAD_FEC_CRS_DV__FEC_RX_DV,
	MX6SL_PAD_FEC_RXD0__FEC_RDATA_0,
	MX6SL_PAD_FEC_RXD1__FEC_RDATA_1,
	MX6SL_PAD_FEC_TX_EN__FEC_TX_EN,
	MX6SL_PAD_FEC_TXD0__FEC_TDATA_0,
	MX6SL_PAD_FEC_TXD1__FEC_TDATA_1,
	MX6SL_PAD_FEC_TX_CLK__GPIO_4_21, /* Phy power enable */

	/* I2C */
	MX6SL_PAD_I2C1_SCL__I2C1_SCL,
	MX6SL_PAD_I2C1_SDA__I2C1_SDA,
	MX6SL_PAD_I2C2_SCL__I2C2_SCL,
	MX6SL_PAD_I2C2_SDA__I2C2_SDA,

	/* ECSPI1 */
	MX6SL_PAD_ECSPI1_MISO__ECSPI1_MISO,
	MX6SL_PAD_ECSPI1_MOSI__ECSPI1_MOSI,
	MX6SL_PAD_ECSPI1_SCLK__ECSPI1_SCLK,
	MX6SL_PAD_ECSPI1_SS0__ECSPI1_SS0,
	MX6SL_PAD_ECSPI1_SS0__GPIO_4_11,	/* SS0 */

	/* LCD */
	MX6SL_PAD_LCD_CLK__LCDIF_CLK,
	MX6SL_PAD_LCD_ENABLE__LCDIF_ENABLE,
	MX6SL_PAD_LCD_HSYNC__LCDIF_HSYNC,
	MX6SL_PAD_LCD_VSYNC__LCDIF_VSYNC,
	MX6SL_PAD_LCD_RESET__LCDIF_RESET,
	MX6SL_PAD_LCD_DAT0__LCDIF_DAT_0,
	MX6SL_PAD_LCD_DAT1__LCDIF_DAT_1,
	MX6SL_PAD_LCD_DAT2__LCDIF_DAT_2,
	MX6SL_PAD_LCD_DAT3__LCDIF_DAT_3,
	MX6SL_PAD_LCD_DAT4__LCDIF_DAT_4,
	MX6SL_PAD_LCD_DAT5__LCDIF_DAT_5,
	MX6SL_PAD_LCD_DAT6__LCDIF_DAT_6,
	MX6SL_PAD_LCD_DAT7__LCDIF_DAT_7,
	MX6SL_PAD_LCD_DAT8__LCDIF_DAT_8,
	MX6SL_PAD_LCD_DAT9__LCDIF_DAT_9,
	MX6SL_PAD_LCD_DAT10__LCDIF_DAT_10,
	MX6SL_PAD_LCD_DAT11__LCDIF_DAT_11,
	MX6SL_PAD_LCD_DAT12__LCDIF_DAT_12,
	MX6SL_PAD_LCD_DAT13__LCDIF_DAT_13,
	MX6SL_PAD_LCD_DAT14__LCDIF_DAT_14,
	MX6SL_PAD_LCD_DAT15__LCDIF_DAT_15,
	MX6SL_PAD_LCD_DAT16__LCDIF_DAT_16,
	MX6SL_PAD_LCD_DAT17__LCDIF_DAT_17,
	MX6SL_PAD_LCD_DAT18__LCDIF_DAT_18,
	MX6SL_PAD_LCD_DAT19__LCDIF_DAT_19,
	MX6SL_PAD_LCD_DAT20__LCDIF_DAT_20,
	MX6SL_PAD_LCD_DAT21__LCDIF_DAT_21,
	MX6SL_PAD_LCD_DAT22__LCDIF_DAT_22,
	MX6SL_PAD_LCD_DAT23__LCDIF_DAT_23,
	/* LCD brightness */
	MX6SL_PAD_PWM1__PWM1_PWMO,
	/* LCD power on */
	MX6SL_PAD_KEY_ROW5__GPIO_4_3,

	/* keypad on E-Ink add-on board */
	MX6SL_PAD_KEY_COL0__KPP_COL_0,
	MX6SL_PAD_KEY_COL1__KPP_COL_1,
	MX6SL_PAD_KEY_COL2__KPP_COL_2,
	MX6SL_PAD_KEY_COL3__KPP_COL_3,
	MX6SL_PAD_KEY_ROW0__KPP_ROW_0,
	MX6SL_PAD_KEY_ROW1__KPP_ROW_1,
	MX6SL_PAD_KEY_ROW2__KPP_ROW_2,
	MX6SL_PAD_KEY_ROW3__KPP_ROW_3,

#ifndef CONFIG_MACH_MX6SL_EVK
	/* WDOG */
	MX6SL_PAD_WDOG_B__WDOG1_WDOG_B,
#endif

	/* Charge */
	MX6SL_PAD_ECSPI2_MISO__GPIO_4_14,  /* CHG_FLT */
	MX6SL_PAD_ECSPI2_SS0__GPIO_4_15, /* CHG_STATUS */
	MX6SL_PAD_ECSPI2_MOSI__GPIO_4_13, /* CHG_UOK ,CHG_DOK*/

	/* JTAG */
	MX6SL_PAD_JTAG_MOD__SJC_MOD,
	MX6SL_PAD_JTAG_TCK__SJC_TCK,
	MX6SL_PAD_JTAG_TDI__SJC_TDI,
	MX6SL_PAD_JTAG_TDO__SJC_TDO,
	MX6SL_PAD_JTAG_TMS__SJC_TMS,
	MX6SL_PAD_JTAG_TRSTB__SJC_TRSTB,
};

static iomux_v3_cfg_t mx6sl_brd_epdc_enable_pads[] = {
	/* EPDC */
	MX6SL_PAD_EPDC_D0__EPDC_SDDO_0,
	MX6SL_PAD_EPDC_D1__EPDC_SDDO_1,
	MX6SL_PAD_EPDC_D2__EPDC_SDDO_2,
	MX6SL_PAD_EPDC_D3__EPDC_SDDO_3,
	MX6SL_PAD_EPDC_D4__EPDC_SDDO_4,
	MX6SL_PAD_EPDC_D5__EPDC_SDDO_5,
	MX6SL_PAD_EPDC_D6__EPDC_SDDO_6,
	MX6SL_PAD_EPDC_D7__EPDC_SDDO_7,
	MX6SL_PAD_EPDC_D8__EPDC_SDDO_8,
	MX6SL_PAD_EPDC_D9__EPDC_SDDO_9,
	MX6SL_PAD_EPDC_D10__EPDC_SDDO_10,
	MX6SL_PAD_EPDC_D11__EPDC_SDDO_11,
	MX6SL_PAD_EPDC_D12__EPDC_SDDO_12,
	MX6SL_PAD_EPDC_D13__EPDC_SDDO_13,
	MX6SL_PAD_EPDC_D14__EPDC_SDDO_14,
	MX6SL_PAD_EPDC_D15__EPDC_SDDO_15,

	MX6SL_PAD_EPDC_GDCLK__EPDC_GDCLK,
	MX6SL_PAD_EPDC_GDSP__EPDC_GDSP,
	MX6SL_PAD_EPDC_GDOE__EPDC_GDOE,
	MX6SL_PAD_EPDC_GDRL__EPDC_GDRL,
	MX6SL_PAD_EPDC_SDCLK__EPDC_SDCLK,
	MX6SL_PAD_EPDC_SDOE__EPDC_SDOE,
	MX6SL_PAD_EPDC_SDLE__EPDC_SDLE,
	MX6SL_PAD_EPDC_SDSHR__EPDC_SDSHR,
	MX6SL_PAD_EPDC_BDR0__EPDC_BDR_0,
	MX6SL_PAD_EPDC_SDCE0__EPDC_SDCE_0,
	MX6SL_PAD_EPDC_SDCE1__EPDC_SDCE_1,
	MX6SL_PAD_EPDC_SDCE2__EPDC_SDCE_2,

	/* EPD PMIC (Maxim 17135) pins */
	MX6SL_PAD_EPDC_VCOM0__GPIO_2_3,
	MX6SL_PAD_EPDC_PWRSTAT__GPIO_2_13,
	MX6SL_PAD_EPDC_PWRCTRL0__GPIO_2_7,
	MX6SL_PAD_EPDC_PWRWAKEUP__GPIO_2_14,
};

static iomux_v3_cfg_t mx6sl_brd_epdc_disable_pads[] = {
	/* EPDC */
	MX6SL_PAD_EPDC_D0__GPIO_1_7,
	MX6SL_PAD_EPDC_D1__GPIO_1_8,
	MX6SL_PAD_EPDC_D2__GPIO_1_9,
	MX6SL_PAD_EPDC_D3__GPIO_1_10,
	MX6SL_PAD_EPDC_D4__GPIO_1_11,
	MX6SL_PAD_EPDC_D5__GPIO_1_12,
	MX6SL_PAD_EPDC_D6__GPIO_1_13,
	MX6SL_PAD_EPDC_D7__GPIO_1_14,
	MX6SL_PAD_EPDC_D8__GPIO_1_15,
	MX6SL_PAD_EPDC_D9__GPIO_1_16,
	MX6SL_PAD_EPDC_D10__GPIO_1_17,
	MX6SL_PAD_EPDC_D11__GPIO_1_18,
	MX6SL_PAD_EPDC_D12__GPIO_1_19,
	MX6SL_PAD_EPDC_D13__GPIO_1_20,
	MX6SL_PAD_EPDC_D14__GPIO_1_21,
	MX6SL_PAD_EPDC_D15__GPIO_1_22,

	MX6SL_PAD_EPDC_GDCLK__GPIO_1_31,
	MX6SL_PAD_EPDC_GDSP__GPIO_2_2,
	MX6SL_PAD_EPDC_GDOE__GPIO_2_0,
	MX6SL_PAD_EPDC_GDRL__GPIO_2_1,
	MX6SL_PAD_EPDC_SDCLK__GPIO_1_23,
	MX6SL_PAD_EPDC_SDOE__GPIO_1_25,
	MX6SL_PAD_EPDC_SDLE__GPIO_1_24,
	MX6SL_PAD_EPDC_SDSHR__GPIO_1_26,
	MX6SL_PAD_EPDC_BDR0__GPIO_2_5,
	MX6SL_PAD_EPDC_SDCE0__GPIO_1_27,
	MX6SL_PAD_EPDC_SDCE1__GPIO_1_28,
	MX6SL_PAD_EPDC_SDCE2__GPIO_1_29,

	/* EPD PMIC (Maxim 17135) pins */
	MX6SL_PAD_EPDC_VCOM0__GPIO_2_3,
	MX6SL_PAD_EPDC_PWRSTAT__GPIO_2_13,
	MX6SL_PAD_EPDC_PWRCTRL0__GPIO_2_7,
	MX6SL_PAD_EPDC_PWRWAKEUP__GPIO_2_14,
};

static iomux_v3_cfg_t mx6sl_brd_spdc_enable_pads[] = {
	/* SPDC data*/
	MX6SL_PAD_EPDC_D0__TCON_E_DATA_0,
	MX6SL_PAD_EPDC_D1__TCON_E_DATA_1,
	MX6SL_PAD_EPDC_D2__TCON_E_DATA_2,
	MX6SL_PAD_EPDC_D3__TCON_E_DATA_3,
	MX6SL_PAD_EPDC_D4__TCON_E_DATA_4,
	MX6SL_PAD_EPDC_D5__TCON_E_DATA_5,
	MX6SL_PAD_EPDC_D6__TCON_E_DATA_6,
	MX6SL_PAD_EPDC_D7__TCON_E_DATA_7,

	MX6SL_PAD_EPDC_GDOE__TCON_YOEL,   /* AUO panel SIPIX_YOE */

	MX6SL_PAD_EPDC_D9__TCON_E_DATA_9, /* AUO panel SIPIX_PWR_RDY*/

	MX6SL_PAD_EPDC_SDCE2__TCON_YDIOUR, /* AUO panel SIPIX_YDIO */
	MX6SL_PAD_EPDC_SDCE3__TCON_YDIODR, /* AUO panel SIPIX_YDIO */
	MX6SL_PAD_EPDC_GDRL__TCON_YDIOUL,  /* AUO panel SIPIX_YDIO */
	MX6SL_PAD_EPDC_GDSP__TCON_YDIODL,  /* SIPIX_YDIO/SIPIX2_SPV */

	MX6SL_PAD_EPDC_GDCLK__TCON_YCKL,  /* SIPIX_YCLK/SIPIX2_CKV */

	MX6SL_PAD_EPDC_SDSHR__TCON_XDIOR, /* AUO panel SIPIX_XDIO */
	MX6SL_PAD_EPDC_SDOE__TCON_XDIOL,  /* SIPIX_XDIO/SIPIX2_OE */

	MX6SL_PAD_EPDC_SDLE__TCON_LD,     /* SIPIX_LD/SIPIX2_LE */

	MX6SL_PAD_EPDC_SDCE1__TCON_YOER,  /* AUO panel SIPIX_SOE */
	MX6SL_PAD_EPDC_BDR0__TCON_RL,     /* AUO panel SIPIX_SOE */
	MX6SL_PAD_EPDC_BDR1__TCON_UD,     /* AUO panel SIPIX_SOE */

	MX6SL_PAD_EPDC_SDCLK__TCON_CL,    /* SIPIX_XCLK/SIPIX2_CL */

	MX6SL_PAD_EPDC_D10__TCON_E_DATA_10, /* AUO panel SIPIX_SHD_N */

	MX6SL_PAD_EPDC_SDCE0__TCON_YCKR,  /* LG panel SIPIX2_CE */

	/* EPD PMIC (Maxim 17135) pins */
	MX6SL_PAD_EPDC_VCOM0__GPIO_2_3, /* PMICA_CEN */
	MX6SL_PAD_EPDC_PWRSTAT__GPIO_2_13,
	MX6SL_PAD_EPDC_PWRCTRL0__GPIO_2_7,
	MX6SL_PAD_EPDC_PWRWAKEUP__GPIO_2_14,
};

static iomux_v3_cfg_t mx6sl_brd_spdc_disable_pads[] = {
	MX6SL_PAD_EPDC_D0__GPIO_1_7,
	MX6SL_PAD_EPDC_D1__GPIO_1_8,
	MX6SL_PAD_EPDC_D2__GPIO_1_9,
	MX6SL_PAD_EPDC_D3__GPIO_1_10,
	MX6SL_PAD_EPDC_D4__GPIO_1_11,
	MX6SL_PAD_EPDC_D5__GPIO_1_12,
	MX6SL_PAD_EPDC_D6__GPIO_1_13,
	MX6SL_PAD_EPDC_D7__GPIO_1_14,

	MX6SL_PAD_EPDC_SDCE1__GPIO_1_28,
	MX6SL_PAD_EPDC_GDOE__GPIO_2_0,
	MX6SL_PAD_EPDC_D9__GPIO_1_16,
	MX6SL_PAD_EPDC_SDCE2__GPIO_1_29,
	MX6SL_PAD_EPDC_SDCE3__GPIO_1_30,
	MX6SL_PAD_EPDC_GDRL__GPIO_2_1,
	MX6SL_PAD_EPDC_GDSP__GPIO_2_2,
	MX6SL_PAD_EPDC_GDCLK__GPIO_1_31,
	MX6SL_PAD_EPDC_SDSHR__GPIO_1_26,
	MX6SL_PAD_EPDC_SDOE__GPIO_1_25,
	MX6SL_PAD_EPDC_SDLE__GPIO_1_24,
	MX6SL_PAD_EPDC_SDCE1__GPIO_1_28,
	MX6SL_PAD_EPDC_BDR0__GPIO_2_5,
	MX6SL_PAD_EPDC_BDR1__GPIO_2_6,
	MX6SL_PAD_EPDC_SDCLK__GPIO_1_23,
	MX6SL_PAD_EPDC_D10__GPIO_1_17,
	MX6SL_PAD_EPDC_SDCE0__GPIO_1_27,

	/* EPD PMIC (Maxim 17135) pins */
	MX6SL_PAD_EPDC_VCOM0__GPIO_2_3,
	MX6SL_PAD_EPDC_PWRSTAT__GPIO_2_13,
	MX6SL_PAD_EPDC_PWRCTRL0__GPIO_2_7,
	MX6SL_PAD_EPDC_PWRWAKEUP__GPIO_2_14,
};

static iomux_v3_cfg_t mx6sl_brd_elan_pads[] = {
	MX6SL_PAD_EPDC_PWRCTRL3__GPIO_2_10,	/* INT */
	MX6SL_PAD_EPDC_PWRCTRL2__GPIO_2_9,	/* CE */
	MX6SL_PAD_KEY_COL6__GPIO_4_4,		/* RST */
};

static iomux_v3_cfg_t suspend_enter_pads[] = {
	/* Audio pads. */
	MX6SL_PAD_AUD_MCLK__GPIO_1_6,
	MX6SL_PAD_AUD_RXC__GPIO_1_1,
	MX6SL_PAD_AUD_RXD__GPIO_1_2,
	MX6SL_PAD_AUD_RXFS__GPIO_1_0,
	MX6SL_PAD_AUD_TXC__GPIO_1_3,
	MX6SL_PAD_AUD_TXD__GPIO_1_5,
	MX6SL_PAD_AUD_TXFS__GPIO_1_4,
	/* ECSPI pads. */
	MX6SL_PAD_ECSPI1_MISO__GPIO_4_10,
	MX6SL_PAD_ECSPI1_MOSI__GPIO_4_9,
	MX6SL_PAD_ECSPI1_SCLK__GPIO_4_8,
	MX6SL_PAD_ECSPI1_SS0__GPIO_4_11,
	MX6SL_PAD_ECSPI2_SCLK__GPIO_4_12,
	/* FEC pad*/
	MX6SL_PAD_FEC_CRS_DV__GPIO_4_25,
	MX6SL_PAD_FEC_MDC__GPIO_4_23,
	MX6SL_PAD_FEC_MDIO__GPIO_4_20,
	MX6SL_PAD_FEC_REF_CLK__GPIO_4_26,
	MX6SL_PAD_FEC_RXD0__GPIO_4_17,
	MX6SL_PAD_FEC_RXD1__GPIO_4_18,
	MX6SL_PAD_FEC_TXD0__GPIO_4_24,
	MX6SL_PAD_FEC_TXD1__GPIO_4_16,
	MX6SL_PAD_FEC_TX_CLK__GPIO_4_21,
	MX6SL_PAD_FEC_TX_EN__GPIO_4_22,
	/* I2C pads */
	MX6SL_PAD_I2C1_SCL__GPIO_3_12,
	MX6SL_PAD_I2C1_SDA__GPIO_3_13,
	MX6SL_PAD_I2C2_SCL__GPIO_3_14,
	MX6SL_PAD_I2C2_SDA__GPIO_3_15,
	/* LCD pads*/
	MX6SL_PAD_LCD_CLK__GPIO_2_15,
	MX6SL_PAD_LCD_ENABLE__GPIO_2_16,
	MX6SL_PAD_LCD_HSYNC__GPIO_2_17,
	MX6SL_PAD_LCD_VSYNC__GPIO_2_18,
	MX6SL_PAD_LCD_RESET__GPIO_2_19,
	MX6SL_PAD_LCD_DAT0__GPIO_2_20,
	MX6SL_PAD_LCD_DAT1__GPIO_2_21,
	MX6SL_PAD_LCD_DAT2__GPIO_2_22,
	MX6SL_PAD_LCD_DAT3__GPIO_2_23,
	MX6SL_PAD_LCD_DAT4__GPIO_2_24,
	MX6SL_PAD_LCD_DAT5__GPIO_2_25,
	MX6SL_PAD_LCD_DAT6__GPIO_2_26,
	MX6SL_PAD_LCD_DAT7__GPIO_2_27,
	MX6SL_PAD_LCD_DAT8__GPIO_2_28,
	MX6SL_PAD_LCD_DAT9__GPIO_2_29,
	MX6SL_PAD_LCD_DAT10__GPIO_2_30,
	MX6SL_PAD_LCD_DAT11__GPIO_2_31,
	MX6SL_PAD_LCD_DAT12__GPIO_3_0,
	MX6SL_PAD_LCD_DAT13__GPIO_3_1,
	MX6SL_PAD_LCD_DAT14__GPIO_3_2,
	MX6SL_PAD_LCD_DAT15__GPIO_3_3,
	MX6SL_PAD_LCD_DAT16__GPIO_3_4,
	MX6SL_PAD_LCD_DAT17__GPIO_3_5,
	MX6SL_PAD_LCD_DAT18__GPIO_3_6,
	MX6SL_PAD_LCD_DAT19__GPIO_3_7,
	MX6SL_PAD_LCD_DAT20__GPIO_3_8,
	MX6SL_PAD_LCD_DAT21__GPIO_3_9,
	MX6SL_PAD_LCD_DAT22__GPIO_3_10,
	MX6SL_PAD_LCD_DAT23__GPIO_3_11,
	/* PWM pads */
	MX6SL_PAD_PWM1__GPIO_3_23,
	/* SD pads. */
	MX6SL_PAD_SD1_CLK__GPIO_5_15,
	MX6SL_PAD_SD1_CMD__GPIO_5_14,
	MX6SL_PAD_SD1_DAT0__GPIO_5_11,
	MX6SL_PAD_SD1_DAT1__GPIO_5_8,
	MX6SL_PAD_SD1_DAT2__GPIO_5_13,
	MX6SL_PAD_SD1_DAT3__GPIO_5_6,
	MX6SL_PAD_SD1_DAT4__GPIO_5_12,
	MX6SL_PAD_SD1_DAT5__GPIO_5_9,
	MX6SL_PAD_SD1_DAT6__GPIO_5_7,
	MX6SL_PAD_SD1_DAT7__GPIO_5_10,

	MX6SL_PAD_SD2_CLK__GPIO_5_5,
	MX6SL_PAD_SD2_CMD__GPIO_5_4,
	MX6SL_PAD_SD2_DAT0__GPIO_5_1,
	MX6SL_PAD_SD2_DAT1__GPIO_4_30,
	MX6SL_PAD_SD2_DAT2__GPIO_5_3,
	MX6SL_PAD_SD2_DAT3__GPIO_4_28,

	MX6SL_PAD_SD3_CLK__GPIO_5_18,
	MX6SL_PAD_SD3_CMD__GPIO_5_21,
	MX6SL_PAD_SD3_DAT0__GPIO_5_19,
	MX6SL_PAD_SD3_DAT1__GPIO_5_20,
	MX6SL_PAD_SD3_DAT2__GPIO_5_16,
	MX6SL_PAD_SD3_DAT3__GPIO_5_17,

	/* USBOTG ID pin */
#ifndef CONFIG_USB_ID_WAKEUP_ENABLE
	MX6SL_PAD_EPDC_PWRCOM__GPIO_2_11,
#endif
	MX6SL_PAD_HSIC_STROBE__GPIO_3_20,
	MX6SL_PAD_HSIC_DAT__GPIO_3_19,

	/* Key row/column */
	MX6SL_PAD_KEY_COL0__GPIO_3_24,
	MX6SL_PAD_KEY_COL1__GPIO_3_26,
	MX6SL_PAD_KEY_COL2__GPIO_3_28,
	MX6SL_PAD_KEY_COL3__GPIO_3_30,
	MX6SL_PAD_KEY_COL6__GPIO_4_4,
	MX6SL_PAD_KEY_ROW0__GPIO_3_25,
	MX6SL_PAD_KEY_ROW1__GPIO_3_27,
	MX6SL_PAD_KEY_ROW2__GPIO_3_29,
	MX6SL_PAD_KEY_ROW3__GPIO_3_31,
	MX6SL_PAD_KEY_ROW4__GPIO_4_1,
	MX6SL_PAD_KEY_ROW5__GPIO_4_3,
	MX6SL_PAD_KEY_ROW6__GPIO_4_5,
};

static iomux_v3_cfg_t suspend_exit_pads[ARRAY_SIZE(suspend_enter_pads)];

#define MX6SL_USDHC_8BIT_PAD_SETTING(id, speed)	\
mx6sl_sd##id##_##speed##mhz[] = {		\
	MX6SL_PAD_SD##id##_CLK__USDHC##id##_CLK_##speed##MHZ,	\
	MX6SL_PAD_SD##id##_CMD__USDHC##id##_CMD_##speed##MHZ,	\
	MX6SL_PAD_SD##id##_DAT0__USDHC##id##_DAT0_##speed##MHZ,	\
	MX6SL_PAD_SD##id##_DAT1__USDHC##id##_DAT1_##speed##MHZ,	\
	MX6SL_PAD_SD##id##_DAT2__USDHC##id##_DAT2_##speed##MHZ,	\
	MX6SL_PAD_SD##id##_DAT3__USDHC##id##_DAT3_##speed##MHZ,	\
	MX6SL_PAD_SD##id##_DAT4__USDHC##id##_DAT4_##speed##MHZ,	\
	MX6SL_PAD_SD##id##_DAT5__USDHC##id##_DAT5_##speed##MHZ,	\
	MX6SL_PAD_SD##id##_DAT6__USDHC##id##_DAT6_##speed##MHZ,	\
	MX6SL_PAD_SD##id##_DAT7__USDHC##id##_DAT7_##speed##MHZ,	\
}
#define MX6SL_USDHC_4BIT_PAD_SETTING(id, speed)	\
mx6sl_sd##id##_##speed##mhz[] = {		\
	MX6SL_PAD_SD##id##_CLK__USDHC##id##_CLK_##speed##MHZ,	\
	MX6SL_PAD_SD##id##_CMD__USDHC##id##_CMD_##speed##MHZ,	\
	MX6SL_PAD_SD##id##_DAT0__USDHC##id##_DAT0_##speed##MHZ,	\
	MX6SL_PAD_SD##id##_DAT1__USDHC##id##_DAT1_##speed##MHZ,	\
	MX6SL_PAD_SD##id##_DAT2__USDHC##id##_DAT2_##speed##MHZ,	\
	MX6SL_PAD_SD##id##_DAT3__USDHC##id##_DAT3_##speed##MHZ,	\
}


static iomux_v3_cfg_t MX6SL_USDHC_8BIT_PAD_SETTING(1, 50);
static iomux_v3_cfg_t MX6SL_USDHC_8BIT_PAD_SETTING(1, 100);
static iomux_v3_cfg_t MX6SL_USDHC_8BIT_PAD_SETTING(1, 200);
static iomux_v3_cfg_t MX6SL_USDHC_4BIT_PAD_SETTING(2, 50);
static iomux_v3_cfg_t MX6SL_USDHC_4BIT_PAD_SETTING(2, 100);
static iomux_v3_cfg_t MX6SL_USDHC_4BIT_PAD_SETTING(2, 200);
static iomux_v3_cfg_t MX6SL_USDHC_4BIT_PAD_SETTING(3, 50);
static iomux_v3_cfg_t MX6SL_USDHC_4BIT_PAD_SETTING(3, 100);
static iomux_v3_cfg_t MX6SL_USDHC_4BIT_PAD_SETTING(3, 200);

#endif
