/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

File: octvc1_file_swap.h	

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
	

Release: OCTSDR Software Development Kit OCTSDR_GSM-02.05.00-B780 (2016/01/14)	

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/	
#ifndef __OCTVC1_FILE_SWAP_H__
#define __OCTVC1_FILE_SWAP_H__

#ifdef __cplusplus
extern "C" {
#endif

/*****************************  INCLUDE FILES  *******************************/
#include "octvc1_swap_hdrs.h"
#include "octvc1_file.h"

/*********************************  MACROS  **********************************/


#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_FILE_TYPE_ENUM_SWAP( pType ){ \
		*((tOCT_UINT32 *)pType) = mOCT_SWAP32_IF_LE( *((tOCT_UINT32 *)pType) ); }
#else

#define mOCTVC1_FILE_TYPE_ENUM_SWAP( pType )

#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_FILE_FORMAT_ENUM_SWAP( pType ){ \
		*((tOCT_UINT32 *)pType) = mOCT_SWAP32_IF_LE( *((tOCT_UINT32 *)pType) ); }
#else

#define mOCTVC1_FILE_FORMAT_ENUM_SWAP( pType )

#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_FILE_HEADER_SWAP( _f_pParms ){ 	tOCTVC1_FILE_HEADER * pOCTVC1_FILE_HEADER = (_f_pParms); SWAP_UNUSED(pOCTVC1_FILE_HEADER)\
	((tOCTVC1_FILE_HEADER *)pOCTVC1_FILE_HEADER)->ulMagic = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_FILE_HEADER *)pOCTVC1_FILE_HEADER)->ulMagic); \
	((tOCTVC1_FILE_HEADER *)pOCTVC1_FILE_HEADER)->ul_Type_Ver = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_FILE_HEADER *)pOCTVC1_FILE_HEADER)->ul_Type_Ver); \
	((tOCTVC1_FILE_HEADER *)pOCTVC1_FILE_HEADER)->ulTimeStamp = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_FILE_HEADER *)pOCTVC1_FILE_HEADER)->ulTimeStamp); \
	((tOCTVC1_FILE_HEADER *)pOCTVC1_FILE_HEADER)->ul_Align_HdrSize = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_FILE_HEADER *)pOCTVC1_FILE_HEADER)->ul_Align_HdrSize); \
}
#else
#define mOCTVC1_FILE_HEADER_SWAP( pOCTVC1_FILE_HEADER )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#ifdef __cplusplus
}

#endif

#endif /* __OCTVC1_FILE_SWAP_H__ */
