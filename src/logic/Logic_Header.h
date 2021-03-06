/*
 * Copyright (C) 2020-2025 ASHINi corp. 
 * 
 * This library is free software; you can redistribute it and/or 
 * modify it under the terms of the GNU Lesser General Public 
 * License as published by the Free Software Foundation; either 
 * version 2.1 of the License, or (at your option) any later version. 
 * 
 * This library is distributed in the hope that it will be useful, 
 * but WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU 
 * Lesser General Public License for more details. 
 * 
 * You should have received a copy of the GNU Lesser General Public 
 * License along with this library; if not, write to the Free Software 
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA 
 * 
 */


#ifndef	LOGIC_HEADER_H_35E2DC5F_18B1_42E7_B2B0_1CD01894D161
#define	LOGIC_HEADER_H_35E2DC5F_18B1_42E7_B2B0_1CD01894D161
                          

//------------------------------------------------------------------------------
//link svr

#include	"LogicAuth.h"
#include	"LogicInitLink.h"
#include	"LogicLogDeployFile.h"
//#include	"LogicLogDoc.h"
#include	"LogicLogEvent.h"
#include	"LogicLogSecu.h"
#include	"LogicLogStatus.h"

#include	"LogicSiteFile.h"
#include	"LogicSiteVuln.h"
#include	"LogicSiteVulnScan.h"
#include	"LogicSiteVulnRepair.h"
#include	"LogicSiteVulnLock.h"

#include	"LogicPoFaClear.h"
#include	"LogicLogDocDScan.h"
#include	"LogicUser.h"
#include	"LogicPoInPtnSPRule.h"

#include	"LogicEnvNotifyInfo.h"

//------------------------------------------------------------------------------

//agent mgr svr
#include	"LogicMgrAuth.h"
#include	"LogicMgrHost.h"
#include	"LogicMgrHostHw.h"
#include	"LogicMgrHostSw.h"
#include	"LogicMgrHostStatusPo.h"
#include	"LogicMgrHostSys.h"
#include	"LogicMgrHostKey.h"

#include	"LogicMgrUser.h"

#include	"LogicMgrSiteFile.h"
#include	"LogicMgrSiteVuln.h"
#include	"LogicMgrSiteVulnScan.h"
#include	"LogicMgrSiteVulnRepair.h"
#include	"LogicMgrSiteVulnLock.h"

#include	"LogicMgrPoCtlPanel.h"
#include	"LogicMgrPoCtlProc.h"
#include	"LogicMgrPoDeployFile.h"
#include	"LogicMgrPoPower.h"
#include	"LogicMgrPoWinRun.h"

#include	"LogicMgrPoHostRmInfo.h"
#include	"LogicMgrPoHostRun.h"
#include	"LogicMgrPoSelfProtect.h"
#include	"LogicMgrPoSvrInfoUdt.h"
#include	"LogicMgrPoSvrInfoLgn.h"

#include	"LogicMgrPoSch.h"

#include	"LogicMgrPoFaEnv.h"
#include	"LogicMgrPoFaOp.h"
#include	"LogicMgrPoFaProc.h"
#include	"LogicMgrPoFaClear.h"
#include	"LogicMgrPoFaBk.h"
#include	"LogicMgrPoFaNotify.h"

#include	"LogicMgrPoFePtnOp.h"
#include	"LogicMgrPoFePtnLo.h"
#include	"LogicMgrPoFePtnBL.h"
#include	"LogicMgrPoFePtnWL.h"
#include	"LogicMgrPoFeNotify.h"
#include	"LogicMgrPoFeExclude.h"
#include	"LogicMgrPoFeSinglePtn.h"

#include	"LogicMgrPoInPtnOp.h"
#include	"LogicMgrPoInPtnBL.h"
#include	"LogicMgrPoInPtnWL.h"
#include	"LogicMgrPoInPtnEx.h"
#include	"LogicMgrPoInPtnExTrust.h"
#include	"LogicMgrPoInPtnSP.h"
#include	"LogicMgrPoInPtnSPRule.h"
#include	"LogicMgrPoInPtnNo.h"
#include	"LogicMgrPoInAcDoc.h"
#include	"LogicMgrPoInAcSf.h"
#include	"LogicMgrPoInAcFile.h"
#include	"LogicMgrPoInVulnOp.h"
#include	"LogicMgrPoInVulnScan.h"

#include	"LogicMgrEnvLicense.h"
#include	"LogicMgrEnvLog.h"
#include	"LogicMgrEnvLogUnit.h"
#include	"LogicMgrEnvNotifyInfo.h"
#include	"LogicMgrEnvSelfProtectAgt.h"
#include	"LogicMgrEnvSOrgLink.h"
#include	"LogicMgrEnvTrustSubject.h"

#include	"LogicMgrLogDeployFile.h"
#include	"LogicMgrLogDoc.h"
#include	"LogicMgrLogSecu.h"
#include	"LogicMgrLogStatus.h"

#include	"LogicMgrCtrlRemoteCtrl.h"
#include	"LogicMgrCtrlRemotePower.h"
#include	"LogicMgrCtrlInstantMsg.h"
#include	"LogicMgrCtrlHostRes.h"
#include	"LogicMgrCtrlRestore.h"
#include	"LogicMgrCtrlRemoteOrder.h"
// 
//------------------------------------------------------------------------------

#include	"LogicApplyPolicy.h"
//------------------------------------------------------------------------------

#include	"LogicPWEvtMon.h"
#include	"LogicLocalEnvLog.h"
#include	"LogicLocalEnvAuth.h"
//------------------------------------------------------------------------------

//agent lgn svr
#include	"LogicLgnAuth.h"

//------------------------------------------------------------------------------

//agent udt svr
#include	"LogicUdtAuth.h"

//------------------------------------------------------------------------------

#endif	//LOGIC_HEADER_H_35E2DC5F_18B1_42E7_B2B0_1CD01894D161
