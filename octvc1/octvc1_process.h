/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_PROCESS.h

Copyright (c) 2015 Octasic Inc. All rights reserved.

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.03.00-B560 (2015/08/07)

$Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_PROCESS_H__
#define __OCTVC1_PROCESS_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octdev_types.h"
#include "octvc1_base.h"
#include "octvc1_module.h"


/************************  COMMON DEFINITIONS  *******************************/

/*-------------------------------------------------------------------------------------
 	PROCESS related definitions.
-------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------
 	Process type.
 	Process type.
-------------------------------------------------------------------------------------*/
#define tOCTVC1_PROCESS_TYPE_ENUM							tOCT_UINT32

#define cOCTVC1_PROCESS_TYPE_ENUM_INVALID					0		
#define cOCTVC1_PROCESS_TYPE_ENUM_CONTROL					1		
#define cOCTVC1_PROCESS_TYPE_ENUM_GSM_SCHED					2		
#define cOCTVC1_PROCESS_TYPE_ENUM_GSM_DL					3		
#define cOCTVC1_PROCESS_TYPE_ENUM_GSM_ULIM					4		
#define cOCTVC1_PROCESS_TYPE_ENUM_GSM_ULOM					5		
#define cOCTVC1_PROCESS_IMAGE_NAME_MAX_LENGTH				63		 	/* Process image string length restriction. */

/*-------------------------------------------------------------------------------------
 	Process utilization type.
-------------------------------------------------------------------------------------*/
#define tOCTVC1_PROCESS_STATE_ENUM							tOCT_UINT32

#define cOCTVC1_PROCESS_STATE_ENUM_INVALID					0		
#define cOCTVC1_PROCESS_STATE_ENUM_RESET					1		
#define cOCTVC1_PROCESS_STATE_ENUM_CREATE					2		
#define cOCTVC1_PROCESS_STATE_ENUM_WAITING					3		
#define cOCTVC1_PROCESS_STATE_ENUM_READY					4		
#define cOCTVC1_PROCESS_STATE_ENUM_RUNNING					5		
#define cOCTVC1_PROCESS_STATE_ENUM_ERROR					6		
#define cOCTVC1_PROCESS_STATE_ENUM_HALT						7		

/*-------------------------------------------------------------------------------------
	tOCTVC1_PROCESS_ERROR
 		Process Errors

 Members:
	ulInputOverflowCnt
 		Count of process input overflow
	ulInputUnderflowCnt
 		Count of process input underflow
	ulOutputOverflowCnt
 		Count of process output overflow
	ulOutputUnderflowCnt
 		Count of process output underflow
	ulIpcMsgMissCnt
 		Total number of IPC messages the process missed.
	ulLastErrorRc
 		An error code that should be set when the process has encountered an error
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCT_UINT32	ulInputOverflowCnt;
	tOCT_UINT32	ulInputUnderflowCnt;
	tOCT_UINT32	ulOutputOverflowCnt;
	tOCT_UINT32	ulOutputUnderflowCnt;
	tOCT_UINT32	ulIpcMsgMissCnt;
	tOCT_UINT32	ulLastErrorRc;

} tOCTVC1_PROCESS_ERROR;

/*-------------------------------------------------------------------------------------
 	Process task state.
-------------------------------------------------------------------------------------*/
#define tOCTVC1_PROCESS_TASK_STATE_ENUM						tOCT_UINT32

#define cOCTVC1_PROCESS_TASK_STATE_ENUM_INVALID				0		
#define cOCTVC1_PROCESS_TASK_STATE_ENUM_ERROR				1		
#define cOCTVC1_PROCESS_TASK_STATE_ENUM_IDLE				2		
#define cOCTVC1_PROCESS_TASK_STATE_ENUM_PENDING				3		
#define cOCTVC1_PROCESS_TASK_STATE_ENUM_RUNNING				4		
#define cOCTVC1_PROCESS_TASK_STATE_ENUM_WAIT_TIMER			5		

/*-------------------------------------------------------------------------------------
	tOCTVC1_PROCESS_TASK_STATS

 Members:
	ulUserData
 		User data
	ulMaxExecTimeUs
 		Task's longest execution time (in microseconds)
	ulAvgExecTimeUs
 		Task's average execution time (in microseconds)
	ulLastExecTimeUs
 		Task's last execution time (in microseconds)
	ulMaxExecCacheMissCnt
 		Task's maximum cache miss in one execution
	ulLastExecCacheMissCnt
 		Task's last execution cache miss count
	ulExecCnt
 		Number of times the task has been executed
	ulDoneCnt
 		Number of times the task has been completed
	ulErrorCnt
 		Number of times the task returned an error
	State
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCT_UINT32						ulUserData;
	tOCT_UINT32						ulMaxExecTimeUs;
	tOCT_UINT32						ulAvgExecTimeUs;
	tOCT_UINT32						ulLastExecTimeUs;
	tOCT_UINT32						ulMaxExecCacheMissCnt;
	tOCT_UINT32						ulLastExecCacheMissCnt;
	tOCT_UINT32						ulExecCnt;
	tOCT_UINT32						ulDoneCnt;
	tOCT_UINT32						ulErrorCnt;
	tOCTVC1_PROCESS_TASK_STATE_ENUM	State;

} tOCTVC1_PROCESS_TASK_STATS;

/*-------------------------------------------------------------------------------------
	tOCTVC1_PROCESS_CPU_USAGE_STATS

 Members:
	ulProcessCpuUsagePercent
 		Current Process CPU usage value, expressed as a percentage.
	ulProcessCpuUsageMinPercent
 		Minimal Process CPU usage value, since last command request.
	ulProcessCpuUsageMaxPercent
 		Minimal Process CPU usage value, since last command.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCT_UINT32	ulProcessCpuUsagePercent;
	tOCT_UINT32	ulProcessCpuUsageMinPercent;
	tOCT_UINT32	ulProcessCpuUsageMaxPercent;

} tOCTVC1_PROCESS_CPU_USAGE_STATS;


#endif /* __OCTVC1_PROCESS_H__ */

