/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

File: octvc1_test_api_swap.h	

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
	

Release: OCTSDR Software Development Kit OCTSDR_GSM-02.04.00-B662 (2015/10/28)	

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/	
#ifndef __OCTVC1_TEST_API_SWAP_H__
#define __OCTVC1_TEST_API_SWAP_H__

#ifdef __cplusplus
extern "C" {
#endif

/*****************************  INCLUDE FILES  *******************************/
#include "../octvc1_swap_hdrs.h"
#include "octvc1_test_api.h"

/*********************************  MACROS  **********************************/


#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_TEST_EXEC_PARMS_SWAP( _f_pParms ){ 	tOCTVC1_TEST_EXEC_PARMS * pOCTVC1_TEST_EXEC_PARMS = (_f_pParms); SWAP_UNUSED(pOCTVC1_TEST_EXEC_PARMS)\
	{ tOCT_UINT32 iOCTVC1_TEST_EXEC_PARMS; \
	for( iOCTVC1_TEST_EXEC_PARMS=0; \
		iOCTVC1_TEST_EXEC_PARMS<(cOCTVC1_TEST_RUNNER_TEST_MAX_OBJ);iOCTVC1_TEST_EXEC_PARMS++ ) \
	((tOCTVC1_TEST_EXEC_PARMS *)pOCTVC1_TEST_EXEC_PARMS)->ahObj[iOCTVC1_TEST_EXEC_PARMS] = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_TEST_EXEC_PARMS *)pOCTVC1_TEST_EXEC_PARMS)->ahObj[iOCTVC1_TEST_EXEC_PARMS]);}\
}
#else
#define mOCTVC1_TEST_EXEC_PARMS_SWAP( pOCTVC1_TEST_EXEC_PARMS )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#ifdef __cplusplus
}

#endif

#endif /* __OCTVC1_TEST_API_SWAP_H__ */
