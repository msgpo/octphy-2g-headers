/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_JOB_API_PRIV.h

Copyright (c) 2018 Octasic Inc. All rights reserved.

Description: Contains the definition of the JOB API.

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

#ifndef __OCTVC1_JOB_API_PRIV_H__
#define __OCTVC1_JOB_API_PRIV_H__


/*****************************  INCLUDE FILES  *******************************/
#include "octvc1_job_api.h"
#include "octvc1_job_id_priv.h"
#include "octvc1_job_rc_priv.h"

/************************  COMMON DEFINITIONS  *******************************/


/*-------------------------------------------------------------------------------------
	tOCTVC1_JOB_UNIT_TEST_STATE_ENUM :
-------------------------------------------------------------------------------------*/
#define tOCTVC1_JOB_UNIT_TEST_STATE_ENUM					tOCT_UINT32

#define cOCTVC1_JOB_UNIT_TEST_STATE_ENUM_LOGGER_START		0		
#define cOCTVC1_JOB_UNIT_TEST_STATE_ENUM_LOGGER_END			1		
#define cOCTVC1_JOB_UNIT_TEST_STATE_ENUM_PACKAGE_START		2		
#define cOCTVC1_JOB_UNIT_TEST_STATE_ENUM_PACKAGE_END		3		
#define cOCTVC1_JOB_UNIT_TEST_STATE_ENUM_SUITE_START		4		
#define cOCTVC1_JOB_UNIT_TEST_STATE_ENUM_SUITE_END			5		
#define cOCTVC1_JOB_UNIT_TEST_STATE_ENUM_CASE_START			6		
#define cOCTVC1_JOB_UNIT_TEST_STATE_ENUM_CASE_END			7		
#define cOCTVC1_JOB_UNIT_TEST_STATE_ENUM_CASE_ITERATION		8		

/*-------------------------------------------------------------------------------------
	tOCTVC1_JOB_UNIT_TEST_RESULT_ENUM :
-------------------------------------------------------------------------------------*/
#define tOCTVC1_JOB_UNIT_TEST_RESULT_ENUM					tOCT_UINT32

#define cOCTVC1_JOB_UNIT_TEST_RESULT_ENUM_PASS				0		
#define cOCTVC1_JOB_UNIT_TEST_RESULT_ENUM_SKIP				1		
#define cOCTVC1_JOB_UNIT_TEST_RESULT_ENUM_ERROR				2		

/*****************************  METHODS  *************************************/

/***************  INCLUDE FILES WITH DEPENDENCIES ON THIS FILE  **************/
#include "octvc1_job_evt_priv.h"

#endif /* __OCTVC1_JOB_API_PRIV_H__ */

