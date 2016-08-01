/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_TEST_API_PRIV.h

Copyright (c) 2016 Octasic Inc. All rights reserved.

Description: Contains the definition of the TEST API.

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.06.01-B981 (2016/06/10)

$Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_TEST_API_PRIV_H__
#define __OCTVC1_TEST_API_PRIV_H__


/*****************************  INCLUDE FILES  *******************************/
#include "octvc1_test_api.h"
#include "octvc1_test_id_priv.h"
#include "octvc1_test_rc_priv.h"

/************************  COMMON DEFINITIONS  *******************************/


/*****************************  METHODS  *************************************/
/*-------------------------------------------------------------------------------------
	tOCTVC1_TEST_MSG_DESCR_LIST_CMD

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

} tOCTVC1_TEST_MSG_DESCR_LIST_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_TEST_MSG_DESCR_LIST_RSP

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

} tOCTVC1_TEST_MSG_DESCR_LIST_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_TEST_MSG_DESCR_INFO_CMD

 Members:
	Header
 		OCTVC1 Message Header
	hDescr
 		Test Descriptor identifier.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCTVC1_HANDLE_OBJECT	hDescr;

} tOCTVC1_TEST_MSG_DESCR_INFO_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_TEST_MSG_DESCR_INFO_RSP

 Members:
	Header
 		OCTVC1 Message Header
	hDescr
 		Test Descriptor identifier.
	szName
 		Test name string (Array of bytes) .
 		The buffer name can be up to cOCTVC1_TEST_NAME_MAX_LENGTH characters long,
 		excluding the terminating NULL character.
	szDescription
 		Test description string (Array of bytes) .
 		The buffer name can be up to cOCTVC1_TEST_DESCR_MAX_LENGTH characters long,
 		excluding the terminating NULL character.
	szUsage
 		Test usage description .
 		The buffer name can be up to cOCTVC1_TEST_USAGE_MAX_LENGTH characters long,
 		excluding the terminating NULL character.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCTVC1_HANDLE_OBJECT	hDescr;
	tOCT_INT8				szName[(cOCTVC1_HANDLE_OBJECT32_NAME_MAX_LENGTH+1)];
	tOCT_INT8				szDescription[(cOCTVC1_TEST_DESCR_MAX_LENGTH+1)];
	tOCT_INT8				szUsage[(cOCTVC1_TEST_USAGE_MAX_LENGTH+1)];

} tOCTVC1_TEST_MSG_DESCR_INFO_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_TEST_MSG_DESCR_INFO_BY_NAME_CMD

 Members:
	Header
 		OCTVC1 Message Header
	szName
 		Descriptor Test name string (Array of bytes) .
 		The buffer name can be up to cOCTVC1_HANDLE_OBJECT32_NAME_MAX_LENGTH characters
 		long, excluding the terminating NULL character.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_INT8			szName[(cOCTVC1_HANDLE_OBJECT32_NAME_MAX_LENGTH+1)];

} tOCTVC1_TEST_MSG_DESCR_INFO_BY_NAME_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_TEST_MSG_DESCR_INFO_BY_NAME_RSP

 Members:
	Header
 		OCTVC1 Message Header
	hDescr
 		Test Descriptor identifier.
	szName
 		Test name string (Array of bytes) .
 		The buffer name can be up to cOCTVC1_HANDLE_OBJECT32_NAME_MAX_LENGTH characters
 		long, excluding the terminating NULL character.
	szDescription
 		Test description string (Array of bytes) .
 		The buffer name can be up to cOCTVC1_TEST_DESCR_MAX_LENGTH characters long,
 		excluding the terminating NULL character.
	szUsage
 		Test usage description .
 		The buffer name can be up to cOCTVC1_TEST_USAGE_MAX_LENGTH characters long,
 		excluding the terminating NULL character.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCTVC1_HANDLE_OBJECT	hDescr;
	tOCT_INT8				szName[(cOCTVC1_HANDLE_OBJECT32_NAME_MAX_LENGTH+1)];
	tOCT_INT8				szDescription[(cOCTVC1_TEST_DESCR_MAX_LENGTH+1)];
	tOCT_INT8				szUsage[(cOCTVC1_TEST_USAGE_MAX_LENGTH+1)];

} tOCTVC1_TEST_MSG_DESCR_INFO_BY_NAME_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_TEST_MSG_DESCR_STATS_CMD

 Members:
	Header
 		OCTVC1 Message Header
	hDescr
 		Test Descriptor identifier.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCTVC1_HANDLE_OBJECT	hDescr;

} tOCTVC1_TEST_MSG_DESCR_STATS_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_TEST_MSG_DESCR_STATS_RSP

 Members:
	Header
 		OCTVC1 Message Header
	hDescr
 		Test Descriptor identifier.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCTVC1_HANDLE_OBJECT	hDescr;

} tOCTVC1_TEST_MSG_DESCR_STATS_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_CMD

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_RSP

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_CMD

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_RSP

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_TEST_MSG_RUNNER_SERVER_START_CMD

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_TEST_MSG_RUNNER_SERVER_START_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_TEST_MSG_RUNNER_SERVER_START_RSP

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_TEST_MSG_RUNNER_SERVER_START_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_CMD

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_RSP

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_TEST_MSG_RUNNER_SERVER_ADD_TEST_CMD
 		This command adds a test in the runner server to the server.

 Members:
	Header
 		OCTVC1 Message Header
	hDescr
		Default:	cOCTVC1_HANDLE_INVALID
 		Test Descriptor.
	Parms
 		test parameter.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCTVC1_HANDLE_OBJECT	hDescr;
	tOCTVC1_TEST_EXEC_PARMS	Parms;

} tOCTVC1_TEST_MSG_RUNNER_SERVER_ADD_TEST_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_TEST_MSG_RUNNER_SERVER_ADD_TEST_RSP

 Members:
	Header
 		OCTVC1 Message Header
	hTest
 		Test Identifier.
	szDisplayName
 		Descriptor Test name string (Array of bytes) .
 		The buffer name can be up to cOCTVC1_HANDLE_OBJECT32_NAME_MAX_LENGTH characters
 		long, excluding the terminating NULL character.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCTVC1_HANDLE_OBJECT	hTest;
	tOCT_INT8				szDisplayName[(cOCTVC1_HANDLE_OBJECT32_NAME_MAX_LENGTH+1)];

} tOCTVC1_TEST_MSG_RUNNER_SERVER_ADD_TEST_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_TEST_MSG_RUNNER_SERVER_REMOVE_TEST_CMD
 		This command removes a redundant MGW. The redundant MGW’s resources are freed.

 Members:
	Header
 		OCTVC1 Message Header
	hTest
		Default:	cOCTVC1_HANDLE_INVALID
 		Test identifier.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCTVC1_HANDLE_OBJECT	hTest;

} tOCTVC1_TEST_MSG_RUNNER_SERVER_REMOVE_TEST_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_TEST_MSG_RUNNER_SERVER_REMOVE_TEST_RSP

 Members:
	Header
 		OCTVC1 Message Header
	hTest
 		Test identifier.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCTVC1_HANDLE_OBJECT	hTest;

} tOCTVC1_TEST_MSG_RUNNER_SERVER_REMOVE_TEST_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_TEST_MSG_RUNNER_SERVER_LIST_TEST_CMD

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

} tOCTVC1_TEST_MSG_RUNNER_SERVER_LIST_TEST_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_TEST_MSG_RUNNER_SERVER_LIST_TEST_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ObjectCursor
 		Object cursor
	ObjectNameList
 		Object List structure.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER					Header;
	tOCTVC1_CURSOR_HANDLE_OBJECT_GET	ObjectCursor;
	tOCTVC1_LIST_NAME_OBJECT32_GET		ObjectNameList;

} tOCTVC1_TEST_MSG_RUNNER_SERVER_LIST_TEST_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_TEST_CMD

 Members:
	Header
 		OCTVC1 Message Header
	hTest
		Default:	cOCTVC1_HANDLE_INVALID
 		Transport identifier.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCTVC1_HANDLE_OBJECT	hTest;

} tOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_TEST_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_TEST_RSP

 Members:
	Header
 		OCTVC1 Message Header
	hTest
 		Transport identifier.
	hDescr
		Default:	cOCTVC1_HANDLE_INVALID
 		Transport identifier.
	Parms
 		test parameter.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCTVC1_HANDLE_OBJECT	hTest;
	tOCTVC1_HANDLE_OBJECT	hDescr;
	tOCTVC1_TEST_EXEC_PARMS	Parms;

} tOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_TEST_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_TEST_CMD

 Members:
	Header
 		OCTVC1 Message Header
	hTest
		Default:	cOCTVC1_HANDLE_INVALID
 		Transport identifier.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCTVC1_HANDLE_OBJECT	hTest;

} tOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_TEST_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_TEST_RSP

 Members:
	Header
 		OCTVC1 Message Header
	hTest
 		Transport identifier.
	szStats
 		String (Array of bytes) containing the parameter of transport remote
 		destination parameter.
 		The buffer name can be up to cOCTVC1_TEST_RUNNER_TEST_STATS_MAX_LENGTH
 		characters long, excluding the terminating NULL character.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCTVC1_HANDLE_OBJECT	hTest;
	tOCT_INT8				szStats[(cOCTVC1_TEST_RUNNER_TEST_STATS_MAX_LENGTH+1)];

} tOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_TEST_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_TEST_MSG_RUNNER_SERVER_START_TEST_CMD

 Members:
	Header
 		OCTVC1 Message Header
	hTest
		Default:	cOCTVC1_HANDLE_INVALID
 		Transport identifier.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCTVC1_HANDLE_OBJECT	hTest;

} tOCTVC1_TEST_MSG_RUNNER_SERVER_START_TEST_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_TEST_MSG_RUNNER_SERVER_START_TEST_RSP

 Members:
	Header
 		OCTVC1 Message Header
	hTest
 		Transport identifier.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCTVC1_HANDLE_OBJECT	hTest;

} tOCTVC1_TEST_MSG_RUNNER_SERVER_START_TEST_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_TEST_CMD

 Members:
	Header
 		OCTVC1 Message Header
	hTest
		Default:	cOCTVC1_HANDLE_INVALID
 		Transport identifier.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCTVC1_HANDLE_OBJECT	hTest;

} tOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_TEST_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_TEST_RSP

 Members:
	Header
 		OCTVC1 Message Header
	hTest
 		Transport identifier.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCTVC1_HANDLE_OBJECT	hTest;

} tOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_TEST_RSP;


/***************  INCLUDE FILES WITH DEPENDENCIES ON THIS FILE  **************/

#endif /* __OCTVC1_TEST_API_PRIV_H__ */

