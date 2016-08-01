/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_CTRL_BASE.h

Copyright (c) 2016 Octasic Inc. All rights reserved.

Description: Contains the definition of the OCTVC1 API.

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

$Octasic_Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_CTRL_BASE_H__
#define __OCTVC1_CTRL_BASE_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octvc1_base.h"
#include "../octvc1_generic_rc.h"

/****************************************************************************
	Module unique identifiers
 ****************************************************************************/
#define cOCTVC1_CTRL_UID                        ( 0x03 )

/****************************************************************************
	Module identifier bases
 ****************************************************************************/

/* Module: CTRL */
#define cOCTVC1_CTRL_SID_BASE                   ( (cOCTVC1_CTRL_UID << 16) + cOCTVC1_SID_BASE )

#endif /* __OCTVC1_CTRL_BASE_H__ */

