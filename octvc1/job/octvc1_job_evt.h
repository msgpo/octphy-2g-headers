/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_JOB_EVT.h
Copyright (c) 2017 Octasic Inc. All rights reserved.

Description: Contains the event definition of the JOB API.

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.09.00-B1607 (2017/08/29)

$Octasic_Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_JOB_EVT_H__
#define __OCTVC1_JOB_EVT_H__


/*****************************  INCLUDE FILES  *******************************/

#include "octvc1_job_api.h"

/************************  COMMON DEFINITIONS  *******************************/

/*****************************  NOTIFICATIONS  **********************************/
/*-------------------------------------------------------------------------------------
	tOCTVC1_JOB_MSG_RUNNER_EXECUTOR_STATE_CHANGE_EVT

 Members:
	Header
 		OCTVC1 Event Header
	hExecutor
 		Executor handle identifier.
	hActiveCase
 		Current running job case identifier.
	szPackageName
 		Job package name.
	szSuiteName
 		Job suite name.
	szCaseName
 		Active unit job case.
	ulOldState
	ulNewState
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_EVENT_HEADER				Header;
	tOCTVC1_HANDLE_OBJECT				hExecutor;
	tOCTVC1_HANDLE_OBJECT				hActiveCase;
	tOCT_INT8							szPackageName[(cOCTVC1_JOB_PACKAGE_NAME_MAX_LENGTH+1)];
	tOCT_INT8							szSuiteName[(cOCTVC1_JOB_SUITE_NAME_MAX_LENGTH+1)];
	tOCT_INT8							szCaseName[(cOCTVC1_HANDLE_OBJECT32_NAME_MAX_LENGTH+1)];
	tOCTVC1_JOB_RUNNER_CASE_STATE_ENUM	ulOldState;
	tOCTVC1_JOB_RUNNER_CASE_STATE_ENUM	ulNewState;

} tOCTVC1_JOB_MSG_RUNNER_EXECUTOR_STATE_CHANGE_EVT;


#endif /* __OCTVC1_JOB_EVT_H__ */

