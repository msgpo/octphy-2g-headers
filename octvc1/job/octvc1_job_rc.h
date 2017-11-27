/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_JOB_RC.h

Copyright (c) 2017 Octasic Inc. All rights reserved.

Description: Contains the return codes for the JOB API.

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

#ifndef OCTVC1_JOB_RC_H__
#define OCTVC1_JOB_RC_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octvc1_base.h"
#include "../octvc1_generic_rc.h"
#include "octvc1_job_base.h"

/****************************************************************************
	JOB return codes
 ****************************************************************************/
#define cOCTVC1_JOB_RC_OBJECT_INVALID						 ( 0x0001 + cOCTVC1_JOB_RC_BASE )
#define cOCTVC1_JOB_RC_SERVICE_UNINITIALIZED				 ( 0x0002 + cOCTVC1_JOB_RC_BASE )

/****************************************************************************
	UNITS return codes
 ****************************************************************************/
#define cOCTVC1_JOB_UNITS_RC_BASE							 ( 0x0010 + cOCTVC1_JOB_RC_BASE )

#define cOCTVC1_JOB_RC_UNITS_PACKAGE_NOT_FOUND				 ( 0x0001 + cOCTVC1_JOB_UNITS_RC_BASE )
#define cOCTVC1_JOB_RC_UNITS_SUITE_NOT_FOUND				 ( 0x0002 + cOCTVC1_JOB_UNITS_RC_BASE )
#define cOCTVC1_JOB_RC_UNITS_CASE_NOT_FOUND					 ( 0x0003 + cOCTVC1_JOB_UNITS_RC_BASE )
#define cOCTVC1_JOB_RC_UNITS_PACKAGE_NAME_TOO_LONG			 ( 0x0004 + cOCTVC1_JOB_UNITS_RC_BASE )
#define cOCTVC1_JOB_RC_UNITS_CASE_NAME_TOO_LONG				 ( 0x0005 + cOCTVC1_JOB_UNITS_RC_BASE )

/****************************************************************************
	RUNNER return codes
 ****************************************************************************/
#define cOCTVC1_JOB_RUNNER_RC_BASE							 ( 0x0020 + cOCTVC1_JOB_RC_BASE )

#define cOCTVC1_JOB_RC_RUNNER_STATE_INVALID					 ( 0x0001 + cOCTVC1_JOB_RUNNER_RC_BASE )
#define cOCTVC1_JOB_RC_RUNNER_CASE_IS_ACTIVE				 ( 0x0002 + cOCTVC1_JOB_RUNNER_RC_BASE )
#define cOCTVC1_JOB_RC_RUNNER_CASE_IS_NOT_ACTIVE			 ( 0x0003 + cOCTVC1_JOB_RUNNER_RC_BASE )
#define cOCTVC1_JOB_RC_RUNNER_REACH_MAXIMUM_CASE			 ( 0x0004 + cOCTVC1_JOB_RUNNER_RC_BASE )
#define cOCTVC1_JOB_RC_RUNNER_CASE_NOT_RUNNING				 ( 0x0005 + cOCTVC1_JOB_RUNNER_RC_BASE )

/****************************************************************************
	Validate return codes
 ****************************************************************************/
#define cOCTVC1_JOB_AUTO_VALIDATE_RC_BASE					 ( 0xF000 + cOCTVC1_JOB_RC_BASE )

#define cOCTVC1_JOB_RC_RUNNER_CASES_PULSE_INVALID_PULSE_CNT	 ( 0x1 + cOCTVC1_JOB_AUTO_VALIDATE_RC_BASE )

#endif /* OCTVC1_JOB_RC_H__ */

