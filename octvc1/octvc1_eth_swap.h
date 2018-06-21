/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

File: octvc1_eth_swap.h	

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
	

Release: OCTSDR Software Development Kit OCTSDR_GSM-02.11.00-B1927 (2018/04/27)	

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/	
#ifndef __OCTVC1_ETH_SWAP_H__
#define __OCTVC1_ETH_SWAP_H__

#ifdef __cplusplus
extern "C" {
#endif

/*****************************  INCLUDE FILES  *******************************/
#include "octvc1_swap_hdrs.h"
#include "octvc1_eth.h"

/*********************************  MACROS  **********************************/


#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_ETH_PORT_ID_ENUM_SWAP( pType ){ \
		*((tOCT_UINT32 *)pType) = mOCT_SWAP32_IF_LE( *((tOCT_UINT32 *)pType) ); }
#else

#define mOCTVC1_ETH_PORT_ID_ENUM_SWAP( pType )

#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_ETH_ADDRESS_SWAP( _f_pParms ){ 	tOCTVC1_ETH_ADDRESS * pOCTVC1_ETH_ADDRESS = (_f_pParms); SWAP_UNUSED(pOCTVC1_ETH_ADDRESS)\
	((tOCTVC1_ETH_ADDRESS *)pOCTVC1_ETH_ADDRESS)->usEtherType = \
		mOCT_SWAP16_IF_LE(((tOCTVC1_ETH_ADDRESS *)pOCTVC1_ETH_ADDRESS)->usEtherType);  \
	((tOCTVC1_ETH_ADDRESS *)pOCTVC1_ETH_ADDRESS)->usReserved = \
		mOCT_SWAP16_IF_LE(((tOCTVC1_ETH_ADDRESS *)pOCTVC1_ETH_ADDRESS)->usReserved);  \
}
#else
#define mOCTVC1_ETH_ADDRESS_SWAP( pOCTVC1_ETH_ADDRESS )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#ifdef __cplusplus
}

#endif

#endif /* __OCTVC1_ETH_SWAP_H__ */
