/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_HW_ID.h

Copyright (c) 2015 Octasic Inc. All rights reserved.

Description: Contains the identifiers for the HW API.

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.03.00-B560 (2015/08/07)

$Octasic_Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_HW_ID_H__
#define __OCTVC1_HW_ID_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octvc1_base.h"
#include "octvc1_hw_base.h"

/****************************************************************************
	Command IDs
 ****************************************************************************/
#define cOCTVC1_HW_MSG_PCB_INFO_CID                       ( 0x001 + cOCTVC1_HW_CID_BASE )
#define cOCTVC1_HW_MSG_CPU_CORE_STATS_CID                 ( 0x002 + cOCTVC1_HW_CID_BASE )
#define cOCTVC1_HW_MSG_CPU_CORE_INFO_CID                  ( 0x003 + cOCTVC1_HW_CID_BASE )
#define cOCTVC1_HW_MSG_CPU_CORE_LIST_CID                  ( 0x004 + cOCTVC1_HW_CID_BASE )
#define cOCTVC1_HW_MSG_ETH_PORT_INFO_CID                  ( 0x005 + cOCTVC1_HW_CID_BASE )
#define cOCTVC1_HW_MSG_ETH_PORT_LIST_CID                  ( 0x006 + cOCTVC1_HW_CID_BASE )
#define cOCTVC1_HW_MSG_ETH_PORT_STATS_CID                 ( 0x007 + cOCTVC1_HW_CID_BASE )
#define cOCTVC1_HW_MSG_ETH_PORT_MODIFY_CID                ( 0x009 + cOCTVC1_HW_CID_BASE )
#define cOCTVC1_HW_MSG_RF_PORT_INFO_CID                   ( 0x00a + cOCTVC1_HW_CID_BASE )
#define cOCTVC1_HW_MSG_RF_PORT_STATS_CID                  ( 0x00b + cOCTVC1_HW_CID_BASE )
#define cOCTVC1_HW_MSG_RF_PORT_LIST_CID                   ( 0x00c + cOCTVC1_HW_CID_BASE )
#define cOCTVC1_HW_MSG_RF_PORT_LIST_ANTENNA_CID           ( 0x00d + cOCTVC1_HW_CID_BASE )
#define cOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_RX_CONFIG_CID ( 0x00e + cOCTVC1_HW_CID_BASE )
#define cOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_TX_CONFIG_CID ( 0x00f + cOCTVC1_HW_CID_BASE )
#define cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_INFO_CID            ( 0x012 + cOCTVC1_HW_CID_BASE )
#define cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_CID           ( 0x013 + cOCTVC1_HW_CID_BASE )
#define cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_INFO_SOURCE_CID     ( 0x014 + cOCTVC1_HW_CID_BASE )
#define cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SOURCE_CID   ( 0x015 + cOCTVC1_HW_CID_BASE )

#define cOCTVC1_HW_CID_MAX                                (( 0x017 + 1 ) & 0xFFF)

/****************************************************************************
	Event IDs
 ****************************************************************************/
#define cOCTVC1_HW_MSG_CPU_CORE_EXEC_REPORT_EID         ( 0x0001 + cOCTVC1_HW_EID_BASE )
#define cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATUS_CHANGE_EID ( 0x0002 + cOCTVC1_HW_EID_BASE )

#define cOCTVC1_HW_EID_MAX                              (( 0x0002 + 1 ) & 0xFFFF)


#endif /* __OCTVC1_HW_ID_H__ */

