/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_HW_API_PRIV.h

Copyright (c) 2015 Octasic Inc. All rights reserved.

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.04.00-B662 (2015/10/28)

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
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_UINT32			ulDacInitValue;
	tOCT_UINT32			ulSyncWindowSize;
	tOCT_INT32			lSyncThreshold;

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


/***************  INCLUDE FILES WITH DEPENDENCIES ON THIS FILE  **************/
#include "octvc1_hw_evt_priv.h"

#endif /* __OCTVC1_HW_API_PRIV_H__ */

