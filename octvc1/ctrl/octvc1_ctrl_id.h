/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_CTRL_ID.h

Copyright (c) 2015 Octasic Inc. All rights reserved.

Description: Contains the identifiers for the CTRL API.

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

$Octasic_Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_CTRL_ID_H__
#define __OCTVC1_CTRL_ID_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octvc1_base.h"
#include "../octvc1_generic_rc.h"
#include "octvc1_ctrl_base.h"

/****************************************************************************
	Supervisory IDs
 ****************************************************************************/
#define cOCTVC1_CTRL_MSG_MODULE_REJECT_SID ( 0x0001 + cOCTVC1_CTRL_SID_BASE )

#define cOCTVC1_CTRL_SID_MAX               (( 0x0001 + 1 ) & 0xFFFF)


#endif /* __OCTVC1_CTRL_ID_H__ */

