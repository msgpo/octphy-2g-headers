/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_GSM_ID.h

Copyright (c) 2016 Octasic Inc. All rights reserved.

Description: Contains the identifiers for the GSM API.

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.05.00-B780 (2016/01/14)

$Octasic_Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_GSM_ID_H__
#define __OCTVC1_GSM_ID_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octvc1_base.h"
#include "octvc1_gsm_base.h"

/****************************************************************************
	Command IDs
 ****************************************************************************/
#define cOCTVC1_GSM_MSG_TRX_OPEN_CID                                       ( ( 0x001 + cOCTVC1_GSM_CID_BASE )| cOCTVC1_MSG_LONG_PROCESSING_FLAG  ) 
#define cOCTVC1_GSM_MSG_TRX_CLOSE_CID                                      ( 0x002 + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TRX_STATUS_CID                                     ( 0x003 + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TRX_INFO_CID                                       ( 0x004 + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TRX_RESET_CID                                      ( 0x005 + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TRX_MODIFY_CID                                     ( 0x006 + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TRX_LIST_CID                                       ( 0x007 + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TRX_CLOSE_ALL_CID                                  ( 0x008 + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TRX_START_RECORD_CID                               ( 0x009 + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TRX_STOP_RECORD_CID                                ( 0x00a + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TRX_ACTIVATE_LOGICAL_CHANNEL_CID                   ( 0x00b + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TRX_DEACTIVATE_LOGICAL_CHANNEL_CID                 ( 0x00c + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TRX_STATUS_LOGICAL_CHANNEL_CID                     ( 0x00d + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TRX_INFO_LOGICAL_CHANNEL_CID                       ( 0x00e + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TRX_LIST_LOGICAL_CHANNEL_CID                       ( 0x00f + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_EMPTY_FRAME_CID        ( 0x010 + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_DATA_CID               ( 0x011 + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TRX_ACTIVATE_PHYSICAL_CHANNEL_CID                  ( 0x012 + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TRX_DEACTIVATE_PHYSICAL_CHANNEL_CID                ( 0x013 + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TRX_STATUS_PHYSICAL_CHANNEL_CID                    ( 0x014 + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TRX_RESET_PHYSICAL_CHANNEL_CID                     ( 0x015 + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TRX_LIST_PHYSICAL_CHANNEL_CID                      ( 0x016 + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_CID                      ( 0x017 + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TRX_MODIFY_PHYSICAL_CHANNEL_CIPHERING_CID          ( 0x018 + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_CIPHERING_CID            ( 0x019 + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_MEASUREMENT_CID          ( 0x01a + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TRX_INFO_RF_CID                                    ( 0x01b + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TRX_MODIFY_RF_CID                                  ( 0x01c + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TAP_FILTER_LIST_CID                                ( 0x01d + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TAP_FILTER_INFO_CID                                ( 0x01e + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TAP_FILTER_STATS_CID                               ( 0x01f + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TAP_FILTER_MODIFY_CID                              ( 0x020 + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TRX_START_LOGICAL_CHANNEL_RAW_DATA_INDICATIONS_CID ( 0x035 + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TRX_STOP_LOGICAL_CHANNEL_RAW_DATA_INDICATIONS_CID  ( 0x036 + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_CMU_LOOPBACK_TEST_CID  ( 0x037 + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TRX_REQUEST_STUBB_LOOPBACK_TEST_CID                ( 0x038 + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TRX_START_STUBB_LOOPBACK_TEST_CID                  ( 0x039 + cOCTVC1_GSM_CID_BASE )
#define cOCTVC1_GSM_MSG_TRX_STOP_STUBB_LOOPBACK_TEST_CID                   ( 0x03a + cOCTVC1_GSM_CID_BASE )

#define cOCTVC1_GSM_CID_MAX                                                (( 0x03a + 1 ) & 0xFFF)

/****************************************************************************
	Event IDs
 ****************************************************************************/
#define cOCTVC1_GSM_MSG_TRX_TIME_INDICATION_EID                          ( 0x0020 + cOCTVC1_GSM_EID_BASE )
#define cOCTVC1_GSM_MSG_TRX_STATUS_CHANGE_EID                            ( 0x0021 + cOCTVC1_GSM_EID_BASE )
#define cOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_DATA_INDICATION_EID          ( 0x0031 + cOCTVC1_GSM_EID_BASE )
#define cOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_READY_TO_SEND_INDICATION_EID ( 0x0032 + cOCTVC1_GSM_EID_BASE )
#define cOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RACH_INDICATION_EID          ( 0x0033 + cOCTVC1_GSM_EID_BASE )
#define cOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RAW_DATA_INDICATION_EID      ( 0x0034 + cOCTVC1_GSM_EID_BASE )

#define cOCTVC1_GSM_EID_MAX                                              (( 0x0034 + 1 ) & 0xFFFF)


#endif /* __OCTVC1_GSM_ID_H__ */

