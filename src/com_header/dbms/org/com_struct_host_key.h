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

#ifndef DB_HOST_KEY_H_4D39CDDB_E289_4d56_9F98_FE42776F4467
#define DB_HOST_KEY_H_4D39CDDB_E289_4d56_9F98_FE42776F4467

typedef struct _db_host_key
{
	_db_host_key()
	{
		nID						= 0;
		nUsedFlag				= USED_FLAG_TYPE_USED;
	} 

	UINT32				nID ;
	UINT32				nUsedFlag;

	String				strBkKey;	
	String				strRcKey;

	String				strCrKey;

}DB_HOST_KEY, *PDB_HOST_KEY;

typedef list<DB_HOST_KEY>			TListDBHostKey;
typedef TListDBHostKey::iterator	TListDBHostKeyItor;

typedef map<UINT32, DB_HOST_KEY>	TMapDBHostKey;
typedef TMapDBHostKey::iterator		TMapDBHostKeyItor;

#endif //DB_HOST_KEY_H_4D39CDDB_E289_4d56_9F98_FE42776F4467



