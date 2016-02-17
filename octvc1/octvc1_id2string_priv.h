/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: octvc1_id2string_priv.h

Copyright (c) 2016 Octasic Inc. All rights reserved.

Description:

This file contains the id2string implementation for package OCTVC1

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.05.00-B818 (2016/02/11)

$Revision:  $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/


#ifndef __OCTVC1_ID2STRING_PRIV__
#define __OCTVC1_ID2STRING_PRIV__

#include "../octdev_types.h"
#include "octvc1_id2string.h"
/* -------------------------------------------------------------------------------------
	OCTVC1_ID2STRING_PRIV
   -------------------------------------------------------------------------------------*/
#define mOCTVC1_ID2STRING_PRIV( _f_ulId  ) \
	octvc1_id2string_priv( _f_ulId )

#ifndef OCTVC1_ID2STRING_PRIV_DECLARE
extern const char * octvc1_id2string_priv( tOCT_UINT32 f_ulId );
#endif 


#ifdef OCTVC1_ID2STRING_PRIV_DECLARE
#include <stdio.h>
#include "test/octvc1_test_id_priv.h"
#include "hw/octvc1_hw_id_priv.h"


/* -------------------------------------------------------------------------------------
	octvc1_id2string_priv
   -------------------------------------------------------------------------------------*/
const char * octvc1_id2string_priv( tOCT_UINT32 f_ulId )
{
	static char g_szUnknownoctvc1_id2string_priv[32];
	switch( f_ulId & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET ))
	{
		/* OCTVC1_TEST */
		case ( cOCTVC1_TEST_MSG_DESCR_LIST_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_TEST_MSG_DESCR_LIST_CID";
		case ( cOCTVC1_TEST_MSG_DESCR_INFO_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_TEST_MSG_DESCR_INFO_CID";
		case ( cOCTVC1_TEST_MSG_DESCR_INFO_BY_NAME_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_TEST_MSG_DESCR_INFO_BY_NAME_CID";
		case ( cOCTVC1_TEST_MSG_DESCR_STATS_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_TEST_MSG_DESCR_STATS_CID";
		case ( cOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_CID";
		case ( cOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_CID";
		case ( cOCTVC1_TEST_MSG_RUNNER_SERVER_START_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_TEST_MSG_RUNNER_SERVER_START_CID";
		case ( cOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_CID";
		case ( cOCTVC1_TEST_MSG_RUNNER_SERVER_ADD_TEST_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_TEST_MSG_RUNNER_SERVER_ADD_TEST_CID";
		case ( cOCTVC1_TEST_MSG_RUNNER_SERVER_REMOVE_TEST_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_TEST_MSG_RUNNER_SERVER_REMOVE_TEST_CID";
		case ( cOCTVC1_TEST_MSG_RUNNER_SERVER_LIST_TEST_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_TEST_MSG_RUNNER_SERVER_LIST_TEST_CID";
		case ( cOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_TEST_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_TEST_CID";
		case ( cOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_TEST_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_TEST_CID";
		case ( cOCTVC1_TEST_MSG_RUNNER_SERVER_START_TEST_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_TEST_MSG_RUNNER_SERVER_START_TEST_CID";
		case ( cOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_TEST_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_TEST_CID";
		/* OCTVC1_GENERIC */
		case ( cOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CID";
		case ( cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CID";
		case ( cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_CID & ~( cOCTVC1_MSG_FLAGS_BIT_MASK << cOCTVC1_MSG_FLAGS_BIT_OFFSET )):
			return "cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_CID";

		default:
			break;

	}
	return octvc1_id2string( f_ulId );
}
#endif 

#endif /* __OCTVC1_ID2STRING_PRIV__ */
