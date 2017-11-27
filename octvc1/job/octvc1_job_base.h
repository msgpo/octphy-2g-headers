/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_JOB_BASE.h

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.09.00-B1607 (2017/08/29)

$Octasic_Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_JOB_BASE_H__
#define __OCTVC1_JOB_BASE_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octvc1_base.h"

/****************************************************************************
	Module unique identifiers
 ****************************************************************************/
#define cOCTVC1_JOB_UID                         ( 0x05 )

/****************************************************************************
	Module identifier bases
 ****************************************************************************/

/* Module: JOB */
#define cOCTVC1_JOB_CID_BASE                    ( (cOCTVC1_JOB_UID << 16) + cOCTVC1_CID_BASE )
#define cOCTVC1_JOB_EID_BASE                    ( (cOCTVC1_JOB_UID << 16) + cOCTVC1_EID_BASE )
#define cOCTVC1_JOB_RC_BASE                     ( (cOCTVC1_JOB_UID << 16) + cOCTVC1_RC_BASE )

#endif /* __OCTVC1_JOB_BASE_H__ */

