/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2017 Samsung Electronics Co., Ltd.
 *              http://www.samsung.com
 *
 * Author: Sung-Hyun Na <sunghyun.na@samsung.com>
 *
 * Chip Abstraction Layer for USB PHY
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _PHY_EXYNOS_USBDP_REG_H_
#define _PHY_EXYNOS_USBDP_REG_H_

#define USBDP_COMBO_BIT_MASK(_bw)		((1 << (_bw)) - 1)

#define USBDP_COMBO_REG_MSK(_pos, _B)		(USBDP_COMBO_BIT_MASK(_B) << (_pos))
#define USBDP_COMBO_REG_CLR(_pos, _B)		(~(USBDP_COMBO_BIT_MASK(_B) << (_pos)))
#define USBDP_COMBO_REG_SET(_x, _pos, _B)	(((_x) & USBDP_COMBO_BIT_MASK(_B)) << (_pos))
#define USBDP_COMBO_REG_GET(_x, _pos, _B) \
	(((_x) & (USBDP_COMBO_BIT_MASK(_B) << (_pos))) >> (_pos))

#define EXYNOS_USBDP_COM_CMN_R0E	(0x0038)
#define USBDP_CMN0E_PLL_AFC_ANA_CPI_CTRL_MASK		(0x7 << 5)
#define USBDP_CMN0E_PLL_AFC_ANA_CPI_CTRL_SET(_x)	(((_x) & 0x7) << 5)
#define USBDP_CMN0E_PLL_AFC_ANA_CPI_CTRL_GET(_r)	(((_r) & 0x7) >> 5)
#define USBDP_CMN0E_PLL_AFC_VCO_CNT_RUN_NO_MASK		(0x1f << 0)
#define USBDP_CMN0E_PLL_AFC_VCO_CNT_RUN_NO_SET(_x)	(((_x) & 0x1f) << 0)
#define USBDP_CMN0E_PLL_AFC_VCO_CNT_RUN_NO_GET(_r)	(((_r) & 0x1f) >> 0)

#define EXYNOS_USBDP_COM_CMN_R0F	(0x003C)
#define USBDP_CMN0F_PLL_ANA_EN_PI			BIT(7)
#define USBDP_CMN0F_PLL_ANA_DCC_EN_MASK			(0xf << 3)
#define USBDP_CMN0F_PLL_ANA_DCC_EN_SET(_x)		(((_x) & 0xf) << 3)
#define USBDP_CMN0F_PLL_ANA_DCC_EN_GET(_r)		(((_r) & 0xf) >> 3)
#define USBDP_CMN0F_PLL_ANA_CPP_CTRL_MASK		(0x7 << 0)
#define USBDP_CMN0F_PLL_ANA_CPP_CTRL_SET(_x)		(((_x) & 0x7) << 0)
#define USBDP_CMN0F_PLL_ANA_CPP_CTRL_GET(_r)		(((_r) & 0x7) >> 0)

#define EXYNOS_USBDP_COM_CMN_R10	(0x0040)
#define USBDP_CMN10_PLL_ANA_VCI_SEL_MASK		(0x7 << 5)
#define USBDP_CMN10_PLL_ANA_VCI_SEL_SET(_x)		(((_x) & 0x7) << 5)
#define USBDP_CMN10_PLL_ANA_VCI_SEL_GET(_r)		(((_r) & 0x7) >> 5)
#define USBDP_CMN10_MAN_CMN_PLL_SET_EN			BIT(4)
#define USBDP_CMN10_PLL_ANA_LPF_RSEL_MASK		(0xf << 0)
#define USBDP_CMN10_PLL_ANA_LPF_RSEL_SET(_x)		(((_x) & 0xf) << 0)
#define USBDP_CMN10_PLL_ANA_LPF_RSEL_GET(_r)		(((_r) & 0xf) >> 0)

#define EXYNOS_USBDP_COM_CMN_R24	(0x0090)
#define USBDP_CMN24_PLL_AGMC_MAN_GMSEL_MASK		USBDP_COMBO_REG_MSK(4, 4)
#define USBDP_CMN24_PLL_AGMC_MAN_GMSEL_SET(_x)		USBDP_COMBO_REG_SET(_x, 4, 4)
#define USBDP_CMN24_PLL_AGMC_MAN_GMSEL_GET(_R)		USBDP_COMBO_REG_GET(_R, 4, 4)
#define USBDP_CMN24_PLL_AGMC_GMSEL_EN			USBDP_COMBO_REG_MSK(3, 1)
#define USBDP_CMN24_PLL_DIG_CLK_SEL			USBDP_COMBO_REG_MSK(2, 1)
#define USBDP_CMN24_NDIV_RSTN				USBDP_COMBO_REG_MSK(1, 1)
#define USBDP_CMN24_SSC_EN				USBDP_COMBO_REG_MSK(0, 1)

