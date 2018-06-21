/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_IRSC_RC.h

Copyright (c) 2018 Octasic Inc. All rights reserved.

Description: Contains the return codes for the IRSC API.

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.11.00-B1927 (2018/04/27)

$Octasic_Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef OCTVC1_IRSC_RC_H__
#define OCTVC1_IRSC_RC_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octvc1_base.h"
#include "../octvc1_generic_rc.h"
#include "octvc1_irsc_base.h"

/****************************************************************************
	IRSC return codes
 ****************************************************************************/
#define cOCTVC1_IRSC_RC_INVALID_TASK						 ( 0x000A + cOCTVC1_IRSC_RC_BASE )

/****************************************************************************
	OBJMGR return codes
 ****************************************************************************/
#define cOCTVC1_IRSC_OBJMGR_RC_BASE							 ( 0x0450 + cOCTVC1_IRSC_RC_BASE )

#define cOCTVC1_IRSC_RC_OBJMGR_LIST_ERROR					 ( 0x0001 + cOCTVC1_IRSC_OBJMGR_RC_BASE )
#define cOCTVC1_IRSC_RC_OBJMGR_INVALID_OBJECT				 ( 0x0002 + cOCTVC1_IRSC_OBJMGR_RC_BASE )
#define cOCTVC1_IRSC_RC_OBJMGR_INTERNAL_ERROR				 ( 0x0003 + cOCTVC1_IRSC_OBJMGR_RC_BASE )
#define cOCTVC1_IRSC_RC_OBJMGR_NOT_INIT						 ( 0x0004 + cOCTVC1_IRSC_OBJMGR_RC_BASE )

/****************************************************************************
	ROUTER return codes
 ****************************************************************************/
#define cOCTVC1_IRSC_ROUTER_RC_BASE							 ( 0x0460 + cOCTVC1_IRSC_RC_BASE )

#define cOCTVC1_IRSC_RC_ROUTER_ROUTER_IF_INVALID			 ( 0x0001 + cOCTVC1_IRSC_ROUTER_RC_BASE )

/****************************************************************************
	API_COMMAND return codes
 ****************************************************************************/
#define cOCTVC1_IRSC_API_COMMAND_RC_BASE						 ( 0x0550 + cOCTVC1_IRSC_RC_BASE )

#define cOCTVC1_IRSC_RC_API_COMMAND_MONITORING_DISABLE			 ( 0x0002 + cOCTVC1_IRSC_API_COMMAND_RC_BASE )
#define cOCTVC1_IRSC_RC_API_COMMAND_MAX_REACHED					 ( 0x0003 + cOCTVC1_IRSC_API_COMMAND_RC_BASE )
#define cOCTVC1_IRSC_RC_API_COMMAND_MONITORING_ALREADY_START	 ( 0x0004 + cOCTVC1_IRSC_API_COMMAND_RC_BASE )
#define cOCTVC1_IRSC_RC_API_COMMAND_INTERNAL_ERROR				 ( 0x0005 + cOCTVC1_IRSC_API_COMMAND_RC_BASE )

/****************************************************************************
	Validate return codes
 ****************************************************************************/
#define cOCTVC1_IRSC_AUTO_VALIDATE_RC_BASE					 ( 0xF000 + cOCTVC1_IRSC_RC_BASE )

#define cOCTVC1_IRSC_RC_ROUTER_STREAMER_MODIFY_INVALID_LIMIT_BANDWIDTH_MBPS	 ( 0x1 + cOCTVC1_IRSC_AUTO_VALIDATE_RC_BASE )
#define cOCTVC1_IRSC_RC_ROUTER_STREAMER_MODIFY_INVALID_TO_HOST_STREAM_SEQUENCE_ID_INTERVAL	 ( 0x2 + cOCTVC1_IRSC_AUTO_VALIDATE_RC_BASE )
#define cOCTVC1_IRSC_RC_ROUTER_STREAMER_MODIFY_INVALID_TO_HOST_STREAM_INITIAL_PKT_CNT	 ( 0x3 + cOCTVC1_IRSC_AUTO_VALIDATE_RC_BASE )

#endif /* OCTVC1_IRSC_RC_H__ */

