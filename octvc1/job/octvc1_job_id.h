/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_JOB_ID.h

Copyright (c) 2017 Octasic Inc. All rights reserved.

Description: Contains the identifiers for the JOB API.

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

#ifndef __OCTVC1_JOB_ID_H__
#define __OCTVC1_JOB_ID_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octvc1_base.h"
#include "octvc1_job_base.h"

/****************************************************************************
	Command IDs
 ****************************************************************************/
#define cOCTVC1_JOB_MSG_UNITS_LIST_CID                      ( 0x001 + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_UNITS_START_ALL_CID                 ( ( 0x002 + cOCTVC1_JOB_CID_BASE )| cOCTVC1_MSG_LONG_PROCESSING_FLAG  ) 
#define cOCTVC1_JOB_MSG_UNITS_INFO_CID                      ( 0x003 + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_UNITS_FIND_CID                      ( 0x004 + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_UNITS_START_CID                     ( ( 0x005 + cOCTVC1_JOB_CID_BASE )| cOCTVC1_MSG_LONG_PROCESSING_FLAG  ) 
#define cOCTVC1_JOB_MSG_UNITS_LIST_CASES_CID                ( 0x00a + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_UNITS_INFO_CASES_CID                ( 0x00b + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_UNITS_STATS_CASES_CID               ( 0x00c + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_UNITS_MODIFY_CASES_CID              ( 0x00d + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_UNITS_START_CASES_CID               ( 0x00e + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_RUNNER_STATS_CID                    ( 0x012 + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_RUNNER_PAUSE_CID                    ( 0x013 + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_RUNNER_RESUME_CID                   ( 0x014 + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_RUNNER_CLEANUP_CID                  ( 0x015 + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_RUNNER_ADD_CASES_CID                ( 0x01a + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_RUNNER_LIST_CASES_CID               ( 0x01b + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_RUNNER_REMOVE_CASES_CID             ( 0x01c + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_RUNNER_INFO_CASES_CID               ( 0x01d + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_RUNNER_STATS_CASES_CID              ( 0x01e + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_RUNNER_START_CASES_CID              ( 0x01f + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_RUNNER_STOP_CASES_CID               ( 0x020 + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_RUNNER_PULSE_CASES_CID              ( 0x021 + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_RUNNER_REMOVE_ALL_CASES_CID         ( 0x022 + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_RUNNER_LIST_CASES_EXECUTE_CID       ( 0x024 + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_RUNNER_REMOVE_CASES_EXECUTE_CID     ( 0x025 + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_RUNNER_INFO_CASES_EXECUTE_CID       ( 0x026 + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_RUNNER_START_CASES_EXECUTE_CID      ( 0x027 + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_RUNNER_STATS_CASES_EXECUTE_CID      ( 0x028 + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_RUNNER_REMOVE_ALL_CASES_EXECUTE_CID ( 0x029 + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_RUNNER_LIST_CASES_ERROR_CID         ( 0x02d + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_RUNNER_REMOVE_CASES_ERROR_CID       ( 0x02e + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_RUNNER_INFO_CASES_ERROR_CID         ( 0x02f + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_RUNNER_START_CASES_ERROR_CID        ( 0x030 + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_RUNNER_STATS_CASES_ERROR_CID        ( 0x031 + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_RUNNER_REMOVE_ALL_CASES_ERROR_CID   ( 0x032 + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_RUNNER_LIST_EXECUTOR_CID            ( 0x035 + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_RUNNER_INFO_EXECUTOR_CID            ( 0x036 + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_RUNNER_STATS_EXECUTOR_CID           ( 0x037 + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_RUNNER_INFO_CONFIGURATION_CID       ( 0x03a + cOCTVC1_JOB_CID_BASE )
#define cOCTVC1_JOB_MSG_RUNNER_MODIFY_CONFIGURATION_CID     ( 0x03b + cOCTVC1_JOB_CID_BASE )

#define cOCTVC1_JOB_CID_MAX                                 (( 0x03b + 1 ) & 0xFFF)

/****************************************************************************
	Event IDs
 ****************************************************************************/
#define cOCTVC1_JOB_MSG_RUNNER_EXECUTOR_STATE_CHANGE_EID ( 0x0005 + cOCTVC1_JOB_EID_BASE )

#define cOCTVC1_JOB_EID_MAX                              (( 0x0007 + 1 ) & 0xFFFF)


#endif /* __OCTVC1_JOB_ID_H__ */