#define EXYNOS_USBDP_COM_CMN_R25	(0x0094)
#define USBDP_CMN25_PLL_AGMC_TG_CODE_MASK		USBDP_COMBO_REG_MSK(0, 8)
#define USBDP_CMN25_PLL_AGMC_TG_CODE_SET(_x)		USBDP_COMBO_REG_SET(_x, 0, 8)
#define USBDP_CMN25_PLL_AGMC_TG_CODE_GET(_R)		USBDP_COMBO_REG_GET(_R, 0, 8)

#define EXYNOS_USBDP_COM_CMN_R26	(0x0098)
#define USBDP_CMN26_PLL_ANA_LC_GM_COMP_CTRL		USBDP_COMBO_REG_MSK(7, 1)
#define USBDP_CMN26_PLL_AGMC_COMP_EN			USBDP_COMBO_REG_MSK(6, 1)
#define USBDP_CMN26_PLL_AGMC_GM_ADD_MASK		USBDP_COMBO_REG_MSK(4, 2)
#define USBDP_CMN26_PLL_AGMC_GM_ADD_SET(_x)		USBDP_COMBO_REG_SET(_x, 4, 2)
#define USBDP_CMN26_PLL_AGMC_GM_ADD_GET(_R)		USBDP_COMBO_REG_GET(_R, 4, 2)
#define USBDP_CMN26_PLL_AGMC_FROM_MAX_GM		USBDP_COMBO_REG_MSK(3, 1)
#define USBDP_CMN26_PLL_AFC_FROM_PRE_CODE		USBDP_COMBO_REG_MSK(2, 1)
#define USBDP_CMN26_PLL_AFC_MAN_BSEL_L_MASK		USBDP_COMBO_REG_MSK(0, 2)
#define USBDP_CMN26_PLL_AFC_MAN_BSEL_L_SET(_x)		USBDP_COMBO_REG_SET(_x, 0, 2)
#define USBDP_CMN26_PLL_AFC_MAN_BSEL_L_GET(_R)		USBDP_COMBO_REG_GET(_R, 0, 2)

#define EXYNOS_USBDP_COM_CMN_R27	(0x009C)
#define USBDP_CMN27_PLL_ANA_LC_VREF_BYPASS_EN			USBDP_COMBO_REG_MSK(7, 1)
#define USBDP_CMN27_PLL_ANA_LC_VCDO_CAP_OFFSET_SEL_MASK		USBDP_COMBO_REG_MSK(4, 3)
#define USBDP_CMN27_PLL_ANA_LC_VCDO_CAP_OFFSET_SEL_SET(_x)	USBDP_COMBO_REG_SET(_x, 4, 3)
#define USBDP_CMN27_PLL_ANA_LC_VCDO_CAP_OFFSET_SEL_GET(_R)	USBDP_COMBO_REG_GET(_R, 4, 3)
#define USBDP_CMN27_PLL_ANA_LC_VCO_BUFF_EN			USBDP_COMBO_REG_MSK(3, 1)
#define USBDP_CMN27_PLL_ANA_LC_GM_COMP_VCI_SEL_MASK		USBDP_COMBO_REG_MSK(0, 3)
#define USBDP_CMN27_PLL_ANA_LC_GM_COMP_VCI_SEL_SET(_x)		USBDP_COMBO_REG_SET(_x, 0, 3)
#define USBDP_CMN27_PLL_ANA_LC_GM_COMP_VCI_SEL_GET(_R)		USBDP_COMBO_REG_GET(_R, 0, 3)

#define EXYNOS_USBDP_COM_CMN_R2C	(0x00B0)
#define USBDP_CMN2C_NO_DELAY_PLL_LOCK_DONE_EN		USBDP_COMBO_REG_MSK(4, 1)
#define USBDP_CMN2C_BGR_ATB_SEL				USBDP_COMBO_REG_MSK(3, 1)
#define USBDP_CMN2C_MAN_USBDP_MODE_MASK			USBDP_COMBO_REG_MSK(1, 2)
#define USBDP_CMN2C_MAN_USBDP_MODE_SET(_x)		USBDP_COMBO_REG_SET(_x, 1, 2)
#define USBDP_CMN2C_MAN_USBDP_MODE_GET(_x)		USBDP_COMBO_REG_GET(_x, 1, 2)
#define USBDP_CMN2C_MAN_USBDP_MODE_EN			USBDP_COMBO_REG_MSK(0, 1)

#define EXYNOS_USBDP_COM_CMN_R2D	(0x00B4)
#define USBDP_CMN2D_USB_TX1_SEL				USBDP_COMBO_REG_MSK(5, 1)
#define USBDP_CMN2D_USB_TX3_SEL				USBDP_COMBO_REG_MSK(4, 1)
#define USBDP_CMN2D_LCPLL_SSCDIV_MASK			USBDP_COMBO_REG_MSK(0, 4)
#define USBDP_CMN2D_LCPLL_SSCDIV_SET(_x)		USBDP_COMBO_REG_SET(_x, 0, 4)
#define USBDP_CMN2D_LCPLL_SSCDIV_GET(_x)		USBDP_COMBO_REG_GET(_x, 0, 4)

