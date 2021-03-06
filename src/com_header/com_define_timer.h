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


#ifndef COM_DEFINE_TIMER_H_1AA3C8B4_F2B7_48CD_A04C_D45238B81DCA
#define COM_DEFINE_TIMER_H_1AA3C8B4_F2B7_48CD_A04C_D45238B81DCA

#define		TIMER_INTERVAL_TIME_SEC			1
#define		TIMER_INTERVAL_TIME_MIN			60
#define		TIMER_INTERVAL_TIME_HOUR		3600
#define		TIMER_INTERVAL_TIME_DAY			86400

#define		TIMER_INTERVAL_TIME_SYS_BOOT	(TIMER_INTERVAL_TIME_MIN*5)

enum _ENUM_EVNT_TIMER_ID
{
	TIMER_ID_LOGIN_SVR_AUTH				= 100,
	TIMER_ID_LOGIN_SVR_AUTH_LAST,
	TIMER_ID_MANAGER_SVR_AUTH,
	TIMER_ID_MANAGER_SVR_AUTH_LAST,
	TIMER_ID_UPDATE_SVR_AUTH,
	TIMER_ID_UPDATE_SVR_AUTH_LAST,
	TIMER_ID_DOWNLOAD_UPDATE_FILE,
	TIMER_ID_SYS_BOOT_OPERATION_END,
	TIMER_ID_SYS_OFF_OPERATION,
	TIMER_ID_SYS_OFF_OPERATION_END,
	TIMER_ID_SYS_OFF_OPERATION_CHG_SESSION,
	TIMER_ID_CHECK_CHANGE_NET_DRIVE,
	TIMER_ID_CHECK_CHANGE_FIX_DRIVE,
	TIMER_ID_CHECK_CHANGE_LOGIN_USER,

	TIMER_ID_POLICY_APPLY_CHECK			= 500,
	TIMER_ID_POLICY_APPLY_FA_CLEAR,
	TIMER_ID_POLICY_APPLY_FA_OP_CLEAR,
	TIMER_ID_POLICY_APPLY_POWER,
	TIMER_ID_POLICY_APPLY_IN_PTN_OP,

	TIMER_ID_POLICY_APPLY_EPS			= 600,	

	TIMER_ID_TS_PROTECT_MODE			= 700,
	
	TIMER_ID_WINDOWS_EVENT_HANDLER		= 1000,		// #20161228 Work Ahnshy :: MBR, 빠른시작을 위한 이벤트 감지 및 핸들러

	TIMER_ID_DP_FILE_EXCUTE_END			= 1100,
};

#define		ASHIN_WEEK_TYPE_ALL				0
#define		ASHIN_WEEK_TYPE_SUN				1
#define		ASHIN_WEEK_TYPE_MON				2
#define		ASHIN_WEEK_TYPE_TUS				3
#define		ASHIN_WEEK_TYPE_WED				4
#define		ASHIN_WEEK_TYPE_THU				5
#define		ASHIN_WEEK_TYPE_FRI				6
#define		ASHIN_WEEK_TYPE_SAT				7


#endif	//COM_DEFINE_TIMER_H_1AA3C8B4_F2B7_48CD_A04C_D45238B81DCA
