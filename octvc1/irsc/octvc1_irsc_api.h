/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_IRSC_API.h

Copyright (c) 2016 Octasic Inc. All rights reserved.

Description: Contains the definition of the IRSC API.
 		OCTVC1 Internal Resources

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

$Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_IRSC_API_H__
#define __OCTVC1_IRSC_API_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../../octdev_types.h"
#include "../../octdev_devices.h"
#include "../octvc1_msg.h"
#include "../octvc1_handle.h"
#include "../octvc1_fifo.h"
#include "../octvc1_buffer.h"
#include "../octvc1_eth.h"
#include "../octvc1_mac.h"
#include "../octvc1_cursor.h"
#include "../octvc1_list.h"
#include "../octvc1_log.h"
#include "../octvc1_process.h"
#include "../octvc1_radio.h"
#include "../octvc1_api.h"
#include "../octvc1_module.h"
#include "../octvc1_tap.h"

#include "octvc1_irsc_id.h"
#include "octvc1_irsc_rc.h"

/************************  COMMON DEFINITIONS  *******************************/

/*-------------------------------------------------------------------------------------
 	IPC related definitions.
-------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------
 	IPC port type.
-------------------------------------------------------------------------------------*/
#define tOCTVC1_IRSC_IPC_PORT_TYPE_ENUM						tOCT_UINT32

#define cOCTVC1_IRSC_IPC_PORT_TYPE_ENUM_INVALID				0		
#define cOCTVC1_IRSC_IPC_PORT_TYPE_ENUM_UNIDIR_RECV			1		
#define cOCTVC1_IRSC_IPC_PORT_TYPE_ENUM_UNIDIR_SEND			2		
#define cOCTVC1_IRSC_IPC_PORT_TYPE_ENUM_BIDIR				3		
#define cOCTVC1_IRSC_IPC_PORT_TYPE_ENUM_LOCAL				4		

/*-------------------------------------------------------------------------------------
 	IPC port type.
-------------------------------------------------------------------------------------*/
#define tOCTVC1_IRSC_IPC_PORT_STATE_ENUM					tOCT_UINT32

#define cOCTVC1_IRSC_IPC_PORT_STATE_ENUM_INVALID			0		
#define cOCTVC1_IRSC_IPC_PORT_STATE_ENUM_ERROR				1		
#define cOCTVC1_IRSC_IPC_PORT_STATE_ENUM_CONFIG				2		
#define cOCTVC1_IRSC_IPC_PORT_STATE_ENUM_WAIT_REMOTE		3		
#define cOCTVC1_IRSC_IPC_PORT_STATE_ENUM_READY				4		

