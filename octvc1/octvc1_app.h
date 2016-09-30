/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_APP.h

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

#ifndef __OCTVC1_APP_H__
#define __OCTVC1_APP_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octdev_types.h"
/****************************************************************************
	Generic application definitions
 ****************************************************************************/

#define cOCTVC1_APP_COMPANY_NAME			"Octasic"
#define cOCTVC1_APP_PRODUCT_NAME			"Software Define Radio"
#define cOCTVC1_APP_PRODUCT_SHORT_NAME			"octsdr_gsm"
#define cOCTVC1_APP_PRODUCT_GOOSE_ROOT_NAME			"octsdr"
#define cOCTVC1_APP_VERSION_MAJOR			2
#define cOCTVC1_APP_VERSION_MINOR			5
#define cOCTVC1_APP_VERSION_MAINTENANCE	0
#define cOCTVC1_APP_VERSION_BUILD		780
#define cOCTVC1_APP_VERSION_ID			((cOCTVC1_APP_VERSION_MAJOR << 25) + \
								(cOCTVC1_APP_VERSION_MINOR << 18) + \
								(cOCTVC1_APP_VERSION_MAINTENANCE << 11) + \
								(cOCTVC1_APP_VERSION_BUILD) ) 

#endif /* __OCTVC1_APP_H__ */

