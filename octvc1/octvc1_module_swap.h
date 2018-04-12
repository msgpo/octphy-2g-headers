/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

File: octvc1_module_swap.h	

Copyright (c) 2018 Octasic Inc. All rights reserved.	

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
	

Release: OCTSDR Software Development Kit OCTSDR_GSM-02.10.00-B1837 (2018/02/21)	

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/	
#ifndef __OCTVC1_MODULE_SWAP_H__
#define __OCTVC1_MODULE_SWAP_H__

#ifdef __cplusplus
extern "C" {
#endif

/*****************************  INCLUDE FILES  *******************************/
#include "octvc1_swap_hdrs.h"
#include "octvc1_module.h"

/*********************************  MACROS  **********************************/


#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_RESOURCE_SWAP( _f_pParms ){ 	tOCTVC1_RESOURCE * pOCTVC1_RESOURCE = (_f_pParms); SWAP_UNUSED(pOCTVC1_RESOURCE)\
	((tOCTVC1_RESOURCE *)pOCTVC1_RESOURCE)->ulModuleId = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_RESOURCE *)pOCTVC1_RESOURCE)->ulModuleId); \
	((tOCTVC1_RESOURCE *)pOCTVC1_RESOURCE)->ulLocalMemorySize = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_RESOURCE *)pOCTVC1_RESOURCE)->ulLocalMemorySize); \
}
#else
#define mOCTVC1_RESOURCE_SWAP( pOCTVC1_RESOURCE )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_MODULE_ID_ENUM_SWAP( pType ){ \
		*((tOCT_UINT32 *)pType) = mOCT_SWAP32_IF_LE( *((tOCT_UINT32 *)pType) ); }
#else

#define mOCTVC1_MODULE_ID_ENUM_SWAP( pType )

#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_MODULE_APPLICATION_ID_SWAP( pType ){ \
		*((tOCT_UINT32 *)pType) = mOCT_SWAP32_IF_LE( *((tOCT_UINT32 *)pType) ); }
#else

#define mOCTVC1_MODULE_APPLICATION_ID_SWAP( pType )

#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_MODULE_DATA_SWAP( _f_pParms ){ 	tOCTVC1_MODULE_DATA * pOCTVC1_MODULE_DATA = (_f_pParms); SWAP_UNUSED(pOCTVC1_MODULE_DATA)\
	((tOCTVC1_MODULE_DATA *)pOCTVC1_MODULE_DATA)->ulModuleDataId = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_MODULE_DATA *)pOCTVC1_MODULE_DATA)->ulModuleDataId); \
	((tOCTVC1_MODULE_DATA *)pOCTVC1_MODULE_DATA)->ulModuleDataSize = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_MODULE_DATA *)pOCTVC1_MODULE_DATA)->ulModuleDataSize); \
	((tOCTVC1_MODULE_DATA *)pOCTVC1_MODULE_DATA)->hLogicalObj = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_MODULE_DATA *)pOCTVC1_MODULE_DATA)->hLogicalObj); \
	((tOCTVC1_MODULE_DATA *)pOCTVC1_MODULE_DATA)->ulTimestamp = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_MODULE_DATA *)pOCTVC1_MODULE_DATA)->ulTimestamp); \
}
#else
#define mOCTVC1_MODULE_DATA_SWAP( pOCTVC1_MODULE_DATA )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#ifdef __cplusplus
}

#endif

#endif /* __OCTVC1_MODULE_SWAP_H__ */
