/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_GSM_EVT.h
Copyright (c) 2016 Octasic Inc. All rights reserved.

Description: Contains the event definition of the GSM API.

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

#ifndef __OCTVC1_GSM_EVT_H__
#define __OCTVC1_GSM_EVT_H__


/*****************************  INCLUDE FILES  *******************************/

#include "octvc1_gsm_api.h"

/************************  COMMON DEFINITIONS  *******************************/

/*****************************  NOTIFICATIONS  **********************************/
/*-------------------------------------------------------------------------------------
	tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_DATA_INDICATION_EVT

 Members:
	Header
	TrxId
 		Unique TRX identifier
	LchId
 		Unique Logical channel identifier
	MeasurementInfo
	Data
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_EVENT_HEADER				Header;
	tOCTVC1_GSM_TRX_ID					TrxId;
	tOCTVC1_GSM_LOGICAL_CHANNEL_ID		LchId;
	tOCTVC1_GSM_MEASUREMENT_INFO		MeasurementInfo;
	tOCTVC1_GSM_LOGICAL_CHANNEL_DATA	Data;

} tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_DATA_INDICATION_EVT;

/*-------------------------------------------------------------------------------------
	tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_READY_TO_SEND_INDICATION_EVT

 Members:
	Header
	TrxId
 		Unique TRX identifier
	LchId
 		Unique Logical channel identifier
	ulFrameNumber
		Range:		[..cOCTVC1_GSM_MAX_FRAME_COUNT]
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_EVENT_HEADER			Header;
	tOCTVC1_GSM_TRX_ID				TrxId;
	tOCTVC1_GSM_LOGICAL_CHANNEL_ID	LchId;
	tOCT_UINT32						ulFrameNumber;

} tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_READY_TO_SEND_INDICATION_EVT;

/*-------------------------------------------------------------------------------------
	tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RACH_INDICATION_EVT

 Members:
	Header
	TrxId
 		Unique TRX identifier
	LchId
 		Unique Logical channel identifier
	ulBurstType
	ulFrameNumber
		Range:		[..cOCTVC1_GSM_MAX_FRAME_COUNT]
	MeasurementInfo
	ulMsgLength
		Range:		[..cOCTVC1_GSM_RACH_IND_MSG_SIZE]
	abyMsg
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_EVENT_HEADER			Header;
	tOCTVC1_GSM_TRX_ID				TrxId;
	tOCTVC1_GSM_LOGICAL_CHANNEL_ID	LchId;
	tOCTVC1_GSM_BURST_TYPE_ENUM		ulBurstType;
	tOCT_UINT32						ulFrameNumber;
	tOCTVC1_GSM_MEASUREMENT_INFO	MeasurementInfo;
	tOCT_UINT32						ulMsgLength;
	tOCT_UINT8						abyMsg[cOCTVC1_GSM_RACH_IND_MSG_SIZE];

} tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RACH_INDICATION_EVT;

/*-------------------------------------------------------------------------------------
	tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RAW_DATA_INDICATION_EVT

 Members:
	Header
	TrxId
 		Unique TRX identifier
	LchId
 		Unique Logical channel identifier
	MeasurementInfo
	Data
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_EVENT_HEADER					Header;
	tOCTVC1_GSM_TRX_ID						TrxId;
	tOCTVC1_GSM_LOGICAL_CHANNEL_ID			LchId;
	tOCTVC1_GSM_RAW_MEASUREMENT_INFO		MeasurementInfo;
	tOCTVC1_GSM_LOGICAL_CHANNEL_RAW_DATA	Data;

} tOCTVC1_GSM_MSG_TRX_LOGICAL_CHANNEL_RAW_DATA_INDICATION_EVT;

/*-------------------------------------------------------------------------------------
	tOCTVC1_GSM_MSG_TRX_TIME_INDICATION_EVT

 Members:
	Header
	TrxId
 		Unique TRX identifier
	ulFrameNumber
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_EVENT_HEADER	Header;
	tOCTVC1_GSM_TRX_ID		TrxId;
	tOCT_UINT32				ulFrameNumber;

} tOCTVC1_GSM_MSG_TRX_TIME_INDICATION_EVT;

/*-------------------------------------------------------------------------------------
	tOCTVC1_GSM_MSG_TRX_STATUS_CHANGE_EVT

 Members:
	Header
	TrxId
 		Unique TRX identifier
	ulStatus
 		TRX STATUS event
	ulFrameNumber
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_EVENT_HEADER		Header;
	tOCTVC1_GSM_TRX_ID			TrxId;
	tOCTVC1_GSM_TRX_STATUS_ENUM	ulStatus;
	tOCT_UINT32					ulFrameNumber;

} tOCTVC1_GSM_MSG_TRX_STATUS_CHANGE_EVT;


#endif /* __OCTVC1_GSM_EVT_H__ */

