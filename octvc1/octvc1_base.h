/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_BASE.h

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.05.00-B780 (2016/01/14)

$Octasic_Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_BASE_H__
#define __OCTVC1_BASE_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octdev_rc_base.h"

/****************************************************************************
	Command identifier base
 ****************************************************************************/
#define cOCTVC1_CID_BASE                        ( 0x01000000 )

/****************************************************************************
	Event identifier base
 ****************************************************************************/
#define cOCTVC1_EID_BASE                        ( 0x02000000 )

/****************************************************************************
	Supervisory identifier base
 ****************************************************************************/
#define cOCTVC1_SID_BASE                        ( 0x03000000 )

/****************************************************************************
	return code identifier base
 ****************************************************************************/
#define cOCTVC1_RC_BASE                         ( cOCTVC1_API_RC_BASE )

/****************************************************************************
	Module unique identifiers
 ****************************************************************************/
#define cOCTVC1_GENERIC_UID                     ( 0x00 )
#define cOCTVC1_PKT_API_UID                     ( 0x02 )
#define cOCTVC1_LICENSING_UID                   ( 0x04 )

/****************************************************************************
	Module identifier bases
 ****************************************************************************/

/* Module: GENERIC */
#define cOCTVC1_GENERIC_RC_BASE                 ( (cOCTVC1_GENERIC_UID << 16) + cOCTVC1_RC_BASE )

/* Module: PKT_API */
#define cOCTVC1_PKT_API_RC_BASE                 ( (cOCTVC1_PKT_API_UID << 16) + cOCTVC1_RC_BASE )

/* Module: LICENSING */
#define cOCTVC1_LICENSING_RC_BASE               ( (cOCTVC1_LICENSING_UID << 16) + cOCTVC1_RC_BASE )

#endif /* __OCTVC1_BASE_H__ */

