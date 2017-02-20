/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_GSM_LIC.h

Copyright (c) 2017 Octasic Inc. All rights reserved.

Description: Contains the license ids for the GSM API.

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.07.00-B1314 (2017/01/18)

$Octasic_Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef OCTVC1_GSM_LIC_H__
#define OCTVC1_GSM_LIC_H__

#include "octvc1_gsm_base.h"

/****************************************************************************
	GSM license ids
 ****************************************************************************/
#define cOCTVC1_GSM_LIC_RF_BAND_ALL_ENABLE					 ( 0x0001 + (cOCTVC1_GSM_UID << 16) + ( 0x1 << 24 )  )
#define cOCTVC1_GSM_LIC_RF_BAND_410_ENABLE					 ( 0x0002 + (cOCTVC1_GSM_UID << 16) )
#define cOCTVC1_GSM_LIC_RF_BAND_450_ENABLE					 ( 0x0003 + (cOCTVC1_GSM_UID << 16) )
#define cOCTVC1_GSM_LIC_RF_BAND_480_ENABLE					 ( 0x0004 + (cOCTVC1_GSM_UID << 16) )
#define cOCTVC1_GSM_LIC_RF_BAND_710_ENABLE					 ( 0x0005 + (cOCTVC1_GSM_UID << 16) )
#define cOCTVC1_GSM_LIC_RF_BAND_750_ENABLE					 ( 0x0006 + (cOCTVC1_GSM_UID << 16) )
#define cOCTVC1_GSM_LIC_RF_BAND_810_ENABLE					 ( 0x0007 + (cOCTVC1_GSM_UID << 16) )
#define cOCTVC1_GSM_LIC_RF_BAND_850_ENABLE					 ( 0x0008 + (cOCTVC1_GSM_UID << 16) )
#define cOCTVC1_GSM_LIC_RF_BAND_900_ENABLE					 ( 0x0009 + (cOCTVC1_GSM_UID << 16) )
#define cOCTVC1_GSM_LIC_RF_BAND_1800_ENABLE					 ( 0x000A + (cOCTVC1_GSM_UID << 16) )
#define cOCTVC1_GSM_LIC_RF_BAND_1900_ENABLE					 ( 0x000B + (cOCTVC1_GSM_UID << 16) )
#define cOCTVC1_GSM_LIC_GPRS_EDGE_ENABLE					 ( 0x000C + (cOCTVC1_GSM_UID << 16) + ( 0x1 << 24 )  )
#define cOCTVC1_GSM_LIC_MULTI_TRX_ENABLE					 ( 0x000D + (cOCTVC1_GSM_UID << 16) )

#endif /* OCTVC1_GSM_LIC_H__ */

