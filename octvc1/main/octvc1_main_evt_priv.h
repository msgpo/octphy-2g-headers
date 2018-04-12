/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_MAIN_EVT_PRIV.h
Copyright (c) 2018 Octasic Inc. All rights reserved.

Description: Contains the event definition of the MAIN API.

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

#ifndef __OCTVC1_MAIN_EVT_PRIV_H__
#define __OCTVC1_MAIN_EVT_PRIV_H__


/*****************************  INCLUDE FILES  *******************************/

#include "octvc1_main_api_priv.h"

/************************  COMMON DEFINITIONS  *******************************/

/*****************************  NOTIFICATIONS  **********************************/
/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_LICENSING_INFRACTION_STATE_CHANGE_EVT

 Members:
	Header
	hInfraction
	ulInfractionType
	szFileName
 		NULL terminated name of the file associated to this infraction.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_EVENT_HEADER						Header;
	tOCTVC1_HANDLE_OBJECT						hInfraction;
	tOCTVC1_MAIN_LICENSE_INFRACTION_TYPE_ENUM	ulInfractionType;
	tOCT_INT8									szFileName[(cOCTVC1_MAIN_FILE_NAME_MAX_LENGTH+1)];

} tOCTVC1_MAIN_MSG_LICENSING_INFRACTION_STATE_CHANGE_EVT;


#endif /* __OCTVC1_MAIN_EVT_PRIV_H__ */

