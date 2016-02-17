/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_TEST_API.h

Copyright (c) 2015 Octasic Inc. All rights reserved.

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.04.00-B662 (2015/10/28)

$Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_TEST_API_H__
#define __OCTVC1_TEST_API_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../../octdev_types.h"
#include "../../octdev_devices.h"
#include "../octvc1_msg.h"
#include "../octvc1_handle.h"
#include "../octvc1_cursor.h"
#include "../octvc1_list.h"

#include "octvc1_test_id.h"
#include "octvc1_test_rc.h"

/************************  COMMON DEFINITIONS  *******************************/

/*-------------------------------------------------------------------------------------
 	Test API constant definitions
-------------------------------------------------------------------------------------*/

#define cOCTVC1_TEST_DESCR_MAX_LENGTH						127		 	/* Maximum char in test description string. */
#define cOCTVC1_TEST_USAGE_MAX_LENGTH						511		 	/* Maximum char in test description string. */
#define cOCTVC1_TEST_PARMS_MAX_LENGTH						511		 	/* Maximum char in test parameters string. */
#define cOCTVC1_TEST_RUNNER_TEST_MAX_OBJ					8		 	/* Maximum object handle to pass as test parameter. */
#define cOCTVC1_TEST_RUNNER_TEST_STATS_MAX_LENGTH			1023	 	/* Maximum number of char in szStats. */

/*-------------------------------------------------------------------------------------
	tOCTVC1_TEST_EXEC_PARMS

 Members:
	ahObj
 		Object handle to pass as test parameter.
 		See Test Descriptor Usage for more information.
	szParms
 		String Test parameter.
 		The buffer name can be up to cOCTVC1_TEST_PARMS_MAX_LENGTH characters long,
 		excluding the terminating NULL character.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_HANDLE_OBJECT	ahObj[cOCTVC1_TEST_RUNNER_TEST_MAX_OBJ];
	tOCT_INT8				szParms[(cOCTVC1_TEST_PARMS_MAX_LENGTH+1)];

} tOCTVC1_TEST_EXEC_PARMS;

/*****************************  METHODS  *************************************/

/***************  INCLUDE FILES WITH DEPENDENCIES ON THIS FILE  **************/

#endif /* __OCTVC1_TEST_API_H__ */

