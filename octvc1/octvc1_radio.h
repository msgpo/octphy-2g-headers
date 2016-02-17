/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_RADIO.h

Copyright (c) 2015 Octasic Inc. All rights reserved.

Description: 

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU Affero General Public License as published by
the Free Software Foundation; either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU Affero General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.04.00-B662 (2015/10/28)

$Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_RADIO_H__
#define __OCTVC1_RADIO_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octdev_types.h"


/************************  COMMON DEFINITIONS  *******************************/

/*-------------------------------------------------------------------------------------
 	Radio Standard Identifiers
-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------
	tOCTVC1_RADIO_STANDARD_ENUM :
-------------------------------------------------------------------------------------*/
#define tOCTVC1_RADIO_STANDARD_ENUM							tOCT_UINT32

#define cOCTVC1_RADIO_STANDARD_ENUM_GSM						0		
#define cOCTVC1_RADIO_STANDARD_ENUM_UMTS					1		
#define cOCTVC1_RADIO_STANDARD_ENUM_LTE						2		
#define cOCTVC1_RADIO_STANDARD_ENUM_INVALID					0xCAFEDECA	

/*-------------------------------------------------------------------------------------
 	Radio Standard GSM Frequency Band Identifiers
-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------
	tOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM :
-------------------------------------------------------------------------------------*/
#define tOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM			tOCT_UINT32

#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM_380		0		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM_410		1		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM_450		2		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM_480		3		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM_710		4		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM_750		5		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM_810		6		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM_850		7		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM_E_900		8		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM_P_900		9		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM_R_900		10		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM_DCS_1800	11		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM_PCS_1900	12		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM_LAST		13		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM_INVALID	0xCAFEDECA	

/*-------------------------------------------------------------------------------------
 	Radio Standard UMTS Frequency Band Identifiers
-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------
	tOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM :
-------------------------------------------------------------------------------------*/
#define tOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM			tOCT_UINT32

#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_1		0		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_2		1		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_3		2		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_4		3		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_5		4		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_6		5		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_7		6		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_8		7		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_9		8		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_10		9		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_11		10		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_12		11		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_13		12		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_14		13		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_15		14		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_16		15		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_17		16		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_18		17		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_19		18		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_20		19		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_21		20		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_22		21		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_23		22		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_24		23		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_25		24		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_26		25		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_ADD_2	26		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_ADD_4	27		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_ADD_5	28		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_ADD_6	29		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_ADD_7	30		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_ADD_10	31		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_ADD_12	32		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_ADD_13	33		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_ADD_14	34		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_ADD_19	35		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_ADD_25	36		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_ADD_26	37		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_LAST		38		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_INVALID	0xCAFEDECA	

/*-------------------------------------------------------------------------------------
 	Radio Standard LTE Frequency Band Identifiers
-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------
	tOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM :
-------------------------------------------------------------------------------------*/
#define tOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM			tOCT_UINT32

#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_1			0		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_2			1		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_3			2		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_4			3		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_5			4		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_6			5		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_7			6		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_8			7		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_9			8		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_10		9		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_11		10		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_12		11		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_13		12		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_14		13		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_15		14		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_16		15		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_17		16		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_18		17		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_19		18		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_20		19		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_21		20		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_22		21		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_23		22		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_24		23		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_25		24		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_26		25		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_27		26		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_28		27		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_29		28		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_30		29		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_31		30		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_32		31		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_33		32		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_34		33		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_35		34		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_36		35		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_37		36		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_38		37		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_39		38		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_40		39		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_41		40		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_42		41		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_43		42		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_44		43		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_LAST		44		
#define cOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_INVALID	0xCAFEDECA	

/*-------------------------------------------------------------------------------------
 	Radio Configiguration Script Identifiers
-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------
	tOCTVC1_RADIO_CONFIG_SCRIPT_TYPE_ENUM :
-------------------------------------------------------------------------------------*/
#define tOCTVC1_RADIO_CONFIG_SCRIPT_TYPE_ENUM				tOCT_UINT32

#define cOCTVC1_RADIO_CONFIG_SCRIPT_TYPE_ENUM_INVALID		0		
#define cOCTVC1_RADIO_CONFIG_SCRIPT_TYPE_ENUM_TEXT			1		
#define cOCTVC1_RADIO_CONFIG_SCRIPT_TYPE_ENUM_BIN			2		

/*-------------------------------------------------------------------------------------
 	Radio Direction Identifiers
-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------
	tOCTVC1_RADIO_ID_DIRECTION_ENUM :
-------------------------------------------------------------------------------------*/
#define tOCTVC1_RADIO_ID_DIRECTION_ENUM						tOCT_UINT32

#define cOCTVC1_RADIO_ID_DIRECTION_ENUM_INVALID				0		
#define cOCTVC1_RADIO_ID_DIRECTION_ENUM_DOWNLINK			1		
#define cOCTVC1_RADIO_ID_DIRECTION_ENUM_UPLINK				2		

/*-------------------------------------------------------------------------------------
 	Radio Standard Bandwidth Identifiers
-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------
	tOCTVC1_RADIO_STANDARD_BANDWIDTH_ENUM :
-------------------------------------------------------------------------------------*/
#define tOCTVC1_RADIO_STANDARD_BANDWIDTH_ENUM				tOCT_UINT32

#define cOCTVC1_RADIO_STANDARD_BANDWIDTH_ENUM_1P4MHZ		0		
#define cOCTVC1_RADIO_STANDARD_BANDWIDTH_ENUM_3MHZ			1		
#define cOCTVC1_RADIO_STANDARD_BANDWIDTH_ENUM_5MHZ			2		
#define cOCTVC1_RADIO_STANDARD_BANDWIDTH_ENUM_10MHZ			3		
#define cOCTVC1_RADIO_STANDARD_BANDWIDTH_ENUM_15MHZ			4		
#define cOCTVC1_RADIO_STANDARD_BANDWIDTH_ENUM_20MHZ			5		
#define cOCTVC1_RADIO_STANDARD_BANDWIDTH_ENUM_LAST			6		
#define cOCTVC1_RADIO_STANDARD_BANDWIDTH_ENUM_INVALID		0xCAFEDECA	

/*-------------------------------------------------------------------------------------
 	RX Gain control identifier
-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------
	tOCTVC1_RADIO_RX_GAIN_CTRL_MODE_ENUM :
-------------------------------------------------------------------------------------*/
#define tOCTVC1_RADIO_RX_GAIN_CTRL_MODE_ENUM				tOCT_UINT32

#define cOCTVC1_RADIO_RX_GAIN_CTRL_MODE_ENUM_MGC			0		 	/* Manual Gain Control */
#define cOCTVC1_RADIO_RX_GAIN_CTRL_MODE_ENUM_AGC_FAST_ATK	1		 	/* Automatic Gain Control */
#define cOCTVC1_RADIO_RX_GAIN_CTRL_MODE_ENUM_AGC_SLOW_ATK	2		 	/* Automatic Gain Control */


#endif /* __OCTVC1_RADIO_H__ */

