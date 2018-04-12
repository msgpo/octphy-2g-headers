/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_CTRL_API.h

Copyright (c) 2018 Octasic Inc. All rights reserved.

Description: Contains the definition of the CTRL API.

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.10.00-B1837 (2018/02/21)

$Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_CTRL_API_H__
#define __OCTVC1_CTRL_API_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../../octdev_types.h"
#include "../octvc1_msg.h"
#include "../octvc1_handle.h"

#include "octvc1_ctrl_id.h"

/************************  COMMON DEFINITIONS  *******************************/

/*****************************  SUPERVISORY  *************************************/
/*-------------------------------------------------------------------------------------
	tOCTVC1_CTRL_MSG_MODULE_REJECT_SPV
 		OCTVC1 Reject Supervisory Command

 Members:
	Header
 		VocalloNet and API header.
	ulExpectedTransactionId
 		Transaction ID expected for this session.
	ulRejectedCmdId
 		Command ID of the command rejected.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER				Header;
	tOCT_UINT32						ulExpectedTransactionId;
	tOCT_UINT32						ulRejectedCmdId;

} tOCTVC1_CTRL_MSG_MODULE_REJECT_SPV;


/***************  INCLUDE FILES WITH DEPENDENCIES ON THIS FILE  **************/

#endif /* __OCTVC1_CTRL_API_H__ */

