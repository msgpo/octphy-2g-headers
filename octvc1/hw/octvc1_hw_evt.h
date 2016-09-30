/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_HW_EVT.h
Copyright (c) 2016 Octasic Inc. All rights reserved.

Description: Contains the event definition of the HW API.

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

$Octasic_Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_HW_EVT_H__
#define __OCTVC1_HW_EVT_H__


/*****************************  INCLUDE FILES  *******************************/

#include "octvc1_hw_api.h"

/************************  COMMON DEFINITIONS  *******************************/

/*****************************  NOTIFICATIONS  **********************************/
/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_CPU_CORE_EXEC_REPORT_EVT

 Members:
	Header
	ulCoreIndex
 		Cpu Core identifier
	ulCoreUseMask
 		One-hot vector indicating which cores are used.
	ulCoreHaltMask
 		One-hot vector indicating which cores are halted.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_EVENT_HEADER		Header;
	tOCTVC1_INDEX				ulCoreIndex;
	tOCTVC1_HW_CPU_CORE_MASK	ulCoreUseMask;
	tOCTVC1_HW_CPU_CORE_MASK	ulCoreHaltMask;

} tOCTVC1_HW_MSG_CPU_CORE_EXEC_REPORT_EVT;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATUS_CHANGE_EVT

 Members:
	Header
	ulState
	ulPreviousState
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_EVENT_HEADER					Header;
	tOCTVC1_HW_CLOCK_SYNC_MGR_STATE_ENUM	ulState;
	tOCTVC1_HW_CLOCK_SYNC_MGR_STATE_ENUM	ulPreviousState;

} tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATUS_CHANGE_EVT;


#endif /* __OCTVC1_HW_EVT_H__ */