#define EXYNOS_USBDP_COM_CMN_R2F	(0x00BC)
#define USBDP_CMN2F_PLL_MON_SEL_BAND_M_MASK		USBDP_COMBO_REG_MSK(4, 4)
#define USBDP_CMN2F_PLL_MON_SEL_BAND_M_SET(_x)		USBDP_COMBO_REG_SET(_x, 4, 4)
#define USBDP_CMN2F_PLL_MON_SEL_BAND_M_GET(_x)		USBDP_COMBO_REG_GET(_x, 4, 4)
#define USBDP_CMN2F_PLL_MON_SEL_BAND_I_MASK		USBDP_COMBO_REG_MSK(2, 2)
#define USBDP_CMN2F_PLL_MON_SEL_BAND_I_SET(_x)		USBDP_COMBO_REG_SET(_x, 2, 2)
#define USBDP_CMN2F_PLL_MON_SEL_BAND_I_GET(_x)		USBDP_COMBO_REG_GET(_x, 2, 2)
#define USBDP_CMN2F_PLL_AFC_DONE			USBDP_COMBO_REG_MSK(1, 1)
#define USBDP_CMN2F_PLL_LOCK_DONE			USBDP_COMBO_REG_MSK(0, 1)

#define EXYNOS_USBDP_COM_TRSV_R01	(0x00c4)
#define USBDP_TRSV01_RXAFE_LEQ_ISEL_GEN2_MASK		USBDP_COMBO_REG_MSK(6, 2)
#define USBDP_TRSV01_RXAFE_LEQ_ISEL_GEN2_SET(_x)	USBDP_COMBO_REG_SET(_x, 6, 2)
#define USBDP_TRSV01_RXAFE_LEQ_ISEL_GEN2_GET(_R)	USBDP_COMBO_REG_GET(_R, 6, 2)
#define USBDP_TRSV01_RXAFE_LEQ_ISEL_GEN1_MASK		USBDP_COMBO_REG_MSK(4, 2)
#define USBDP_TRSV01_RXAFE_LEQ_ISEL_GEN1_SET(_x)	USBDP_COMBO_REG_SET(_x, 4, 2)
#define USBDP_TRSV01_RXAFE_LEQ_ISEL_GEN1_GET(_R)	USBDP_COMBO_REG_GET(_R, 4, 2)
#define USBDP_TRSV01_RXAFE_CTLE_SEL_MASK		USBDP_COMBO_REG_MSK(2, 2)
#define USBDP_TRSV01_RXAFE_CTLE_SEL_SET(_x)		USBDP_COMBO_REG_SET(_x, 2, 2)
#define USBDP_TRSV01_RXAFE_CTLE_SEL_GET(_R)		USBDP_COMBO_REG_GET(_R, 2, 2)
#define USBDP_TRSV01_RXAFE_SCLBUF_EN_MASK		USBDP_COMBO_REG_MSK(0, 2)
#define USBDP_TRSV01_RXAFE_SCLBUF_EN_SET(_x)		USBDP_COMBO_REG_SET(_x, 0, 2)
#define USBDP_TRSV01_RXAFE_SCLBUF_EN_GET(_R)		USBDP_COMBO_REG_GET(_R, 0, 2)

#define EXYNOS_USBDP_COM_TRSV_R02	(0x00c8)
#define USBDP_TRSV02_RXAFE_LEQ_CSEL_GEN2_MASK		USBDP_COMBO_REG_MSK(4, 4)
#define USBDP_TRSV02_RXAFE_LEQ_CSEL_GEN2_SET(_x)	USBDP_COMBO_REG_SET(_x, 4, 4)
#define USBDP_TRSV02_RXAFE_LEQ_CSEL_GEN2_GET(_R)	USBDP_COMBO_REG_GET(_R, 4, 4)
#define USBDP_TRSV02_RXAFE_LEQ_CSEL_GEN1_MASK		USBDP_COMBO_REG_MSK(0, 4)
#define USBDP_TRSV02_RXAFE_LEQ_CSEL_GEN1_SET(_x)	USBDP_COMBO_REG_SET(_x, 0, 4)
#define USBDP_TRSV02_RXAFE_LEQ_CSEL_GEN1_GET(_R)	USBDP_COMBO_REG_GET(_R, 0, 4)

#define EXYNOS_USBDP_COM_TRSV_R03	(0x00cc)
#define USBDP_TRSV03_RXAFE_TERM_MODE			USBDP_COMBO_REG_MSK(7, 1)
#define USBDP_TRSV03_RXAFE_EQ_AMP3BUF_EN		USBDP_COMBO_REG_MSK(6, 1)
#define USBDP_TRSV03_RXAFE_LEQ_RSEL_GEN2_MASK		USBDP_COMBO_REG_MSK(3, 3)
#define USBDP_TRSV03_RXAFE_LEQ_RSEL_GEN2_SET(_x)	USBDP_COMBO_REG_SET(_x, 3, 3)
#define USBDP_TRSV03_RXAFE_LEQ_RSEL_GEN2_GET(_R)	USBDP_COMBO_REG_GET(_R, 3, 3)
#define USBDP_TRSV03_RXAFE_LEQ_RSEL_GEN1_MASK		USBDP_COMBO_REG_MSK(0, 3)
#define USBDP_TRSV03_RXAFE_LEQ_RSEL_GEN1_SET(_x)	USBDP_COMBO_REG_SET(_x, 0, 3)
#define USBDP_TRSV03_RXAFE_LEQ_RSEL_GEN1_GET(_R)	USBDP_COMBO_REG_GET(_R, 0, 3)

