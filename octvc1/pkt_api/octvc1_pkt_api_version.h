/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_PKT_API_VERSION.h

Copyright (c) 2015 Octasic Inc. All rights reserved.

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


Release: Octasic Application Development Framework OCTADF-04.00.00-B1829 (2015/07/02)

$Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_PKT_API_VERSION_H__
#define __OCTVC1_PKT_API_VERSION_H__

/*****************************  INCLUDE FILES  *******************************/
#include "../../octdev_types.h"

/*--------------------------------------------------------------------------
	C language
----------------------------------------------------------------------------*/

#ifdef __cplusplus
extern "C" {
#endif


/*****************************  DEFINES **************************************/
/* The version ID is separated into the following sections:

      bit[31:25]:    Major version
      bit[24:18]:    Minor version
      bit[17:11]:    Bug fix version
      bit[10:0]:     Build number
*/
#define cOCTVC1_PKT_API_VERSION_MAJOR		4
#define cOCTVC1_PKT_API_VERSION_MINOR		3
#define cOCTVC1_PKT_API_VERSION_MAINTENANCE	0
#define cOCTVC1_PKT_API_VERSION_BUILD		1829

#define cOCTVC1_PKT_API_VERSION_ID       ( (cOCTVC1_PKT_API_VERSION_MAJOR << 25) + \
										 (cOCTVC1_PKT_API_VERSION_MINOR << 18) + \
                                         (cOCTVC1_PKT_API_VERSION_MAINTENANCE << 11) + \
                                         cOCTVC1_PKT_API_VERSION_BUILD )

/*--------------------------------------------------------------------------
	C language
----------------------------------------------------------------------------*/

#ifdef __cplusplus
}
#endif

#endif /* __OCTVC1_PKT_API_VERSION_H__*/
