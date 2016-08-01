/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

File: octdev_types_swap.h	

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
	

Release: OCTSDR Software Development Kit OCTSDR_GSM-02.06.01-B981 (2016/06/10)	

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/	
#ifndef __OCTDEV_TYPES_SWAP_H__
#define __OCTDEV_TYPES_SWAP_H__

#ifdef __cplusplus
extern "C" {
#endif

/*****************************  INCLUDE FILES  *******************************/
#include "octvc1/octvc1_swap_hdrs.h"
#include "octdev_types.h"

/*********************************  MACROS  **********************************/


#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTDEV_IP_VERSION_ENUM_SWAP( pType ){ \
		*((tOCT_UINT32 *)pType) = mOCT_SWAP32_IF_LE( *((tOCT_UINT32 *)pType) ); }
#else

#define mOCTDEV_IP_VERSION_ENUM_SWAP( pType )

#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTDEV_IP_ADDRESS_SWAP( _f_pParms ){ 	tOCTDEV_IP_ADDRESS * pOCTDEV_IP_ADDRESS = (_f_pParms); SWAP_UNUSED(pOCTDEV_IP_ADDRESS)\
	{ mOCTDEV_IP_VERSION_ENUM_SWAP( &((tOCTDEV_IP_ADDRESS *)pOCTDEV_IP_ADDRESS)->ulIpVersion ); }  \
	{ tOCT_UINT32 iOCTDEV_IP_ADDRESS; \
	for( iOCTDEV_IP_ADDRESS=0; \
		iOCTDEV_IP_ADDRESS<(4);iOCTDEV_IP_ADDRESS++ ) \
	((tOCTDEV_IP_ADDRESS *)pOCTDEV_IP_ADDRESS)->aulIpAddress[iOCTDEV_IP_ADDRESS] = \
		mOCT_SWAP32_IF_LE(((tOCTDEV_IP_ADDRESS *)pOCTDEV_IP_ADDRESS)->aulIpAddress[iOCTDEV_IP_ADDRESS]);}\
}
#else
#define mOCTDEV_IP_ADDRESS_SWAP( pOCTDEV_IP_ADDRESS )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTDEV_UDP_ADDRESS_SWAP( _f_pParms ){ 	tOCTDEV_UDP_ADDRESS * pOCTDEV_UDP_ADDRESS = (_f_pParms); SWAP_UNUSED(pOCTDEV_UDP_ADDRESS)\
	{ mOCTDEV_IP_ADDRESS_SWAP( &((tOCTDEV_UDP_ADDRESS *)pOCTDEV_UDP_ADDRESS)->IpAddress ); }  \
	((tOCTDEV_UDP_ADDRESS *)pOCTDEV_UDP_ADDRESS)->ulUdpPort = \
		mOCT_SWAP32_IF_LE(((tOCTDEV_UDP_ADDRESS *)pOCTDEV_UDP_ADDRESS)->ulUdpPort); \
}
#else
#define mOCTDEV_UDP_ADDRESS_SWAP( pOCTDEV_UDP_ADDRESS )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTDEV_TCP_ADDRESS_SWAP( _f_pParms ){ 	tOCTDEV_TCP_ADDRESS * pOCTDEV_TCP_ADDRESS = (_f_pParms); SWAP_UNUSED(pOCTDEV_TCP_ADDRESS)\
	{ mOCTDEV_IP_ADDRESS_SWAP( &((tOCTDEV_TCP_ADDRESS *)pOCTDEV_TCP_ADDRESS)->IpAddress ); }  \
	((tOCTDEV_TCP_ADDRESS *)pOCTDEV_TCP_ADDRESS)->ulTcpPort = \
		mOCT_SWAP32_IF_LE(((tOCTDEV_TCP_ADDRESS *)pOCTDEV_TCP_ADDRESS)->ulTcpPort); \
}
#else
#define mOCTDEV_TCP_ADDRESS_SWAP( pOCTDEV_TCP_ADDRESS )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#ifdef __cplusplus
}

#endif

#endif /* __OCTDEV_TYPES_SWAP_H__ */
