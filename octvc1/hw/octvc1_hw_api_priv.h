/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_HW_API_PRIV.h

Copyright (c) 2018 Octasic Inc. All rights reserved.

Description: Contains the definition of the HW API.

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

$Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_HW_API_PRIV_H__
#define __OCTVC1_HW_API_PRIV_H__


/*****************************  INCLUDE FILES  *******************************/
#include "octvc1_hw_api.h"
#include "octvc1_hw_id_priv.h"
#include "octvc1_hw_rc_priv.h"

/************************  COMMON DEFINITIONS  *******************************/

/*-------------------------------------------------------------------------------------
 	MAIN API private definitions
-------------------------------------------------------------------------------------*/
#define cOCTVC1_HW_PRIVATE_API_CMD_PASSWORD					0x1FE75CB2	






/*****************************  METHODS  *************************************/
/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CMD
 		Private restricted api unblock command and response structure.

 Members:
	Header
 		OCTVC1 Message Header
	ulPortIndex
 		Unique ETH port identifier
	ulPassword
		Default:	cOCTVC1_HW_PRIVATE_API_CMD_PASSWORD
 		Command password!
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCTVC1_INDEX		ulPortIndex;
	tOCT_UINT32			ulPassword;

} tOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ulPortIndex
 		Unique ETH port identifier
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCTVC1_INDEX		ulPortIndex;

} tOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ulClkSourceRef
 		Selected source for reference clock
	ulDacInitValue
		Default:	0x00007600
 		DAC initial value.
	ulSyncWindowSize
		Default:	7
 		Number of consecutive values within iSyncThreshold to consider that the clock
 		manager is synchronized to its reference.
	lSyncThreshold
		Default:	10
 		Maximum allowed delta to consider that the clock manager is synchronized to its
 		reference.
	ulFrequencyCorrectionFlag
 		Set to cOCT_TRUE when frequency correction should be applied.
	ulMaxDriftDurationUs
		Default:	40
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER						Header;
	tOCTVC1_HW_CLOCK_SYNC_MGR_SOURCE_ENUM	ulClkSourceRef;
	tOCT_UINT32								ulDacInitValue;
	tOCT_UINT32								ulSyncWindowSize;
	tOCT_INT32								lSyncThreshold;
	tOCT_BOOL32								ulFrequencyCorrectionFlag;
	tOCT_INT32								ulMaxDriftDurationUs;

} tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_RSP

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_CMD

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_RSP

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ulState
 		Clock sync manager state
	ulDacState
 		DAC state
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER							Header;
	tOCTVC1_HW_CLOCK_SYNC_MGR_STATE_ENUM		ulState;
	tOCTVC1_HW_CLOCK_SYNC_MGR_DAC_STATE_ENUM	ulDacState;

} tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_RSP

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ulResetStatsFlag
 		Statistics counters will be reset to zero after the current values are returned.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_BOOL32			ulResetStatsFlag;

} tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ulState
 		Clock sync manager state
	ulAutoSelectFlag
 		Set to true, when the clock source was select through GPIO.
	lClockError
 		Accumulated error on the tracked clock's control loop
	lLastMeasuredError
 		The last clock error that got injected in the control loop
	lDroppedCycles
 		Number of cycles (at ulPllFreqHz) that have been dropped by the control loop
 		This occurs when there a big gaps of the reference clock in the frequency
 		measurement unit,
 		which are likely caused by changes in the reference clock.
	ulPllFreqHz
 		Frequency provided to the comparator and generators.
	ulPllFractionalFreqHz
 		Fractional part of ulPllFreqHz.
	ulSlipCnt
 		Number of times values exceeded the synchronization threshold while in the sync
 		state
	ulSyncLossCnt
 		Number of times the clock manager left the synchronized state
	ulDacState
 		DAC state
	ulDacValue
 		Current DAC value
	ulOwnerProcessUid
	ulFrequencyCorrectionFlag
 		Set to cOCT_TRUE when frequency correction is applied
	ulDriftElapseTimeUs
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER							Header;
	tOCTVC1_HW_CLOCK_SYNC_MGR_STATE_ENUM		ulState;
	tOCT_BOOL32									ulAutoSelectFlag;
	tOCT_INT32									lClockError;
	tOCT_INT32									lLastMeasuredError;
	tOCT_INT32									lDroppedCycles;
	tOCT_UINT32									ulPllFreqHz;
	tOCT_UINT32									ulPllFractionalFreqHz;
	tOCT_UINT32									ulSlipCnt;
	tOCT_UINT32									ulSyncLossCnt;
	tOCTVC1_HW_CLOCK_SYNC_MGR_DAC_STATE_ENUM	ulDacState;
	tOCT_UINT32									ulDacValue;
	tOCTVC1_USER_ID_PROCESS_ENUM				ulOwnerProcessUid;
	tOCT_BOOL32									ulFrequencyCorrectionFlag;
	tOCT_UINT32									ulDriftElapseTimeUs;

} tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_RSP;


/***************  INCLUDE FILES WITH DEPENDENCIES ON THIS FILE  **************/
#include "octvc1_hw_evt_priv.h"

#endif /* __OCTVC1_HW_API_PRIV_H__ */

