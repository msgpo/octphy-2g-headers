/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_IRSC_EVT.h
Copyright (c) 2017 Octasic Inc. All rights reserved.

Description: Contains the event definition of the IRSC API.

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.07.01-B1351 (2017/02/13)

$Octasic_Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_IRSC_EVT_H__
#define __OCTVC1_IRSC_EVT_H__


/*****************************  INCLUDE FILES  *******************************/

#include "octvc1_irsc_api.h"

/************************  COMMON DEFINITIONS  *******************************/

/*****************************  NOTIFICATIONS  **********************************/
/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_PROCESS_DUMP_EVT

 Members:
	Header
	hProcess
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_EVENT_HEADER	Header;
	tOCTVC1_HANDLE_OBJECT	hProcess;

} tOCTVC1_IRSC_MSG_PROCESS_DUMP_EVT;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_APPLICATION_TAP_DATA_REQUEST_EVT

 Members:
	Header
	hTapId
	ulDataSize
	hLogicalObj
 		Contains an Object Handle for the Tap that has been started
 		This handle will also be placed in
 		DataHeader.VocNetHeader.hLogicalObj.aulHandle[0]
 		of the tOCTVOCNET_PKT_DATA_FRAGMENT_HEADER at the header of each data packet
 		sent.
	ulSequenceId
 		In the case of a retry, request data starting from this Sequence ID
	ulRetryFlag
 		Indicates if this event is a retry request
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_EVENT_HEADER	Header;
	tOCT_UINT32				hTapId;
	tOCT_UINT32				ulDataSize;
	tOCTVC1_HANDLE_OBJECT	hLogicalObj;
	tOCT_UINT32				ulSequenceId;
	tOCT_BOOL32				ulRetryFlag;

} tOCTVC1_IRSC_MSG_APPLICATION_TAP_DATA_REQUEST_EVT;


#endif /* __OCTVC1_IRSC_EVT_H__ */

