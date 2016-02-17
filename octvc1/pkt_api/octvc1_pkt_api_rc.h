/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_PKT_API_RC.h

Copyright (c) 2016 Octasic Inc. All rights reserved.

Description: Contains the return codes for the PKT_API API.

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

#ifndef OCTVC1_PKT_API_RC_H__
#define OCTVC1_PKT_API_RC_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octvc1_generic_rc.h"

/****************************************************************************
	PKT_API return codes
 ****************************************************************************/
#define cOCTVC1_PKT_API_RC_OK								 ( 0x0000 )
#define cOCTVC1_PKT_API_RC_OS_ERROR							 ( 0x0001 + cOCTVC1_PKT_API_RC_BASE )
#define cOCTVC1_PKT_API_RC_TRANSPORT_ERROR					 ( 0x0002 + cOCTVC1_PKT_API_RC_BASE )
#define cOCTVC1_PKT_API_RC_TIMEOUT							 ( 0x0003 + cOCTVC1_PKT_API_RC_BASE )
#define cOCTVC1_PKT_API_RC_LOCAL_MAC_INDEX_NOT_FOUND		 ( 0x0004 + cOCTVC1_PKT_API_RC_BASE )
#define cOCTVC1_PKT_API_RC_BAD_PARAM						 ( 0x0005 + cOCTVC1_PKT_API_RC_BASE )
#define cOCTVC1_PKT_API_RC_INST_CNCT_NOMORE					 ( 0x0100 + cOCTVC1_PKT_API_RC_BASE )
#define cOCTVC1_PKT_API_RC_INST_PKT_NOMORE					 ( 0x0101 + cOCTVC1_PKT_API_RC_BASE )
#define cOCTVC1_PKT_API_RC_INST_SYNC_TOOMANY				 ( 0x0102 + cOCTVC1_PKT_API_RC_BASE )
#define cOCTVC1_PKT_API_RC_INST_CNCT_DEP					 ( 0x0103 + cOCTVC1_PKT_API_RC_BASE )
#define cOCTVC1_PKT_API_RC_INST_DISCOVER_INPROGRESS			 ( 0x0104 + cOCTVC1_PKT_API_RC_BASE )
#define cOCTVC1_PKT_API_RC_INST_RSP_TRUNCATE				 ( 0x0105 + cOCTVC1_PKT_API_RC_BASE )
#define cOCTVC1_PKT_API_RC_INST_TERMINATED					 ( 0x0106 + cOCTVC1_PKT_API_RC_BASE )
#define cOCTVC1_PKT_API_RC_CNCT_SESS_NOMORE					 ( 0x0200 + cOCTVC1_PKT_API_RC_BASE )
#define cOCTVC1_PKT_API_RC_CNCT_SESS_DEP					 ( 0x0201 + cOCTVC1_PKT_API_RC_BASE )
#define cOCTVC1_PKT_API_RC_CNCT_BRIDGE_DEP					 ( 0x0202 + cOCTVC1_PKT_API_RC_BASE )
#define cOCTVC1_PKT_API_RC_CNCT_ALREADY_OPEN				 ( 0x0203 + cOCTVC1_PKT_API_RC_BASE )
#define cOCTVC1_PKT_API_RC_INTERFACE_NAME_NOT_FOUND			 ( 0x0204 + cOCTVC1_PKT_API_RC_BASE )
#define cOCTVC1_PKT_API_RC_DEPENDENCIES						 ( 0x0205 + cOCTVC1_PKT_API_RC_BASE )
#define cOCTVC1_PKT_API_RC_SESS_CLOSE						 ( 0x0206 + cOCTVC1_PKT_API_RC_BASE )
#define cOCTVC1_PKT_API_RC_CNCT_CLOSE						 ( 0x0207 + cOCTVC1_PKT_API_RC_BASE )
#define cOCTVC1_PKT_API_RC_SESS_ALREADY_OPEN				 ( 0x0208 + cOCTVC1_PKT_API_RC_BASE )
#define cOCTVC1_PKT_API_RC_NOT_IMPLEMENT_YET				 ( 0x0209 + cOCTVC1_PKT_API_RC_BASE )
#define cOCTVC1_PKT_API_RC_DISPATCHER_NOT_READY				 ( 0x020A + cOCTVC1_PKT_API_RC_BASE )
#define cOCTVC1_PKT_API_RC_REQUIRES_MULTI_THREAD			 ( 0x020B + cOCTVC1_PKT_API_RC_BASE )

#endif /* OCTVC1_PKT_API_RC_H__ */