#define EXYNOS_USBDP_COM_TRSV_R04	(0x00d0)
#define USBDP_TRSV04_RXAFE_TUNE_MASK			USBDP_COMBO_REG_MSK(4, 4)
#define USBDP_TRSV04_RXAFE_TUNE_SET(_x)			USBDP_COMBO_REG_SET(_x, 4, 4)
#define USBDP_TRSV04_RXAFE_TUNE_GET(_R)			USBDP_COMBO_REG_GET(_R, 4, 4)
#define USBDP_TRSV04_RXAFE_SQ_VFFSET_CTRL_MASK		USBDP_COMBO_REG_MSK(0, 4)
#define USBDP_TRSV04_RXAFE_SQ_VFFSET_CTRL_SET(_x)	USBDP_COMBO_REG_SET(_x, 0, 4)
#define USBDP_TRSV04_RXAFE_SQ_VFFSET_CTRL_GET(_R)	USBDP_COMBO_REG_GET(_R, 0, 4)

#define EXYNOS_USBDP_COM_TRSV_R0A	(0x00E8)
#define USBDP_TRSV0A_APB_CAL_OFFSET_DIFP_MASK		USBDP_COMBO_REG_MSK(4, 4)
#define USBDP_TRSV0A_APB_CAL_OFFSET_DIFP_SET(_x)	USBDP_COMBO_REG_SET(_x, 4, 4)
#define USBDP_TRSV0A_APB_CAL_OFFSET_DIFP_GET(_R)	USBDP_COMBO_REG_GET(_R, 4, 4)

#define EXYNOS_USBDP_COM_TRSV_R0B	(0x00EC)
#define USBDP_TRSV0B_BYPASS_DIFN			USBDP_COMBO_REG_MSK(7, 1)
#define USBDP_TRSV0B_BYPASS_DIFP			USBDP_COMBO_REG_MSK(6, 1)
#define USBDP_TRSV0B_APB_CAL_OFFSET_DIFN_MASK		USBDP_COMBO_REG_MSK(0, 4)
#define USBDP_TRSV0B_APB_CAL_OFFSET_DIFN_SET(_x)	USBDP_COMBO_REG_SET(_x, 0, 4)
#define USBDP_TRSV0B_APB_CAL_OFFSET_DIFN_GET(_R)	USBDP_COMBO_REG_GET(_R, 0, 4)

#define EXYNOS_USBDP_COM_TRSV_R0C	(0x00F0)
#define USBDP_TRSV0C_MAN_TX_DE_EMP_LVL_MASK		USBDP_COMBO_REG_MSK(4, 4)
#define USBDP_TRSV0C_MAN_TX_DE_EMP_LVL_SET(_x)		USBDP_COMBO_REG_SET(_x, 4, 4)
#define USBDP_TRSV0C_MAN_TX_DE_EMP_LVL_GET(_R)		USBDP_COMBO_REG_GET(_R, 4, 4)
#define USBDP_TRSV0C_MAN_TX_DRVR_LVL_MASK		USBDP_COMBO_REG_MSK(0, 4)
#define USBDP_TRSV0C_MAN_TX_DRVR_LVL_SET(_x)		USBDP_COMBO_REG_SET(_x, 0, 4)
#define USBDP_TRSV0C_MAN_TX_DRVR_LVL_GET(_R)		USBDP_COMBO_REG_GET(_R, 0, 4)

#define EXYNOS_USBDP_COM_TRSV_R0D	(0x00F4)
#define USBDP_TRSV0D_TX_RCV_COMB_CTRL_MASK		USBDP_COMBO_REG_MSK(6, 2)
#define USBDP_TRSV0D_TX_RCV_COMB_CTRL_SET(_x)		USBDP_COMBO_REG_SET(_x, 6, 2)
#define USBDP_TRSV0D_TX_RCV_COMB_CTRL_GET(_R)		USBDP_COMBO_REG_GET(_R, 6, 2)
#define USBDP_TRSV0D_TX_LINE_LB_SEL			USBDP_COMBO_REG_MSK(5, 1)
#define USBDP_TRSV0D_TX_LINE_LB_EN			USBDP_COMBO_REG_MSK(4, 1)
#define USBDP_TRSV0D_TXHSCK_MON_EN			USBDP_COMBO_REG_MSK(3, 1)
#define USBDP_TRSV0D_EDP_MODE_SEL			USBDP_COMBO_REG_MSK(2, 1)
#define USBDP_TRSV0D_TX_DESKEW_BYPASS			USBDP_COMBO_REG_MSK(1, 1)
#define USBDP_TRSV0D_MAN_DRVR_DE_EMP_LVL_MAN_EN		USBDP_COMBO_REG_MSK(0, 1)

