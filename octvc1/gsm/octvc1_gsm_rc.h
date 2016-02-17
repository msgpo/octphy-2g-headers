/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_GSM_RC.h

Copyright (c) 2016 Octasic Inc. All rights reserved.

Description: Contains the return codes for the GSM API.

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.05.00-B818 (2016/02/11)

$Octasic_Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef OCTVC1_GSM_RC_H__
#define OCTVC1_GSM_RC_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octvc1_base.h"
#include "octvc1_gsm_base.h"

/****************************************************************************
	GSM return codes
 ****************************************************************************/

/****************************************************************************
	GENERIC return codes
 ****************************************************************************/
#define cOCTVC1_GSM_GENERIC_RC_BASE							 ( 0x0100 + cOCTVC1_GSM_RC_BASE )

#define cOCTVC1_GSM_RC_GENERIC_EVENT_MASK_INVALID			 ( 0x0000 + cOCTVC1_GSM_GENERIC_RC_BASE )

/****************************************************************************
	TRX return codes
 ****************************************************************************/
#define cOCTVC1_GSM_TRX_RC_BASE								 ( 0x0200 + cOCTVC1_GSM_RC_BASE )

#define cOCTVC1_GSM_RC_TRX_RESOURCE_UNAVAILABLE				 ( 0x0000 + cOCTVC1_GSM_TRX_RC_BASE )
#define cOCTVC1_GSM_RC_TRX_ALREADY_OPENED					 ( 0x0001 + cOCTVC1_GSM_TRX_RC_BASE )
#define cOCTVC1_GSM_RC_TRX_ID_INVALID						 ( 0x0002 + cOCTVC1_GSM_TRX_RC_BASE )
#define cOCTVC1_GSM_RC_TRX_NOT_FOUND						 ( 0x0003 + cOCTVC1_GSM_TRX_RC_BASE )
#define cOCTVC1_GSM_RC_TRX_RADIO_INIT						 ( 0x0004 + cOCTVC1_GSM_TRX_RC_BASE )
#define cOCTVC1_GSM_RC_TRX_RADIO_CONFIG						 ( 0x0005 + cOCTVC1_GSM_TRX_RC_BASE )
#define cOCTVC1_GSM_RC_TRX_RADIO_RESET						 ( 0x0006 + cOCTVC1_GSM_TRX_RC_BASE )
#define cOCTVC1_GSM_RC_TRX_RADIO_TERMINATE					 ( 0x0007 + cOCTVC1_GSM_TRX_RC_BASE )

/****************************************************************************
	PHYSICAL_CHANNEL return codes
 ****************************************************************************/
#define cOCTVC1_GSM_PHYSICAL_CHANNEL_RC_BASE					 ( 0x0300 + cOCTVC1_GSM_RC_BASE )

#define cOCTVC1_GSM_RC_PHYSICAL_CHANNEL_RESOURCE_UNAVAILABLE	 ( 0x0000 + cOCTVC1_GSM_PHYSICAL_CHANNEL_RC_BASE )
#define cOCTVC1_GSM_RC_PHYSICAL_CHANNEL_ALREADY_ACTIVATED		 ( 0x0001 + cOCTVC1_GSM_PHYSICAL_CHANNEL_RC_BASE )
#define cOCTVC1_GSM_RC_PHYSICAL_CHANNEL_NOT_ACTIVATED			 ( 0x0002 + cOCTVC1_GSM_PHYSICAL_CHANNEL_RC_BASE )
#define cOCTVC1_GSM_RC_PHYSICAL_CHANNEL_ID_INVALID				 ( 0x0003 + cOCTVC1_GSM_PHYSICAL_CHANNEL_RC_BASE )

/****************************************************************************
	SUB_CHANNEL return codes
 ****************************************************************************/
#define cOCTVC1_GSM_SUB_CHANNEL_RC_BASE						 ( 0x0350 + cOCTVC1_GSM_RC_BASE )

#define cOCTVC1_GSM_RC_SUB_CHANNEL_ID_INVALID				 ( 0x0000 + cOCTVC1_GSM_SUB_CHANNEL_RC_BASE )
#define cOCTVC1_GSM_RC_SUB_CHANNEL_DIRECTION_INVALID		 ( 0x0001 + cOCTVC1_GSM_SUB_CHANNEL_RC_BASE )

/****************************************************************************
	LOGICAL_CHANNEL return codes
 ****************************************************************************/
#define cOCTVC1_GSM_LOGICAL_CHANNEL_RC_BASE					 ( 0x0400 + cOCTVC1_GSM_RC_BASE )

