/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_MAIN_API_PRIV.h

Copyright (c) 2016 Octasic Inc. All rights reserved.

Description: Contains the definition of the MAIN API.

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

$Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_MAIN_API_PRIV_H__
#define __OCTVC1_MAIN_API_PRIV_H__


/*****************************  INCLUDE FILES  *******************************/
#include "octvc1_main_api.h"
#include "octvc1_main_id_priv.h"
#include "octvc1_main_rc_priv.h"

/************************  COMMON DEFINITIONS  *******************************/

/*-------------------------------------------------------------------------------------
 	MAIN API private definitions
-------------------------------------------------------------------------------------*/
#define cOCTVC1_MAIN_PRIVATE_API_CMD_PASSWORD				0x1FE75CB2	








/*****************************  METHODS  *************************************/

/*****************************  MODULE_DATA  *************************************/

/***************  INCLUDE FILES WITH DEPENDENCIES ON THIS FILE  **************/
#include "octvc1_main_evt_priv.h"

#endif /* __OCTVC1_MAIN_API_PRIV_H__ */

