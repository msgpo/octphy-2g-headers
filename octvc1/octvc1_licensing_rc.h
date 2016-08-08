/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_LICENSING_RC.h

Copyright (c) 2016 Octasic Inc. All rights reserved.

Description: Contains the return codes for the LICENSING API.

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.07.00-B1039 (2016/07/22)

$Octasic_Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef OCTVC1_LICENSING_RC_H__
#define OCTVC1_LICENSING_RC_H__


/*****************************  INCLUDE FILES  *******************************/
#include "octvc1_base.h"

/****************************************************************************
	LICENSING return codes
 ****************************************************************************/
#define cOCTVC1_LICENSING_RC_DENIED							 ( 0x0001 + cOCTVC1_LICENSING_RC_BASE )
#define cOCTVC1_LICENSING_RC_INVALID_LICENSE				 ( 0x0002 + cOCTVC1_LICENSING_RC_BASE )

#endif /* OCTVC1_LICENSING_RC_H__ */

