/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_IRSC_BASE.h

Copyright (c) 2017 Octasic Inc. All rights reserved.

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.08.00-B1418 (2017/03/21)

$Octasic_Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_IRSC_BASE_H__
#define __OCTVC1_IRSC_BASE_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octvc1_base.h"

/****************************************************************************
	Module unique identifiers
 ****************************************************************************/
#define cOCTVC1_IRSC_UID                        ( 0x07 )

/****************************************************************************
	Module identifier bases
 ****************************************************************************/

/* Module: IRSC */
#define cOCTVC1_IRSC_CID_BASE                   ( (cOCTVC1_IRSC_UID << 16) + cOCTVC1_CID_BASE )
#define cOCTVC1_IRSC_EID_BASE                   ( (cOCTVC1_IRSC_UID << 16) + cOCTVC1_EID_BASE )
#define cOCTVC1_IRSC_RC_BASE                    ( (cOCTVC1_IRSC_UID << 16) + cOCTVC1_RC_BASE )

#endif /* __OCTVC1_IRSC_BASE_H__ */