#define cOCTVC1_GSM_RC_LOGICAL_CHANNEL_RESOURCE_UNAVAILABLE	 ( 0x0000 + cOCTVC1_GSM_LOGICAL_CHANNEL_RC_BASE )
#define cOCTVC1_GSM_RC_LOGICAL_CHANNEL_ALREADY_ACTIVATED	 ( 0x0001 + cOCTVC1_GSM_LOGICAL_CHANNEL_RC_BASE )
#define cOCTVC1_GSM_RC_LOGICAL_CHANNEL_NOT_ACTIVATED		 ( 0x0002 + cOCTVC1_GSM_LOGICAL_CHANNEL_RC_BASE )
#define cOCTVC1_GSM_RC_LOGICAL_CHANNEL_ID_INVALID			 ( 0x0003 + cOCTVC1_GSM_LOGICAL_CHANNEL_RC_BASE )
#define cOCTVC1_GSM_RC_LOGICAL_CHANNEL_DIRECTION_INVALID	 ( 0x0004 + cOCTVC1_GSM_LOGICAL_CHANNEL_RC_BASE )
#define cOCTVC1_GSM_RC_LOGICAL_CHANNEL_SAPI_INVALID			 ( 0x0005 + cOCTVC1_GSM_LOGICAL_CHANNEL_RC_BASE )

/****************************************************************************
	Validate return codes
 ****************************************************************************/
#define cOCTVC1_GSM_AUTO_VALIDATE_RC_BASE										 ( 0xF000 + cOCTVC1_GSM_RC_BASE )

#define cOCTVC1_GSM_RC_RF_CONFIG_INVALID_RX_GAIN_DB								 ( 0x1 + cOCTVC1_GSM_AUTO_VALIDATE_RC_BASE )
#define cOCTVC1_GSM_RC_RF_CONFIG_INVALID_TX_ATTND_B								 ( 0x2 + cOCTVC1_GSM_AUTO_VALIDATE_RC_BASE )
#define cOCTVC1_GSM_RC_TRX_CONFIG_INVALID_US_TSC								 ( 0x3 + cOCTVC1_GSM_AUTO_VALIDATE_RC_BASE )
#define cOCTVC1_GSM_RC_BUFF_ADDR_INVALID_BUFF_ADDR__TCHFS						 ( 0x4 + cOCTVC1_GSM_AUTO_VALIDATE_RC_BASE )
#define cOCTVC1_GSM_RC_BUFF_ADDR_INVALID_BUFF_ADDR__RACH						 ( 0x5 + cOCTVC1_GSM_AUTO_VALIDATE_RC_BASE )
#define cOCTVC1_GSM_RC_LOGICAL_CHANNEL_DATA_INVALID_FRAME_NUMBER				 ( 0x6 + cOCTVC1_GSM_AUTO_VALIDATE_RC_BASE )
#define cOCTVC1_GSM_RC_LOGICAL_CHANNEL_DATA_INVALID_DATA_LENGTH					 ( 0x7 + cOCTVC1_GSM_AUTO_VALIDATE_RC_BASE )
#define cOCTVC1_GSM_RC_LOGICAL_CHANNEL_RAW_DATA_INVALID_FRAME_NUMBER			 ( 0x8 + cOCTVC1_GSM_AUTO_VALIDATE_RC_BASE )
#define cOCTVC1_GSM_RC_LOGICAL_CHANNEL_RAW_DATA_INVALID_DATA_LENGTH				 ( 0x9 + cOCTVC1_GSM_AUTO_VALIDATE_RC_BASE )
#define cOCTVC1_GSM_RC_TAP_FILTER_PHYSICAL_CHANNEL_INVALID_ENTRY_CNT			 ( 0xA + cOCTVC1_GSM_AUTO_VALIDATE_RC_BASE )
#define cOCTVC1_GSM_RC_TAP_FILTER_LOGICAL_CHANNEL_INVALID_ENTRY_CNT				 ( 0xB + cOCTVC1_GSM_AUTO_VALIDATE_RC_BASE )
#define cOCTVC1_GSM_RC_TAP_FILTER_STATS_INVALID_TAP_ID_CNT						 ( 0xC + cOCTVC1_GSM_AUTO_VALIDATE_RC_BASE )
#define cOCTVC1_GSM_RC_MODULE_DATA_RF_UPLINK_INPUT_HEADER_INVALID_FRAME_NUMBER	 ( 0xD + cOCTVC1_GSM_AUTO_VALIDATE_RC_BASE )
#define cOCTVC1_GSM_RC_TRX_LOGICAL_CHANNEL_EMPTY_FRAME_REQUEST_INVALID_FRAME_NUMBER	 ( 0xE + cOCTVC1_GSM_AUTO_VALIDATE_RC_BASE )

#endif /* OCTVC1_GSM_RC_H__ */

