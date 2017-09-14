/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_API.h

Copyright (c) 2017 Octasic Inc. All rights reserved.

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.08.00-B1418 (2017/03/21)

$Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_API_H__
#define __OCTVC1_API_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octdev_types.h"
#include "octvc1_module.h"


/************************  COMMON DEFINITIONS  *******************************/

#define cOCTVC1_API_SESSION_INDEX_CURRENT_TRANSPORT			0xF0000000	 	/* Select the session used by the current transport. */

/*-------------------------------------------------------------------------------------
	tOCTVC1_API_SESSION_INFO
 		API SESSION information

 Members:
	ulActiveFlag
 		Session active flag
	ulSessionId
 		Session id
	ulTransportSessionIndex
 		Session Index use to transport this command
	ulTransportSessionId
 		Session ID use to transport this command
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCT_BOOL32		ulActiveFlag;
	tOCT_UINT32		ulSessionId;
	tOCTVC1_INDEX	ulTransportSessionIndex;
	tOCT_UINT32		ulTransportSessionId;

} tOCTVC1_API_SESSION_INFO;

/*-------------------------------------------------------------------------------------
	tOCTVC1_API_SESSION_EVT_SYSTEM_MODULE_MASK : 	API SYSTEM event module mask.
-------------------------------------------------------------------------------------*/
#define tOCTVC1_API_SESSION_EVT_SYSTEM_MODULE_MASK			tOCT_UINT32

#define cOCTVC1_API_SESSION_EVT_SYSTEM_MODULE_MASK_NONE		0x00000000	
#define cOCTVC1_API_SESSION_EVT_SYSTEM_MODULE_MASK_MAIN		((tOCT_UINT32)(0x00000001<<cOCTVC1_MODULE_ID_ENUM_MAIN) )	
#define cOCTVC1_API_SESSION_EVT_SYSTEM_MODULE_MASK_JOB		((tOCT_UINT32)(0x00000001<<cOCTVC1_MODULE_ID_ENUM_JOB) )	
#define cOCTVC1_API_SESSION_EVT_SYSTEM_MODULE_MASK_HW		((tOCT_UINT32)(0x00000001<<cOCTVC1_MODULE_ID_ENUM_HW) )	
#define cOCTVC1_API_SESSION_EVT_SYSTEM_MODULE_MASK_IRSC		((tOCT_UINT32)(0x00000001<<cOCTVC1_MODULE_ID_ENUM_IRSC) )	

/*-------------------------------------------------------------------------------------
	tOCTVC1_API_SESSION_EVT_INFO
 		API SESSION Event Info

 Members:
	ulEvtActiveFlag
 		Host event activate flag
	lEvtEnablerCnt
 		The number of entities that have enabled events on this session
	ulSystemEvtMask
 		System module enabled events on this session
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCT_BOOL32									ulEvtActiveFlag;
	tOCT_INT32									lEvtEnablerCnt;
	tOCTVC1_API_SESSION_EVT_SYSTEM_MODULE_MASK	ulSystemEvtMask;

} tOCTVC1_API_SESSION_EVT_INFO;


#endif /* __OCTVC1_API_H__ */

