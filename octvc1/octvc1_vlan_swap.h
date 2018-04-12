/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

File: octvc1_vlan_swap.h	

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
#ifndef __OCTVC1_VLAN_SWAP_H__
#define __OCTVC1_VLAN_SWAP_H__

#ifdef __cplusplus
extern "C" {
#endif

/*****************************  INCLUDE FILES  *******************************/
#include "octvc1_swap_hdrs.h"
#include "octvc1_vlan.h"

/*********************************  MACROS  **********************************/


#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_VLAN_PROTOCOL_ID_ENUM_SWAP( pType ){ \
		*((tOCT_UINT32 *)pType) = mOCT_SWAP32_IF_LE( *((tOCT_UINT32 *)pType) ); }
#else

#define mOCTVC1_VLAN_PROTOCOL_ID_ENUM_SWAP( pType )

#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_VLAN_TAG_SWAP( _f_pParms ){ 	tOCTVC1_VLAN_TAG * pOCTVC1_VLAN_TAG = (_f_pParms); SWAP_UNUSED(pOCTVC1_VLAN_TAG)\
	((tOCTVC1_VLAN_TAG *)pOCTVC1_VLAN_TAG)->ulPriority = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_VLAN_TAG *)pOCTVC1_VLAN_TAG)->ulPriority); \
	((tOCTVC1_VLAN_TAG *)pOCTVC1_VLAN_TAG)->ulVlanId = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_VLAN_TAG *)pOCTVC1_VLAN_TAG)->ulVlanId); \
	{ mOCTVC1_VLAN_PROTOCOL_ID_ENUM_SWAP( &((tOCTVC1_VLAN_TAG *)pOCTVC1_VLAN_TAG)->ulProtocolId ); }  \
}
#else
#define mOCTVC1_VLAN_TAG_SWAP( pOCTVC1_VLAN_TAG )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_VLAN_HEADER_INFO_SWAP( _f_pParms ){ 	tOCTVC1_VLAN_HEADER_INFO * pOCTVC1_VLAN_HEADER_INFO = (_f_pParms); SWAP_UNUSED(pOCTVC1_VLAN_HEADER_INFO)\
	((tOCTVC1_VLAN_HEADER_INFO *)pOCTVC1_VLAN_HEADER_INFO)->ulNumVlanTag = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_VLAN_HEADER_INFO *)pOCTVC1_VLAN_HEADER_INFO)->ulNumVlanTag); \
	{ tOCT_UINT32 jOCTVC1_VLAN_HEADER_INFO; \
	for( jOCTVC1_VLAN_HEADER_INFO=0; \
		jOCTVC1_VLAN_HEADER_INFO<(cOCTVC1_VLAN_MAX_TAG);jOCTVC1_VLAN_HEADER_INFO++ ) \
	{ mOCTVC1_VLAN_TAG_SWAP( &((tOCTVC1_VLAN_HEADER_INFO *)pOCTVC1_VLAN_HEADER_INFO)->aVlanTag[jOCTVC1_VLAN_HEADER_INFO] ); }} \
}
#else
#define mOCTVC1_VLAN_HEADER_INFO_SWAP( pOCTVC1_VLAN_HEADER_INFO )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#ifdef __cplusplus
}

#endif

#endif /* __OCTVC1_VLAN_SWAP_H__ */
