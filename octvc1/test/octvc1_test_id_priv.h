/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_TEST_ID_PRIV.h

Copyright (c) 2016 Octasic Inc. All rights reserved.

Description: Contains the identifiers for the TEST API.

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.06.00-B964 (2016/05/31)

$Octasic_Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_TEST_ID_PRIV_H__
#define __OCTVC1_TEST_ID_PRIV_H__


/*****************************  INCLUDE FILES  *******************************/
#include "octvc1_test_id.h"
#include "octvc1_test_base.h"

/****************************************************************************
	Command IDs
 ****************************************************************************/
#define cOCTVC1_TEST_MSG_DESCR_LIST_CID                ( 0x001 + cOCTVC1_TEST_CID_BASE )
#define cOCTVC1_TEST_MSG_DESCR_INFO_CID                ( 0x002 + cOCTVC1_TEST_CID_BASE )
#define cOCTVC1_TEST_MSG_DESCR_INFO_BY_NAME_CID        ( 0x003 + cOCTVC1_TEST_CID_BASE )
#define cOCTVC1_TEST_MSG_DESCR_STATS_CID               ( 0x004 + cOCTVC1_TEST_CID_BASE )
#define cOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_CID        ( 0x010 + cOCTVC1_TEST_CID_BASE )
#define cOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_CID       ( 0x011 + cOCTVC1_TEST_CID_BASE )
#define cOCTVC1_TEST_MSG_RUNNER_SERVER_START_CID       ( ( 0x012 + cOCTVC1_TEST_CID_BASE )| cOCTVC1_MSG_LONG_PROCESSING_FLAG  ) 
#define cOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_CID        ( ( 0x013 + cOCTVC1_TEST_CID_BASE )| cOCTVC1_MSG_LONG_PROCESSING_FLAG  ) 
#define cOCTVC1_TEST_MSG_RUNNER_SERVER_ADD_TEST_CID    ( 0x020 + cOCTVC1_TEST_CID_BASE )
#define cOCTVC1_TEST_MSG_RUNNER_SERVER_REMOVE_TEST_CID ( 0x021 + cOCTVC1_TEST_CID_BASE )
#define cOCTVC1_TEST_MSG_RUNNER_SERVER_LIST_TEST_CID   ( 0x022 + cOCTVC1_TEST_CID_BASE )
#define cOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_TEST_CID   ( 0x023 + cOCTVC1_TEST_CID_BASE )
#define cOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_TEST_CID  ( 0x024 + cOCTVC1_TEST_CID_BASE )
#define cOCTVC1_TEST_MSG_RUNNER_SERVER_START_TEST_CID  ( ( 0x025 + cOCTVC1_TEST_CID_BASE )| cOCTVC1_MSG_LONG_PROCESSING_FLAG  ) 
#define cOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_TEST_CID   ( ( 0x026 + cOCTVC1_TEST_CID_BASE )| cOCTVC1_MSG_LONG_PROCESSING_FLAG  ) 


#endif /* __OCTVC1_TEST_ID_PRIV_H__ */