#define EXYNOS_USBDP_COM_TRSV_R0F	(0x00FC)
#define USBDP_TRSV0F_TX_SER_LB_EN			USBDP_COMBO_REG_MSK(1, 1)

#define EXYNOS_USBDP_COM_TRSV_R1F	(0x013C)
#define USBDP_TRSV1F_FBB_MAN_SEL			USBDP_COMBO_REG_MSK(0, 1)

#define EXYNOS_USBDP_COM_TRSV_R21	(0x0144)
#define USBDP_TRSV21_FBB_MAN_LB_MASK			USBDP_COMBO_REG_MSK(4, 4)
#define USBDP_TRSV21_FBB_MAN_LB_SET(_x)			USBDP_COMBO_REG_SET(_x, 4, 4)
#define USBDP_TRSV21_FBB_MAN_LB_GET(_R)			USBDP_COMBO_REG_GET(_R, 4, 4)
#define USBDP_TRSV21_FBB_MAN_HB_MASK			USBDP_COMBO_REG_MSK(0, 4)
#define USBDP_TRSV21_FBB_MAN_HB_SET(_x)			USBDP_COMBO_REG_SET(_x, 0, 4)
#define USBDP_TRSV21_FBB_MAN_HB_GET(_R)			USBDP_COMBO_REG_GET(_R, 0, 4)

#define EXYNOS_USBDP_COM_TRSV_R23	(0x014C)
#define USBDP_TRSV23_DATA_CLEAR_BY_SIGVAL		USBDP_COMBO_REG_MSK(7, 1)
#define USBDP_TRSV23_DESKEW_CHK_BYPASS			USBDP_COMBO_REG_MSK(6, 1)
#define USBDP_TRSV23_TX_FIX_DB				USBDP_COMBO_REG_MSK(5, 1)
#define USBDP_TRSV23_TX_FIX_DA				USBDP_COMBO_REG_MSK(4, 1)
#define USBDP_TRSV23_FBB_H_BW_DIFF_MASK			USBDP_COMBO_REG_MSK(0, 4)
#define USBDP_TRSV23_FBB_H_BW_DIFF_SET(_x)		USBDP_COMBO_REG_SET(_x, 0, 4)
#define USBDP_TRSV23_FBB_H_BW_DIFF_GET(_R)		USBDP_COMBO_REG_GET(_R, 0, 4)

#define EXYNOS_USBDP_COM_TRSV_R24	(0x0150)
#define USBDP_TRSV24_MAN_TX_RCV_DET_EN			USBDP_COMBO_REG_MSK(7, 1)

#define EXYNOS_USBDP_COM_TRSV_R26	(0x0158)
#define USBDP_TRSV26_MAN_TX_SER_EN			USBDP_COMBO_REG_MSK(7, 1)
#define USBDP_TRSV26_MAN_CDR_DES_EN			USBDP_COMBO_REG_MSK(3, 1)
#define USBDP_TRSV26_MAN_CDR_EN				USBDP_COMBO_REG_MSK(2, 1)
#define USBDP_TRSV26_MAN_CDR_CKLPB_MUX_EN		USBDP_COMBO_REG_MSK(1, 1)

#define EXYNOS_USBDP_COM_TRSV_R27	(0x015C)
#define USBDP_TRSV27_MAN_EN_CTRL			USBDP_COMBO_REG_MSK(7, 1)
#define USBDP_TRSV27_MAN_TX_SER				USBDP_COMBO_REG_MSK(6, 1)
#define USBDP_TRSV27_MAN_DESKEW_RSTN			USBDP_COMBO_REG_MSK(5, 1)
#define USBDP_TRSV27_MAN_CDR_AFC_RSTN			USBDP_COMBO_REG_MSK(4, 1)
#define USBDP_TRSV27_MAN_CDR_AFC_INIT_RSTN		USBDP_COMBO_REG_MSK(3, 1)
#define USBDP_TRSV27_MAN_VALID_EN			USBDP_COMBO_REG_MSK(2, 1)
#define USBDP_TRSV27_MAN_CDR_DES_RSTN			USBDP_COMBO_REG_MSK(1, 1)
#define USBDP_TRSV27_MAN_RSTN_EN			USBDP_COMBO_REG_MSK(0, 1)

#define EXYNOS_USBDP_COM_TRSV_R28	(0x0160)
#define USBDP_TRSV28_TX_BIST_ERR_INJ_EN			USBDP_COMBO_REG_MSK(7, 1)
#define USBDP_TRSV28_TX_BIST_START_EN			USBDP_COMBO_REG_MSK(6, 1)
#define USBDP_TRSV28_AUTO_BIST_EN			USBDP_COMBO_REG_MSK(5, 1)
#define USBDP_TRSV28_USER_PATTERN_EN			USBDP_COMBO_REG_MSK(4, 1)
#define USBDP_TRSV28_PLB_EN				USBDP_COMBO_REG_MSK(3, 1)
#define USBDP_TRSV28_BIST_DATA_EN			USBDP_COMBO_REG_MSK(2, 1)
#define USBDP_TRSV28_TX_BIST_EN				USBDP_COMBO_REG_MSK(1, 1)
#define USBDP_TRSV28_RX_BIST_EN				USBDP_COMBO_REG_MSK(0, 1)

