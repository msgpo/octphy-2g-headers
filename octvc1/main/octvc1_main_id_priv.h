/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_MAIN_ID_PRIV.h

Copyright (c) 2018 Octasic Inc. All rights reserved.

Description: Contains the identifiers for the MAIN API.

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.10.00-B1837 (2018/02/21)

$Octasic_Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_MAIN_ID_PRIV_H__
#define __OCTVC1_MAIN_ID_PRIV_H__


/*****************************  INCLUDE FILES  *******************************/
#include "octvc1_main_id.h"
#include "octvc1_main_base.h"

/****************************************************************************
	Command IDs
 ****************************************************************************/
#define cOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CID           ( 0x041 + cOCTVC1_MAIN_CID_BASE )
#define cOCTVC1_MAIN_MSG_LICENSING_LIST_INFRACTION_CID           ( 0x042 + cOCTVC1_MAIN_CID_BASE )
#define cOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CONFIG_CID    ( 0x043 + cOCTVC1_MAIN_CID_BASE )
#define cOCTVC1_MAIN_MSG_LICENSING_MODIFY_INFRACTION_CONFIG_CID  ( 0x044 + cOCTVC1_MAIN_CID_BASE )
#define cOCTVC1_MAIN_MSG_APPLICATION_CONFIG_INFO_MODULE_CID      ( 0x045 + cOCTVC1_MAIN_CID_BASE )
#define cOCTVC1_MAIN_MSG_APPLICATION_CONFIG_MODIFY_MODULE_CID    ( 0x046 + cOCTVC1_MAIN_CID_BASE )

/****************************************************************************
	Event IDs
 ****************************************************************************/
#define cOCTVC1_MAIN_MSG_LICENSING_INFRACTION_STATE_CHANGE_EID ( 0x0007 + cOCTVC1_MAIN_EID_BASE )

/****************************************************************************
	Module Data IDs
 ****************************************************************************/


#endif /* __OCTVC1_MAIN_ID_PRIV_H__ */

