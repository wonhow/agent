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

//---------------------------------------------------------------------------

#ifndef ManagePoFePtnLoH
#define ManagePoFePtnLoH
//---------------------------------------------------------------------------

class CManagePoFePtnLo : public CManagePoBase<DB_PO_FE_PTN_LO>
{
public:
	INT32					LoadDBMS();

public:
	INT32					InitHash();
	INT32					InitHash(UINT32 nID);

public:
	INT32					AddPoFePtnLo(DB_PO_FE_PTN_LO&	dpfpl);
    INT32					EditPoFePtnLo(DB_PO_FE_PTN_LO&	dpfpl);
	INT32					DelPoFePtnLo(UINT32 nID);
	INT32					ApplyPoFePtnLo(DB_PO_FE_PTN_LO&	dpfpl);

public:
	String					GetName(UINT32 nID);    

public:
	INT32					IsValidPtnFile(UINT32 nID);
	INT32					IsValidPtnFile(PDB_PO_FE_PTN_LO pdpfpl);

public:
	INT32					SetPkt(MemToken& SendToken);
	INT32					SetPkt(UINT32 nID, MemToken& SendToken);
	INT32					SetPkt(PDB_PO_FE_PTN_LO pdpfpl, MemToken& SendToken);
	INT32					GetPkt(MemToken& RecvToken, DB_PO_FE_PTN_LO& dpfpl);

public:
	INT32					SetPktHost(UINT32 nID, MemToken& SendToken);
	INT32					SetPktHost(PDB_PO_FE_PTN_LO pdpfpl, MemToken& SendToken);
	INT32					GetPktHost(MemToken& RecvToken, DB_PO_FE_PTN_LO& dpfpl);


public:
	CManagePoFePtnLo();
    ~CManagePoFePtnLo();

};

extern CManagePoFePtnLo*	t_ManagePoFePtnLo;

#endif
