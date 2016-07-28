/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTDEV_RC_BASE.h

Copyright (c) 2016 Octasic Inc. All rights reserved.

Description: 

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.06.00-B964 (2016/05/31)

$Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTDEV_RC_BASE_H__
#define __OCTDEV_RC_BASE_H__


/************************  COMMON DEFINITIONS  *******************************/

/*-------------------------------------------------------------------------------------
 	Gemeric Return Code bases
-------------------------------------------------------------------------------------*/

#define cOCTADF_TARGET_RC_BASE								0x01000000	
#define cOCTVC1_API_RC_BASE									0x0A000000	
#define cOCTCOMMON_API_RC_BASE								0x0E000000	
#define cOCTDEVICE_API_RC_BASE								0x0F000000	

/*-------------------------------------------------------------------------------------
 	Return Code fatal flag
-------------------------------------------------------------------------------------*/

#define cOCTDEV_RC_FATAL_FLAG								0x80000000	

#endif /* __OCTDEV_RC_BASE_H__ */

