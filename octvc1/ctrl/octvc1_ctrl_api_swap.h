/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

File: octvc1_ctrl_api_swap.h	

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
	

Release: OCTSDR Software Development Kit OCTSDR_GSM-02.03.00-B560 (2015/08/07)	

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/	
#ifndef __OCTVC1_CTRL_API_SWAP_H__
#define __OCTVC1_CTRL_API_SWAP_H__

#ifdef __cplusplus
extern "C" {
#endif

/*****************************  INCLUDE FILES  *******************************/
#include "../octvc1_swap_hdrs.h"
#include "octvc1_ctrl_api.h"

/*********************************  MACROS  **********************************/


#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_CTRL_MSG_MODULE_REJECT_SPV_SWAP( _f_pParms ){ 	tOCTVC1_CTRL_MSG_MODULE_REJECT_SPV * pOCTVC1_CTRL_MSG_MODULE_REJECT_SPV = (_f_pParms); SWAP_UNUSED(pOCTVC1_CTRL_MSG_MODULE_REJECT_SPV)\
	{ mOCTVC1_MSG_HEADER_SWAP( &((tOCTVC1_CTRL_MSG_MODULE_REJECT_SPV *)pOCTVC1_CTRL_MSG_MODULE_REJECT_SPV)->Header ); }  \
	((tOCTVC1_CTRL_MSG_MODULE_REJECT_SPV *)pOCTVC1_CTRL_MSG_MODULE_REJECT_SPV)->ulExpectedTransactionId = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_CTRL_MSG_MODULE_REJECT_SPV *)pOCTVC1_CTRL_MSG_MODULE_REJECT_SPV)->ulExpectedTransactionId); \
	((tOCTVC1_CTRL_MSG_MODULE_REJECT_SPV *)pOCTVC1_CTRL_MSG_MODULE_REJECT_SPV)->ulRejectedCmdId = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_CTRL_MSG_MODULE_REJECT_SPV *)pOCTVC1_CTRL_MSG_MODULE_REJECT_SPV)->ulRejectedCmdId); \
}
#else
#define mOCTVC1_CTRL_MSG_MODULE_REJECT_SPV_SWAP( pOCTVC1_CTRL_MSG_MODULE_REJECT_SPV )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#ifdef __cplusplus
}

#endif

#endif /* __OCTVC1_CTRL_API_SWAP_H__ */