#define EXYNOS_USBDP_COM_TRSV_R34	(0x0190)
#define USBDP_TRSV34_SIGVAL_FILT_DLY_CODE_MASK		USBDP_COMBO_REG_MSK(2, 2)
#define USBDP_TRSV34_SIGVAL_FILT_DLY_CODE_SET(_x)	USBDP_COMBO_REG_SET(_x, 2, 2)
#define USBDP_TRSV34_SIGVAL_FILT_DLY_CODE_GET(_R)	USBDP_COMBO_REG_GET(_R, 2, 2)
#define USBDP_TRSV34_OUT_SIGVAL_FILT_SEL		USBDP_COMBO_REG_MSK(1, 1)
#define USBDP_TRSV34_INT_SIGVAL_FILT_SEL		USBDP_COMBO_REG_MSK(0, 1)

#define EXYNOS_USBDP_COM_TRSV_R38	(0x01A0)
#define USBDP_TRSV38_SFR_RX_LFPS_LPF_CTRL_MASK		USBDP_COMBO_REG_MSK(5, 2)
#define USBDP_TRSV38_SFR_RX_LFPS_LPF_CTRL_SET(_x)	USBDP_COMBO_REG_SET(_x, 5, 2)
#define USBDP_TRSV38_SFR_RX_LFPS_LPF_CTRL_GET(_R)	USBDP_COMBO_REG_GET(_R, 5, 2)
#define USBDP_TRSV38_SFR_RX_LFPS_TH_CTRL_MASK		USBDP_COMBO_REG_MSK(2, 3)
#define USBDP_TRSV38_SFR_RX_LFPS_TH_CTRL_SET(_x)	USBDP_COMBO_REG_SET(_x, 2, 3)
#define USBDP_TRSV38_SFR_RX_LFPS_TH_CTRL_GET(_R)	USBDP_COMBO_REG_GET(_R, 2, 3)
#define USBDP_TRSV38_SFR_RX_LFPS_COMP_I_CTRL		USBDP_COMBO_REG_MSK(1, 1)
#define USBDP_TRSV38_RX_LFPS_DET_EN			USBDP_COMBO_REG_MSK(0, 1)

#define EXYNOS_USBDP_COM_TRSV_R39	(0x01A4)
#define USBDP_TRSV39_CDR_TXDATA_SEL			USBDP_COMBO_REG_MSK(0, 1)

#define EXYNOS_USBDP_COM_TRSV_R3D	(0x01b4)
#define USBDP_TRSV3D_SFR_LFPS_DET_TH_MASK		USBDP_COMBO_REG_MSK(3, 4)
#define USBDP_TRSV3D_SFR_LFPS_DET_TH_SET(_x)		USBDP_COMBO_REG_SET(_x, 3, 4)
#define USBDP_TRSV3D_SFR_LFPS_DET_TH_GET(_R)		USBDP_COMBO_REG_GET(_R, 3, 4)
#define USBDP_TRSV3D_SFR_LFPS_DET_FILTER_BYPASS_EN	USBDP_COMBO_REG_MSK(2, 1)

#define EXYNOS_USBDP_COM_TRSV_R4B	(0x01ec)
#define USBDP_TRSV4B_CDR_AFC_DONE			USBDP_COMBO_REG_MSK(5, 1)
#define USBDP_TRSV4B_RX_CAL_DONE			USBDP_COMBO_REG_MSK(4, 1)
#define USBDP_TRSV4B_CDR_FLD_PLL_MODE_DONE		USBDP_COMBO_REG_MSK(3, 1)
#define USBDP_TRSV4B_BIST_COMP_TEST			USBDP_COMBO_REG_MSK(2, 1)
#define USBDP_TRSV4B_BIST_ERR_INJ_TEST			USBDP_COMBO_REG_MSK(1, 1)
#define USBDP_TRSV4B_BIST_COMP_START			USBDP_COMBO_REG_MSK(0, 1)

#define EXYNOS_USBDP_COM_TRSV_R56	(0x0218)
#define USBDP_TRSV56_LFPS_DRV_IDRV_IUP_CTRL_MASK	USBDP_COMBO_REG_MSK(5, 3)
#define USBDP_TRSV56_LFPS_DRV_IDRV_IUP_CTRL_SET(_x)	USBDP_COMBO_REG_SET(_x, 5, 3)
#define USBDP_TRSV56_LFPS_DRV_IDRV_IUP_CTRL_GET(_R)	USBDP_COMBO_REG_GET(_R, 5, 3)
#define USBDP_TRSV56_LFPS_DRV_IDRV_IUP_CTRL_EN		USBDP_COMBO_REG_MSK(0, 1)

#define EXYNOS_USBDP_COM_TRSV_R57	(0x021c)