/*-------------------------------------------------------------------------------------
 	API related definitions
-------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_API_STATS
 		API stats

 Members:
	ulMaxProcessingTimeUs
 		Max time spent processing the command in micro second.
	ulMinProcessingTimeUs
 		Min time spent processing the command in micro second.
	ulTotalProcessingTimeUs
 		Total time spent processing the command in micro second.
	ulCmdCnt
 		How many time the command is called
	ulL1CacheMissCnt
 		Number of cache miss in L1 memory
	ulTlbCacheMissCnt
 		Number of cache miss in TLB memory
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCT_UINT32	ulMaxProcessingTimeUs;
	tOCT_UINT32	ulMinProcessingTimeUs;
	tOCT_UINT32	ulTotalProcessingTimeUs;
	tOCT_UINT32	ulCmdCnt;
	tOCT_UINT32	ulL1CacheMissCnt;
	tOCT_UINT32	ulTlbCacheMissCnt;

} tOCTVC1_IRSC_API_STATS;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_SESSION_STATS
 		API SESSION stats

 Members:
	ulLastCmdTimestamp
 		Timestamp of the last command received
	ulExpTransactionId
 		Next Expected transaction id
	ulAcceptedCmdCnt
 		Total of accepted commands
	ulRejectedCmdCnt
 		Total of rejected commands
	ulRetryCmdCnt
 		Total of retry commands
	ulResyncCnt
 		Total of transaction id resynchronization
	ulSessionCnt
 		Total of time this session index have been used with a different client session
	ulEvtSentCnt
 		Next Expected transaction id
	ulEvtSentErrCnt
 		Next Expected transaction id
	ulLastEvtTimestamp
 		Timestamp of the last event sent
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCT_UINT32	ulLastCmdTimestamp;
	tOCT_UINT32	ulExpTransactionId;
	tOCT_UINT32	ulAcceptedCmdCnt;
	tOCT_UINT32	ulRejectedCmdCnt;
	tOCT_UINT32	ulRetryCmdCnt;
	tOCT_UINT32	ulResyncCnt;
	tOCT_UINT32	ulSessionCnt;
	tOCT_UINT32	ulEvtSentCnt;
	tOCT_UINT32	ulEvtSentErrCnt;
	tOCT_UINT32	ulLastEvtTimestamp;

} tOCTVC1_IRSC_SESSION_STATS;

/*-------------------------------------------------------------------------------------
 	Application related definitions.
-------------------------------------------------------------------------------------*/
#define cOCTVC1_IRSC_APPLICATION_TAP_MAX_DESCRIPTION_BYTE_SIZE	255		 	/* Tap description buffer size, in bytes. */
#define cOCTVC1_IRSC_APPLICATION_TRANSPORT_MAX_DATA_SIZE	0xFFFFFFFF	 	/* Max transport size. Allow adapt tap packet size base the transport. */

/*-------------------------------------------------------------------------------------
 	Tap state.
-------------------------------------------------------------------------------------*/
#define tOCTVC1_IRSC_APPLICATION_TAP_STATE_ENUM				tOCT_UINT32

#define cOCTVC1_IRSC_APPLICATION_TAP_STATE_ENUM_DISABLE		0		
#define cOCTVC1_IRSC_APPLICATION_TAP_STATE_ENUM_STOP		1		
#define cOCTVC1_IRSC_APPLICATION_TAP_STATE_ENUM_START		2		

/*-------------------------------------------------------------------------------------
 	Tap state.
-------------------------------------------------------------------------------------*/
#define tOCTVC1_IRSC_APPLICATION_TAP_MODE_ENUM				tOCT_UINT32

#define cOCTVC1_IRSC_APPLICATION_TAP_MODE_ENUM_STREAM		0		

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_APPLICATION_TAP_INFO
 		Application Module information

 Members:
	ulModuleId
 		Current number of process active in this for this module.
	hProcess
 		Process handle where Tap is instantiate
	ulDirection
	ulDataSubType
 		Data sub type cOCTVOCNET_PKT_SUBTYPE_UNSPECIFIED,
 		cOCTVOCNET_PKT_SUBTYPE_MODULE_DATA
	szName
 		Tap Name.
	szDescription
 		Process file name.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MODULE_ID_ENUM		ulModuleId;
	tOCT_UINT32					hProcess;
	tOCTVC1_TAP_DIRECTION_ENUM	ulDirection;
	tOCT_UINT32					ulDataSubType;
	tOCT_INT8					szName[(cOCTVC1_HANDLE_OBJECT32_NAME_MAX_LENGTH+1)];/* NOSWAPMAC */
	tOCT_INT8					szDescription[(cOCTVC1_IRSC_APPLICATION_TAP_MAX_DESCRIPTION_BYTE_SIZE+1)];/* NOSWAPMAC */

} tOCTVC1_IRSC_APPLICATION_TAP_INFO;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_APPLICATION_TAP_STATS
 		API Command stats

 Members:
	ulState
		Default:	cOCTVC1_IRSC_APPLICATION_TAP_STATE_ENUM_DISABLE
	ulFilterIndex
	ulUserId
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_IRSC_APPLICATION_TAP_STATE_ENUM	ulState;
	tOCTVC1_INDEX							ulFilterIndex;
	tOCT_UINT32								ulUserId;

} tOCTVC1_IRSC_APPLICATION_TAP_STATS;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_APPLICATION_TAP_START
 		API Command stats

 Members:
	ulMode
		Default:	cOCTVC1_IRSC_APPLICATION_TAP_MODE_ENUM_STREAM
 		Tap handle identifier.
	ulMaxTransportDataSize
		Range:		[128..]
		Default:	cOCTVC1_IRSC_APPLICATION_TRANSPORT_MAX_DATA_SIZE
 		Maximum data byte size supported by transport.
	ulFilterIndex
		Default:	cOCTVC1_INDEX_INVALID
	ulUserId
		Default:	0
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_IRSC_APPLICATION_TAP_MODE_ENUM	ulMode;
	tOCT_UINT32								ulMaxTransportDataSize;
	tOCTVC1_INDEX							ulFilterIndex;
	tOCT_UINT32								ulUserId;

} tOCTVC1_IRSC_APPLICATION_TAP_START;

