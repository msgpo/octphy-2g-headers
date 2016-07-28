/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_IRSC_ID.h

Copyright (c) 2016 Octasic Inc. All rights reserved.

Description: Contains the identifiers for the IRSC API.

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.06.00-B964 (2016/05/31)

$Octasic_Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_IRSC_ID_H__
#define __OCTVC1_IRSC_ID_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octvc1_base.h"
#include "octvc1_irsc_base.h"

/****************************************************************************
	Command IDs
 ****************************************************************************/
#define cOCTVC1_IRSC_MSG_PROCESS_INFO_CID                 ( 0x001 + cOCTVC1_IRSC_CID_BASE )
#define cOCTVC1_IRSC_MSG_PROCESS_STATS_CID                ( 0x002 + cOCTVC1_IRSC_CID_BASE )
#define cOCTVC1_IRSC_MSG_PROCESS_LIST_CID                 ( 0x003 + cOCTVC1_IRSC_CID_BASE )
#define cOCTVC1_IRSC_MSG_PROCESS_INFO_IPC_PORT_CID        ( 0x004 + cOCTVC1_IRSC_CID_BASE )
#define cOCTVC1_IRSC_MSG_PROCESS_STATS_IPC_PORT_CID       ( 0x005 + cOCTVC1_IRSC_CID_BASE )
#define cOCTVC1_IRSC_MSG_PROCESS_LIST_IPC_PORT_CID        ( 0x006 + cOCTVC1_IRSC_CID_BASE )
#define cOCTVC1_IRSC_MSG_PROCESS_INFO_TASK_CID            ( 0x007 + cOCTVC1_IRSC_CID_BASE )
#define cOCTVC1_IRSC_MSG_PROCESS_STATS_TASK_CID           ( 0x008 + cOCTVC1_IRSC_CID_BASE )
#define cOCTVC1_IRSC_MSG_PROCESS_LIST_TASK_CID            ( 0x009 + cOCTVC1_IRSC_CID_BASE )
#define cOCTVC1_IRSC_MSG_OBJMGR_INFO_CID                  ( 0x00a + cOCTVC1_IRSC_CID_BASE )
#define cOCTVC1_IRSC_MSG_OBJMGR_STATS_CID                 ( 0x00b + cOCTVC1_IRSC_CID_BASE )
#define cOCTVC1_IRSC_MSG_OBJMGR_LIST_CID                  ( 0x00c + cOCTVC1_IRSC_CID_BASE )
#define cOCTVC1_IRSC_MSG_API_SYSTEM_START_MONITORING_CID  ( 0x00d + cOCTVC1_IRSC_CID_BASE )
#define cOCTVC1_IRSC_MSG_API_SYSTEM_STOP_MONITORING_CID   ( 0x00e + cOCTVC1_IRSC_CID_BASE )
#define cOCTVC1_IRSC_MSG_API_SYSTEM_LIST_COMMAND_CID      ( 0x00f + cOCTVC1_IRSC_CID_BASE )
#define cOCTVC1_IRSC_MSG_API_SYSTEM_STATS_COMMAND_CID     ( 0x010 + cOCTVC1_IRSC_CID_BASE )
#define cOCTVC1_IRSC_MSG_API_SYSTEM_LIST_SESSION_CID      ( 0x011 + cOCTVC1_IRSC_CID_BASE )
#define cOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_CID      ( 0x012 + cOCTVC1_IRSC_CID_BASE )
#define cOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_CID     ( 0x013 + cOCTVC1_IRSC_CID_BASE )
#define cOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_EVT_CID  ( 0x014 + cOCTVC1_IRSC_CID_BASE )
#define cOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_EVT_CID ( 0x015 + cOCTVC1_IRSC_CID_BASE )
#define cOCTVC1_IRSC_MSG_APPLICATION_LIST_TAP_CID         ( 0x016 + cOCTVC1_IRSC_CID_BASE )
#define cOCTVC1_IRSC_MSG_APPLICATION_INFO_TAP_CID         ( 0x017 + cOCTVC1_IRSC_CID_BASE )
#define cOCTVC1_IRSC_MSG_APPLICATION_STATS_TAP_CID        ( 0x018 + cOCTVC1_IRSC_CID_BASE )
#define cOCTVC1_IRSC_MSG_APPLICATION_START_TAP_CID        ( 0x019 + cOCTVC1_IRSC_CID_BASE )
#define cOCTVC1_IRSC_MSG_APPLICATION_STOP_TAP_CID         ( 0x01a + cOCTVC1_IRSC_CID_BASE )
#define cOCTVC1_IRSC_MSG_ROUTER_INFO_CID                  ( 0x01b + cOCTVC1_IRSC_CID_BASE )
#define cOCTVC1_IRSC_MSG_ROUTER_STATS_CID                 ( 0x01c + cOCTVC1_IRSC_CID_BASE )

#define cOCTVC1_IRSC_CID_MAX                              (( 0x01c + 1 ) & 0xFFF)

/****************************************************************************
	Event IDs
 ****************************************************************************/
#define cOCTVC1_IRSC_MSG_PROCESS_DUMP_EID                 ( 0x0001 + cOCTVC1_IRSC_EID_BASE )
#define cOCTVC1_IRSC_MSG_APPLICATION_TAP_DATA_REQUEST_EID ( 0x0002 + cOCTVC1_IRSC_EID_BASE )

#define cOCTVC1_IRSC_EID_MAX                              (( 0x0002 + 1 ) & 0xFFFF)


#endif /* __OCTVC1_IRSC_ID_H__ */