#define EXYNOS_USBDP_COM_TRSV_R59	(0x0224)
#define USBDP_TRSV59_TX_SFR_DRV_IDRV_IUP_CTRL_MASK	USBDP_COMBO_REG_MSK(3, 3)
#define USBDP_TRSV59_TX_SFR_DRV_IDRV_IUP_CTRL_SET(_x)	USBDP_COMBO_REG_SET(_x, 3, 3)
#define USBDP_TRSV59_TX_SFR_DRV_IDRV_IUP_CTRL_GET(_R)	USBDP_COMBO_REG_GET(_R, 3, 3)

#define EXYNOS_USBDP_COM_TRSV_R13B	(0x04ec)

#define EXYNOS_USBDP_COM_TRSV_R163	(0x058c)

#define EXYNOS_USBDP_COM_TRSV_R175	(0x05d4)

#define EXYNOS_USBDP_COM_TRSV_R172	(0x05c8)

#define EXYNOS_USBDP_COM_TRSV_R173	(0x05cc)

#define EXYNOS_USBDP_COM_TRSV_R174	(0x05d0)

#define EXYNOS_USBDP_COM_TRSV_R175	(0x05d4)

#define EXYNOS_USBDP_COM_DP_R10		(0x0840)
#define USBDP_DP10_LN0_TX_MAN_EN_RST_CTRL_0		USBDP_COMBO_REG_MSK(4, 1)

#define EXYNOS_USBDP_COM_DP_R11		(0x0844)
#define USBDP_DP11_LN0_TX_SLB_EN			USBDP_COMBO_REG_MSK(4, 1)

#define EXYNOS_USBDP_COM_DP_R16		(0x0858)

#define EXYNOS_USBDP_COM_DP_R1A		(0x0868)

#define EXYNOS_USBDP_COM_DP_R50		(0x0940)
#define USBDP_DP50_LN2_TX_MAN_EN_RST_CTRL_0		USBDP_COMBO_REG_MSK(4, 1)

#define EXYNOS_USBDP_COM_DP_R51		(0x0944)
#define USBDP_DP51_LN2_TX_SLB_EN			USBDP_COMBO_REG_MSK(4, 1)

#define EXYNOS_USBDP_COM_DP_R56		(0x0958)

#define EXYNOS_USBDP_COM_DP_R5A		(0x0968)

#define EXYNOS_USBDP_COM_DP_RB3		(0x0ACC)
#define USBDP_DPB3_CMN_DUMMY_CTRL_7			USBDP_COMBO_REG_MSK(7, 1)
#define USBDP_DPB3_CMN_DUMMY_CTRL_6			USBDP_COMBO_REG_MSK(6, 1)
#define USBDP_DPB3_CMN_DUMMY_CTRL_5			USBDP_COMBO_REG_MSK(5, 1)
#define USBDP_DPB3_CMN_DUMMY_CTRL_4			USBDP_COMBO_REG_MSK(4, 1)
#define USBDP_DPB3_CMN_DUMMY_CTRL_3			USBDP_COMBO_REG_MSK(3, 1)
#define USBDP_DPB3_CMN_DUMMY_CTRL_2			USBDP_COMBO_REG_MSK(2, 1)
#define USBDP_DPB3_CMN_DUMMY_CTRL_1			USBDP_COMBO_REG_MSK(1, 1)
#define USBDP_DPB3_CMN_DUMMY_CTRL_0			USBDP_COMBO_REG_MSK(0, 1)

#define USBDP_PCSREG_FRONT_END_MODE_VEC		0x0200
#define USBDP_PCSREG_RUN_LENGTH_TH			USBDP_COMBO_REG_MSK(4, 1)
#define USBDP_PCSREG_EN_DRAIN_AFTER_RX_VAL_FALL		USBDP_COMBO_REG_MSK(1, 1)
#define USBDP_PCSREG_EN_REALIGN				USBDP_COMBO_REG_MSK(0, 1)

#define USBDP_PCSREG_EBUF_PARAM			0x0204
#define USBDP_PCSREG_NUM_INIT_BUFFERING_MASK		USBDP_COMBO_REG_MSK(16, 5)
#define USBDP_PCSREG_NUM_INIT_BUFFERING_SET(_x)		USBDP_COMBO_REG_SET(_x, 16, 5)
#define USBDP_PCSREG_NUM_INIT_BUFFERING_GET(_x)		USBDP_COMBO_REG_GET(_R, 16, 5)
#define USBDP_PCSREG_SKP_INSERT_TH_MASK			USBDP_COMBO_REG_MSK(8, 5)
#define USBDP_PCSREG_SKP_INSERT_TH_SET(_x)		USBDP_COMBO_REG_SET(_x, 8, 5)
#define USBDP_PCSREG_SKP_INSERT_TH_GET(_x)		USBDP_COMBO_REG_GET(_R, 8, 5)
#define USBDP_PCSREG_SKP_REMOVE_TH_MASK			USBDP_COMBO_REG_MSK(0, 5)
#define USBDP_PCSREG_SKP_REMOVE_TH_SET(_x)		USBDP_COMBO_REG_SET(_x, 0, 5)
#define USBDP_PCSREG_SKP_REMOVE_TH_GET(_x)		USBDP_COMBO_REG_GET(_R, 0, 5)