/*****************************  METHODS  *************************************/
/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_PROCESS_INFO_CMD

 Members:
	Header
 		OCTVC1 Message Header
	hProcess
		Default:	cOCTVC1_HANDLE_INVALID
 		Process handle identifier. Typically retrieved using the
 		cOCTVC1_MAIN_MSG_DEVICE_INFO_CID command.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_UINT32			hProcess;

} tOCTVC1_IRSC_MSG_PROCESS_INFO_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_PROCESS_INFO_RSP

 Members:
	Header
 		OCTVC1 Message Header
	hProcess
	szName
 		Process Name.
	szProcessImageName
 		Process file name.
	ulType
 		Process Type.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER			Header;
	tOCT_UINT32					hProcess;
	tOCT_INT8					szName[(cOCTVC1_HANDLE_OBJECT32_NAME_MAX_LENGTH+1)];/* NOSWAPMAC */
	tOCT_INT8					szProcessImageName[(cOCTVC1_PROCESS_IMAGE_NAME_MAX_LENGTH+1)];/* NOSWAPMAC */
	tOCTVC1_PROCESS_TYPE_ENUM	ulType;

} tOCTVC1_IRSC_MSG_PROCESS_INFO_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_PROCESS_STATS_CMD

 Members:
	Header
 		OCTVC1 Message Header
	hProcess
		Default:	cOCTVC1_HANDLE_INVALID
 		Process handle identifier.
	ulResetProcessStatsFlag
 		Statistics counters will be reset to zero after the current values are returned.
	ulResetIpcStatsFlag
 		Statistics counters for all IPC ports will be reset to zero after the current
 		values are returned.
	ulResetTaskStatsFlag
 		Statistics counters for all tasks will be reset to zero after the current
 		values are returned.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_UINT32			hProcess;
	tOCT_BOOL32			ulResetProcessStatsFlag;
	tOCT_BOOL32			ulResetIpcStatsFlag;
	tOCT_BOOL32			ulResetTaskStatsFlag;

} tOCTVC1_IRSC_MSG_PROCESS_STATS_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_PROCESS_STATS_RSP

 Members:
	Header
 		OCTVC1 Message Header
	hProcess
	State
 		Current process state.
	Error
 		Process Error
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER			Header;
	tOCT_UINT32					hProcess;
	tOCTVC1_PROCESS_STATE_ENUM	State;
	tOCTVC1_PROCESS_ERROR		Error;

} tOCTVC1_IRSC_MSG_PROCESS_STATS_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_PROCESS_LIST_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ObjectCursor
 		Object cursor
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER					Header;
	tOCTVC1_CURSOR_HANDLE_OBJECT_GET	ObjectCursor;

} tOCTVC1_IRSC_MSG_PROCESS_LIST_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_PROCESS_LIST_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ObjectCursor
 		Object cursor
	ObjectNameList
 		Object32 named list.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER					Header;
	tOCTVC1_CURSOR_HANDLE_OBJECT_GET	ObjectCursor;
	tOCTVC1_LIST_NAME_OBJECT32_GET		ObjectNameList;

} tOCTVC1_IRSC_MSG_PROCESS_LIST_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_PROCESS_INFO_IPC_PORT_CMD

 Members:
	Header
 		OCTVC1 Message Header
	hProcess
 		Process identifier
	ulPortId
 		IPC port identifier
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCTVC1_HANDLE_OBJECT	hProcess;
	tOCTVC1_SUB_OBJECT_ID	ulPortId;

} tOCTVC1_IRSC_MSG_PROCESS_INFO_IPC_PORT_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_PROCESS_INFO_IPC_PORT_RSP

 Members:
	Header
 		OCTVC1 Message Header
	hProcess
 		Process identifier
	ulPortId
 		IPC port identifier
	ulUserId
 		IPC port user identifier
	hRemoteProcess
 		Remote Process identifier
	ulRemotePortId
 		Remote IPC port identifier
	ulRemoteUserId
 		Remote IPC port user id
	szName
 		IPC Port Name.
	ulPortIdx
 		Process Local Port Idx
	ulType
 		Process Local Port Idx
	ulSystemFlag
 		System Flag
	ulGhostFlag
 		Ghost Flag. Use for internal test.
	ulRecvMsgNum
 		Reception array message number.
	ulRecvMsgSize
 		Reception message size in bytes.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER				Header;
	tOCTVC1_HANDLE_OBJECT			hProcess;
	tOCTVC1_SUB_OBJECT_ID			ulPortId;
	tOCT_UINT32						ulUserId;
	tOCTVC1_HANDLE_OBJECT			hRemoteProcess;
	tOCTVC1_SUB_OBJECT_ID			ulRemotePortId;
	tOCT_UINT32						ulRemoteUserId;
	tOCT_INT8						szName[(cOCTVC1_HANDLE_OBJECT32_NAME_MAX_LENGTH+1)];/* NOSWAPMAC */
	tOCT_UINT32						ulPortIdx;
	tOCTVC1_IRSC_IPC_PORT_TYPE_ENUM	ulType;
	tOCT_BOOL32						ulSystemFlag;
	tOCT_BOOL32						ulGhostFlag;
	tOCT_UINT32						ulRecvMsgNum;
	tOCT_UINT32						ulRecvMsgSize;

} tOCTVC1_IRSC_MSG_PROCESS_INFO_IPC_PORT_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_PROCESS_STATS_IPC_PORT_CMD

 Members:
	Header
 		OCTVC1 Message Header
	hProcess
 		Process identifier
	ulPortId
 		IPC port identifier
	ulResetStatsFlag
 		Statistics counters will be reset to zero after the current values are returned.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCTVC1_HANDLE_OBJECT	hProcess;
	tOCTVC1_SUB_OBJECT_ID	ulPortId;
	tOCT_BOOL32				ulResetStatsFlag;

} tOCTVC1_IRSC_MSG_PROCESS_STATS_IPC_PORT_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_PROCESS_STATS_IPC_PORT_RSP

 Members:
	Header
 		OCTVC1 Message Header
	hProcess
 		Process identifier
	ulPortId
 		IPC port identifier
	ulState
 		IPC port state
	ulSendMsgCnt
 		Count of message send
	ulRecvMsgCnt
 		Count of message received.
	ulRecvMsgMissCnt
 		Number of missing message
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER					Header;
	tOCTVC1_HANDLE_OBJECT				hProcess;
	tOCTVC1_SUB_OBJECT_ID				ulPortId;
	tOCTVC1_IRSC_IPC_PORT_STATE_ENUM	ulState;
	tOCT_UINT32							ulSendMsgCnt;
	tOCT_UINT32							ulRecvMsgCnt;
	tOCT_UINT32							ulRecvMsgMissCnt;

} tOCTVC1_IRSC_MSG_PROCESS_STATS_IPC_PORT_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_PROCESS_LIST_IPC_PORT_CMD

 Members:
	Header
 		OCTVC1 Message Header
	SubObjectIdGet
 		Object cursor
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER								Header;
	tOCTVC1_CURSOR_HANDLE_OBJECT_GET_SUB_OBJECT_ID	SubObjectIdGet;

} tOCTVC1_IRSC_MSG_PROCESS_LIST_IPC_PORT_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_PROCESS_LIST_IPC_PORT_RSP

 Members:
	Header
 		OCTVC1 Message Header
	SubObjectIdGet
 		Object cursor
	ObjectNameList
 		Object32 named list.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER									Header;
	tOCTVC1_CURSOR_HANDLE_OBJECT_GET_SUB_OBJECT_ID		SubObjectIdGet;
	tOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID_NAME	ObjectNameList;

} tOCTVC1_IRSC_MSG_PROCESS_LIST_IPC_PORT_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_PROCESS_INFO_TASK_CMD

 Members:
	Header
 		OCTVC1 Message Header
	hProcess
 		Process identifier
	ulTaskIndex
 		Task identifier
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCTVC1_HANDLE_OBJECT	hProcess;
	tOCTVC1_SUB_OBJECT_ID	ulTaskIndex;

} tOCTVC1_IRSC_MSG_PROCESS_INFO_TASK_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_PROCESS_INFO_TASK_RSP

 Members:
	Header
 		OCTVC1 Message Header
	hProcess
 		Process identifier
	ulTaskIndex
 		Task identifier
	szName
 		Name given to the task
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCTVC1_HANDLE_OBJECT	hProcess;
	tOCTVC1_SUB_OBJECT_ID	ulTaskIndex;
	tOCT_INT8				szName[(cOCTVC1_HANDLE_OBJECT32_NAME_MAX_LENGTH+1)];

} tOCTVC1_IRSC_MSG_PROCESS_INFO_TASK_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_PROCESS_STATS_TASK_CMD

 Members:
	Header
 		OCTVC1 Message Header
	hProcess
 		Process identifier
	ulTaskIndex
 		Task identifier
	ulResetStatsFlag
 		Statistics counters will be reset to zero after the current values are returned.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCTVC1_HANDLE_OBJECT	hProcess;
	tOCTVC1_SUB_OBJECT_ID	ulTaskIndex;
	tOCT_BOOL32				ulResetStatsFlag;

} tOCTVC1_IRSC_MSG_PROCESS_STATS_TASK_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_PROCESS_STATS_TASK_RSP

 Members:
	Header
 		OCTVC1 Message Header
	hProcess
 		Process identifier
	ulTaskIndex
 		Task identifier
	Stats
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER			Header;
	tOCTVC1_HANDLE_OBJECT		hProcess;
	tOCTVC1_SUB_OBJECT_ID		ulTaskIndex;
	tOCTVC1_PROCESS_TASK_STATS	Stats;

} tOCTVC1_IRSC_MSG_PROCESS_STATS_TASK_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_PROCESS_LIST_TASK_CMD

 Members:
	Header
 		OCTVC1 Message Header
	SubObjectIdGet
 		Object cursor
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER								Header;
	tOCTVC1_CURSOR_HANDLE_OBJECT_GET_SUB_OBJECT_ID	SubObjectIdGet;

} tOCTVC1_IRSC_MSG_PROCESS_LIST_TASK_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_PROCESS_LIST_TASK_RSP

 Members:
	Header
 		OCTVC1 Message Header
	SubObjectIdGet
 		Object cursor
	ObjectNameList
 		Object32 named list.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER									Header;
	tOCTVC1_CURSOR_HANDLE_OBJECT_GET_SUB_OBJECT_ID		SubObjectIdGet;
	tOCTVC1_LIST_HANDLE_OBJECT_GET_SUB_OBJECT_ID_NAME	ObjectNameList;

} tOCTVC1_IRSC_MSG_PROCESS_LIST_TASK_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_OBJMGR_INFO_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ulObjType
		Default:	cOCTVC1_HANDLE_INVALID
 		Process handle identifier. Typically retrieved using the
 		cOCTVC1_MAIN_MSG_DEVICE_INFO_CID command.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_UINT32			ulObjType;

} tOCTVC1_IRSC_MSG_OBJMGR_INFO_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_OBJMGR_INFO_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ulObjType
 		Type of object contained by the manager, represented as a number
	ulMaxNumObj
 		Max number of objects the manager can hold
	ulObjByteSize
 		Size in bytes of each object
	szName
 		Name given to the object manager
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_UINT32			ulObjType;
	tOCT_UINT32			ulMaxNumObj;
	tOCT_UINT32			ulObjByteSize;
	tOCT_INT8			szName[(cOCTVC1_HANDLE_OBJECT32_NAME_MAX_LENGTH+1)];

} tOCTVC1_IRSC_MSG_OBJMGR_INFO_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_OBJMGR_STATS_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ulObjType
 		Type of object contained by the manager, represented as a number
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_UINT32			ulObjType;

} tOCTVC1_IRSC_MSG_OBJMGR_STATS_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_OBJMGR_STATS_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ulObjType
 		Type of object contained by the manager, represented as a number
	ulMaxNumObj
 		Max number of objects the manager can hold
	ulNumObj
 		Current number of objects in the manager
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_UINT32			ulObjType;
	tOCT_UINT32			ulMaxNumObj;
	tOCT_UINT32			ulNumObj;

} tOCTVC1_IRSC_MSG_OBJMGR_STATS_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_OBJMGR_LIST_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ObjectCursor
 		Object cursor
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER					Header;
	tOCTVC1_CURSOR_HANDLE_OBJECT_GET	ObjectCursor;

} tOCTVC1_IRSC_MSG_OBJMGR_LIST_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_OBJMGR_LIST_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ObjectCursor
 		Object cursor
	ObjectNameList
 		>Object32 named list.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER					Header;
	tOCTVC1_CURSOR_HANDLE_OBJECT_GET	ObjectCursor;
	tOCTVC1_LIST_NAME_OBJECT32_GET		ObjectNameList;

} tOCTVC1_IRSC_MSG_OBJMGR_LIST_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_API_SYSTEM_START_MONITORING_CMD
 		Start the Api command timing

 Members:
	Header
 		OCTVC1 Message Header
	ulResetStatsFlag
		Default:	cOCT_TRUE
 		If set to cOCT_TRUE, all statistics counters will be reset to zero.
 		If set to cOCT_FALSE, counters will not be reset.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_BOOL32			ulResetStatsFlag;

} tOCTVC1_IRSC_MSG_API_SYSTEM_START_MONITORING_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_API_SYSTEM_START_MONITORING_RSP

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_IRSC_MSG_API_SYSTEM_START_MONITORING_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_API_SYSTEM_STOP_MONITORING_CMD
 		Stop the Api command timing

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_IRSC_MSG_API_SYSTEM_STOP_MONITORING_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_API_SYSTEM_STOP_MONITORING_RSP

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_IRSC_MSG_API_SYSTEM_STOP_MONITORING_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_API_SYSTEM_LIST_COMMAND_CMD
 		List the command since the monitoring is enabled.

 Members:
	Header
 		OCTVC1 Message Header
	ObjectCursor
 		Object cursor
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER					Header;
	tOCTVC1_CURSOR_HANDLE_OBJECT_GET	ObjectCursor;

} tOCTVC1_IRSC_MSG_API_SYSTEM_LIST_COMMAND_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_API_SYSTEM_LIST_COMMAND_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ObjectCursor
 		Object cursor
	ObjectList
 		Object List structure.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER					Header;
	tOCTVC1_CURSOR_HANDLE_OBJECT_GET	ObjectCursor;
	tOCTVC1_LIST_HANDLE_OBJECT_GET		ObjectList;

} tOCTVC1_IRSC_MSG_API_SYSTEM_LIST_COMMAND_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_COMMAND_CMD

 Members:
	Header
 		OCTVC1 Message Header
	hCmdId
	ulResetStatsFlag
		Default:	cOCT_FALSE
 		Statistics counters will be reset to zero after the current values are returned.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCTVC1_HANDLE_OBJECT	hCmdId;
	tOCT_BOOL32				ulResetStatsFlag;

} tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_COMMAND_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_COMMAND_RSP

 Members:
	Header
 		OCTVC1 Message Header
	hCmdId
	CommandStats
 		Monitoring entry asked
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCTVC1_HANDLE_OBJECT	hCmdId;
	tOCTVC1_IRSC_API_STATS	CommandStats;

} tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_COMMAND_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_API_SYSTEM_LIST_SESSION_CMD
 		List the cmd that are monitored

 Members:
	Header
 		OCTVC1 Message Header
	IndexGet
 		Object cursor
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER			Header;
	tOCTVC1_CURSOR_INDEX_GET	IndexGet;

} tOCTVC1_IRSC_MSG_API_SYSTEM_LIST_SESSION_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_API_SYSTEM_LIST_SESSION_RSP

 Members:
	Header
 		OCTVC1 Message Header
	IndexGet
 		Object cursor
	IndexList
 		Object name list.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER			Header;
	tOCTVC1_CURSOR_INDEX_GET	IndexGet;
	tOCTVC1_LIST_INDEX_GET		IndexList;

} tOCTVC1_IRSC_MSG_API_SYSTEM_LIST_SESSION_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ulSessionIndex
		Default:	cOCTVC1_API_SESSION_INDEX_CURRENT_TRANSPORT
 		Session index
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCTVC1_INDEX		ulSessionIndex;

} tOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ulSessionIndex
 		Session index
	SessionInfo
 		Session Info
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER			Header;
	tOCTVC1_INDEX				ulSessionIndex;
	tOCTVC1_API_SESSION_INFO	SessionInfo;

} tOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ulSessionIndex
		Default:	cOCTVC1_API_SESSION_INDEX_CURRENT_TRANSPORT
 		Session index
	ulResetStatsFlag
		Default:	cOCT_FALSE
 		Statistics counters will be reset to zero after the current values are returned.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCTVC1_INDEX		ulSessionIndex;
	tOCT_BOOL32			ulResetStatsFlag;

} tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ulSessionIndex
 		Session index
	SessionStats
 		Sessiont statistic asked
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER			Header;
	tOCTVC1_INDEX				ulSessionIndex;
	tOCTVC1_IRSC_SESSION_STATS	SessionStats;

} tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_EVT_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ulSessionIndex
		Default:	cOCTVC1_API_SESSION_INDEX_CURRENT_TRANSPORT
 		Session index
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCTVC1_INDEX		ulSessionIndex;

} tOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_EVT_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_EVT_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ulSessionIndex
 		Session index
	EvtInfo
 		Session event Info
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER				Header;
	tOCTVC1_INDEX					ulSessionIndex;
	tOCTVC1_API_SESSION_EVT_INFO	EvtInfo;

} tOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_EVT_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_EVT_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ulSessionIndex
		Default:	cOCTVC1_API_SESSION_INDEX_CURRENT_TRANSPORT
 		Session index
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCTVC1_INDEX		ulSessionIndex;

} tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_EVT_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_EVT_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ulSessionIndex
 		Session index
	Stats
 		Session event stats
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCTVC1_INDEX			ulSessionIndex;
	tOCTVC1_IRSC_API_STATS	Stats;

} tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_EVT_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_APPLICATION_LIST_TAP_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ObjectCursor
 		Object cursor
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER					Header;
	tOCTVC1_CURSOR_HANDLE_OBJECT_GET	ObjectCursor;

} tOCTVC1_IRSC_MSG_APPLICATION_LIST_TAP_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_APPLICATION_LIST_TAP_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ObjectCursor
 		Object cursor
	ObjectNameList
 		Object32 named list.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER					Header;
	tOCTVC1_CURSOR_HANDLE_OBJECT_GET	ObjectCursor;
	tOCTVC1_LIST_NAME_OBJECT32_GET		ObjectNameList;

} tOCTVC1_IRSC_MSG_APPLICATION_LIST_TAP_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_APPLICATION_INFO_TAP_CMD

 Members:
	Header
 		OCTVC1 Message Header
	hTapId
		Default:	cOCTVC1_HANDLE_INVALID
 		Tap identifier.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_UINT32			hTapId;

} tOCTVC1_IRSC_MSG_APPLICATION_INFO_TAP_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_APPLICATION_INFO_TAP_RSP

 Members:
	Header
 		OCTVC1 Message Header
	hTapId
	Info
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER					Header;
	tOCT_UINT32							hTapId;
	tOCTVC1_IRSC_APPLICATION_TAP_INFO	Info;

} tOCTVC1_IRSC_MSG_APPLICATION_INFO_TAP_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_APPLICATION_STATS_TAP_CMD

 Members:
	Header
 		OCTVC1 Message Header
	hTapId
		Default:	cOCTVC1_HANDLE_INVALID
 		Tap handle identifier.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_UINT32			hTapId;

} tOCTVC1_IRSC_MSG_APPLICATION_STATS_TAP_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_APPLICATION_STATS_TAP_RSP

 Members:
	Header
 		OCTVC1 Message Header
	hTapId
	Stats
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER					Header;
	tOCT_UINT32							hTapId;
	tOCTVC1_IRSC_APPLICATION_TAP_STATS	Stats;

} tOCTVC1_IRSC_MSG_APPLICATION_STATS_TAP_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_APPLICATION_START_TAP_CMD

 Members:
	Header
 		OCTVC1 Message Header
	hTapId
		Default:	cOCTVC1_HANDLE_INVALID
 		Tap handle identifier.
	Start
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER					Header;
	tOCT_UINT32							hTapId;
	tOCTVC1_IRSC_APPLICATION_TAP_START	Start;

} tOCTVC1_IRSC_MSG_APPLICATION_START_TAP_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_APPLICATION_START_TAP_RSP

 Members:
	Header
 		OCTVC1 Message Header
	hTapId
	hLogicalObj
 		Contains an Object Handle for the Tap that has been started
 		This handle will also be placed in
 		DataHeader.VocNetHeader.hLogicalObj.aulHandle[0]
 		of the tOCTVOCNET_PKT_DATA_FRAGMENT_HEADER at the header of each data packet
 		sent.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCT_UINT32				hTapId;
	tOCTVC1_HANDLE_OBJECT	hLogicalObj;

} tOCTVC1_IRSC_MSG_APPLICATION_START_TAP_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_APPLICATION_STOP_TAP_CMD

 Members:
	Header
 		OCTVC1 Message Header
	hTapId
		Default:	cOCTVC1_HANDLE_INVALID
 		Tap handle identifier.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_UINT32			hTapId;

} tOCTVC1_IRSC_MSG_APPLICATION_STOP_TAP_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_IRSC_MSG_APPLICATION_STOP_TAP_RSP

 Members:
	Header
 		OCTVC1 Message Header
	hTapId
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_UINT32			hTapId;

} tOCTVC1_IRSC_MSG_APPLICATION_STOP_TAP_RSP;


/***************  INCLUDE FILES WITH DEPENDENCIES ON THIS FILE  **************/
#include "octvc1_irsc_evt.h"

#endif /* __OCTVC1_IRSC_API_H__ */

