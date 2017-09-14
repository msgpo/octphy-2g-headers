/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_FIFO.h

Copyright (c) 2017 Octasic Inc. All rights reserved.

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.08.00-B1418 (2017/03/21)

$Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_FIFO_H__
#define __OCTVC1_FIFO_H__


/************************  COMMON DEFINITIONS  *******************************/

/*-------------------------------------------------------------------------------------
 	Control process FIFO-ID definition
 	Deprecated should use cOCTVC1_FIFO_ID_CONTROL
-------------------------------------------------------------------------------------*/

#define cOCTVC1_FIFO_ID_MGW_CONTROL							0x00000000	

/*-------------------------------------------------------------------------------------
 	Control process _FIFO-ID definition
-------------------------------------------------------------------------------------*/

#define cOCTVC1_FIFO_ID_CONTROL								0x00000000	

/*-------------------------------------------------------------------------------------
 	Invalid _FIFO-ID
-------------------------------------------------------------------------------------*/

#define cOCTVC1_FIFO_ID_INVALID								0xFFFFFFFF	

#endif /* __OCTVC1_FIFO_H__ */