#define USBDP_PCSREG_BACK_END_MODE_VEC		0x020c
#define USBDP_PCSREG_SCRAMBLE_EN			USBDP_COMBO_REG_MSK(2, 1)
#define USBDP_PCSREG_DRAIN_EN				USBDP_COMBO_REG_MSK(1, 1)
#define USBDP_PCSREG_DISABLE_DATA_MASK			USBDP_COMBO_REG_MSK(0, 1)

#define USBDP_PCSREG_DET_COMP_EN_SET		0x0300
#define USBDP_PCSREG_COMP_EN_ASSERT_MASK		USBDP_COMBO_REG_MSK(0, 6)
#define USBDP_PCSREG_COMP_EN_ASSERT_SET(_x)		USBDP_COMBO_REG_SET(_x, 0, 6)
#define USBDP_PCSREG_COMP_EN_ASSERT_GET(_x)		USBDP_COMBO_REG_GET(_R, 0, 6)

#define USBDP_PCSREG_MASK_PMA_IF		0x0304
#define USBDP_PCSREG_VALUE_VEC_MASK			USBDP_COMBO_REG_MSK(8, 7)
#define USBDP_PCSREG_VALUE_VEC_SET(_x)			USBDP_COMBO_REG_SET(_x, 8, 7)
#define USBDP_PCSREG_VALUE_VEC_GET(_x)			USBDP_COMBO_REG_GET(_R, 8, 7)
#define USBDP_PCSREG_MASK_VEC_MASK			USBDP_COMBO_REG_MSK(0, 7)
#define USBDP_PCSREG_MASK_VEC_SET(_x)			USBDP_COMBO_REG_SET(_x, 0, 7)
#define USBDP_PCSREG_MASK_VEC_GET(_x)			USBDP_COMBO_REG_GET(_R, 0, 7)

#define USBDP_PCSREG_OUT_VEC_0			0x0420
#define USBDP_PCSREG_OUT_VEC_1			0x0424
#define USBDP_PCSREG_OUT_VEC_2			0x0428
#define USBDP_PCSREG_OUT_VEC_3			0x042c
#define USBDP_PCSREG_DYN_CON_PWR_DOWN			USBDP_COMBO_REG_MSK(21, 1)
#define USBDP_PCSREG_SEL_OUT_PWR_DOWN			USBDP_COMBO_REG_MSK(20, 1)
#define USBDP_PCSREG_DYN_CON_RCV_DET			USBDP_COMBO_REG_MSK(19, 1)
#define USBDP_PCSREG_SEL_OUT_RCV_DET			USBDP_COMBO_REG_MSK(18, 1)
#define USBDP_PCSREG_DYN_CON_RX_AFE			USBDP_COMBO_REG_MSK(17, 1)
#define USBDP_PCSREG_SEL_OUT_RX_AFE			USBDP_COMBO_REG_MSK(16, 1)
#define USBDP_PCSREG_DYN_CON_CM_KEEP			USBDP_COMBO_REG_MSK(15, 1)
#define USBDP_PCSREG_SEL_OUT_CM_KEEP			USBDP_COMBO_REG_MSK(14, 1)
#define USBDP_PCSREG_DYN_CON_TXDRV			USBDP_COMBO_REG_MSK(13, 1)
#define USBDP_PCSREG_SEL_OUT_TXDRV			USBDP_COMBO_REG_MSK(12, 1)
#define USBDP_PCSREG_DYN_CON_SER			USBDP_COMBO_REG_MSK(11, 1)
#define USBDP_PCSREG_SEL_OUT_SER			USBDP_COMBO_REG_MSK(10, 1)
#define USBDP_PCSREG_DYN_CON_DESER			USBDP_COMBO_REG_MSK(9, 1)
#define USBDP_PCSREG_SEL_OUT_DESER			USBDP_COMBO_REG_MSK(8, 1)
#define USBDP_PCSREG_DYN_CON_CDR			USBDP_COMBO_REG_MSK(7, 1)
#define USBDP_PCSREG_SEL_OUT_CDR			USBDP_COMBO_REG_MSK(6, 1)
#define USBDP_PCSREG_DYN_CON_RX_SQ			USBDP_COMBO_REG_MSK(5, 1)
#define USBDP_PCSREG_SEL_OUT_RX_SQ			USBDP_COMBO_REG_MSK(4, 1)
#define USBDP_PCSREG_DYN_CON_PLL			USBDP_COMBO_REG_MSK(3, 1)
#define USBDP_PCSREG_SEL_OUT_PLL			USBDP_COMBO_REG_MSK(2, 1)
#define USBDP_PCSREG_DYN_CON_BGR_BIAS			USBDP_COMBO_REG_MSK(1, 1)
#define USBDP_PCSREG_SEL_OUTBGR_BIAS			USBDP_COMBO_REG_MSK(0, 1)

#endif /* _PHY_EXYNOS_USBDP_REG_H_ */
