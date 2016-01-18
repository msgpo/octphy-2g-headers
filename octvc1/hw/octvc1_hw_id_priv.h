/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_HW_ID_PRIV.h

Copyright (c) 2015 Octasic Inc. All rights reserved.

Description: Contains the identifiers for the HW API.

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.03.00-B560 (2015/08/07)

$Octasic_Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_HW_ID_PRIV_H__
#define __OCTVC1_HW_ID_PRIV_H__


/*****************************  INCLUDE FILES  *******************************/
#include "octvc1_hw_id.h"
#include "octvc1_hw_base.h"

/****************************************************************************
	Command IDs
 ****************************************************************************/
#define cOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CID    ( 0x008 + cOCTVC1_HW_CID_BASE )
#define cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CID   ( 0x016 + cOCTVC1_HW_CID_BASE )
#define cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_CID    ( 0x017 + cOCTVC1_HW_CID_BASE )

/****************************************************************************
	Event IDs
 ****************************************************************************/


#endif /* __OCTVC1_HW_ID_PRIV_H__ */

