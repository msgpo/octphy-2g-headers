/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

File: octvc1_ipc_swap.h	

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

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/	
#ifndef __OCTVC1_IPC_SWAP_H__
#define __OCTVC1_IPC_SWAP_H__

#ifdef __cplusplus
extern "C" {
#endif

/*****************************  INCLUDE FILES  *******************************/
#include "octvc1_swap_hdrs.h"
#include "octvc1_ipc.h"

/*********************************  MACROS  **********************************/



#define mOCTVC1_IPC_MSG_FLAG_MASK_SWAP( pType )	/* tOCT_UINT8 */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_IPC_MSG_HEADER_SWAP( _f_pParms ){ 	tOCTVC1_IPC_MSG_HEADER * pOCTVC1_IPC_MSG_HEADER = (_f_pParms); SWAP_UNUSED(pOCTVC1_IPC_MSG_HEADER)\
	((tOCTVC1_IPC_MSG_HEADER *)pOCTVC1_IPC_MSG_HEADER)->ulFlag_Seq_Id = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_IPC_MSG_HEADER *)pOCTVC1_IPC_MSG_HEADER)->ulFlag_Seq_Id); \
}
#else
#define mOCTVC1_IPC_MSG_HEADER_SWAP( pOCTVC1_IPC_MSG_HEADER )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#ifdef __cplusplus
}

#endif

#endif /* __OCTVC1_IPC_SWAP_H__ */
