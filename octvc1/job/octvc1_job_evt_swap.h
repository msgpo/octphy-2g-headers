/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

File: octvc1_job_evt_swap.h	

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
#ifndef __OCTVC1_JOB_EVT_SWAP_H__
#define __OCTVC1_JOB_EVT_SWAP_H__

#ifdef __cplusplus
extern "C" {
#endif

/*****************************  INCLUDE FILES  *******************************/
#include "../octvc1_swap_hdrs.h"
#include "octvc1_job_evt.h"

/*********************************  MACROS  **********************************/


#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_JOB_MSG_RUNNER_EXECUTOR_STATE_CHANGE_EVT_SWAP( _f_pParms ){ 	tOCTVC1_JOB_MSG_RUNNER_EXECUTOR_STATE_CHANGE_EVT * pOCTVC1_JOB_MSG_RUNNER_EXECUTOR_STATE_CHANGE_EVT = (_f_pParms); SWAP_UNUSED(pOCTVC1_JOB_MSG_RUNNER_EXECUTOR_STATE_CHANGE_EVT)\
	{ mOCTVC1_EVENT_HEADER_SWAP( &((tOCTVC1_JOB_MSG_RUNNER_EXECUTOR_STATE_CHANGE_EVT *)pOCTVC1_JOB_MSG_RUNNER_EXECUTOR_STATE_CHANGE_EVT)->Header ); }  \
	((tOCTVC1_JOB_MSG_RUNNER_EXECUTOR_STATE_CHANGE_EVT *)pOCTVC1_JOB_MSG_RUNNER_EXECUTOR_STATE_CHANGE_EVT)->hExecutor = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_JOB_MSG_RUNNER_EXECUTOR_STATE_CHANGE_EVT *)pOCTVC1_JOB_MSG_RUNNER_EXECUTOR_STATE_CHANGE_EVT)->hExecutor); \
	((tOCTVC1_JOB_MSG_RUNNER_EXECUTOR_STATE_CHANGE_EVT *)pOCTVC1_JOB_MSG_RUNNER_EXECUTOR_STATE_CHANGE_EVT)->hActiveCase = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_JOB_MSG_RUNNER_EXECUTOR_STATE_CHANGE_EVT *)pOCTVC1_JOB_MSG_RUNNER_EXECUTOR_STATE_CHANGE_EVT)->hActiveCase); \
	{ mOCTVC1_JOB_RUNNER_CASE_STATE_ENUM_SWAP( &((tOCTVC1_JOB_MSG_RUNNER_EXECUTOR_STATE_CHANGE_EVT *)pOCTVC1_JOB_MSG_RUNNER_EXECUTOR_STATE_CHANGE_EVT)->ulOldState ); }  \
	{ mOCTVC1_JOB_RUNNER_CASE_STATE_ENUM_SWAP( &((tOCTVC1_JOB_MSG_RUNNER_EXECUTOR_STATE_CHANGE_EVT *)pOCTVC1_JOB_MSG_RUNNER_EXECUTOR_STATE_CHANGE_EVT)->ulNewState ); }  \
}
#else
#define mOCTVC1_JOB_MSG_RUNNER_EXECUTOR_STATE_CHANGE_EVT_SWAP( pOCTVC1_JOB_MSG_RUNNER_EXECUTOR_STATE_CHANGE_EVT )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_JOB_MSG_RUNNER_EXECUTOR_ITERATION_EVT_SWAP( _f_pParms ){ 	tOCTVC1_JOB_MSG_RUNNER_EXECUTOR_ITERATION_EVT * pOCTVC1_JOB_MSG_RUNNER_EXECUTOR_ITERATION_EVT = (_f_pParms); SWAP_UNUSED(pOCTVC1_JOB_MSG_RUNNER_EXECUTOR_ITERATION_EVT)\
	{ mOCTVC1_EVENT_HEADER_SWAP( &((tOCTVC1_JOB_MSG_RUNNER_EXECUTOR_ITERATION_EVT *)pOCTVC1_JOB_MSG_RUNNER_EXECUTOR_ITERATION_EVT)->Header ); }  \
	((tOCTVC1_JOB_MSG_RUNNER_EXECUTOR_ITERATION_EVT *)pOCTVC1_JOB_MSG_RUNNER_EXECUTOR_ITERATION_EVT)->hExecutor = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_JOB_MSG_RUNNER_EXECUTOR_ITERATION_EVT *)pOCTVC1_JOB_MSG_RUNNER_EXECUTOR_ITERATION_EVT)->hExecutor); \
	((tOCTVC1_JOB_MSG_RUNNER_EXECUTOR_ITERATION_EVT *)pOCTVC1_JOB_MSG_RUNNER_EXECUTOR_ITERATION_EVT)->hRunnerCase = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_JOB_MSG_RUNNER_EXECUTOR_ITERATION_EVT *)pOCTVC1_JOB_MSG_RUNNER_EXECUTOR_ITERATION_EVT)->hRunnerCase); \
}
#else
#define mOCTVC1_JOB_MSG_RUNNER_EXECUTOR_ITERATION_EVT_SWAP( pOCTVC1_JOB_MSG_RUNNER_EXECUTOR_ITERATION_EVT )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#ifdef __cplusplus
}

#endif

#endif /* __OCTVC1_JOB_EVT_SWAP_H__ */
