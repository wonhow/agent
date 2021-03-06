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


#include "stdafx.h"
#include "com_struct.h"
#include "ComExternMethod.h"


//------------------------------------------------------------------------------
INT32			HexToMap(String strHexValue, TMapID& tValueMap, INT32 nMaxLen)
{
	INT32 nIdx = 0;
	CTokenString Token(strHexValue.c_str(), strHexValue.length());
	while(Token.IsNextToken())
	{
		String strBlock = Token.NextToken_Len(8);
		UINT32 nValue = HexToInt(strBlock.c_str());
		
		tValueMap[nIdx] = nValue;
		nIdx += 1;
		if(nMaxLen)		nMaxLen -= 1;
	}

	while(nIdx < nMaxLen)
	{
		tValueMap[nIdx] = 0;
		nIdx += 1;
	}
	return 0;
}
//------------------------------------------------------------------------------

INT32			MapToHex(TMapID& tValueMap, String& strHexValue, INT32 nMaxLen)
{
	INT32 nIdx = 0;
	while(nIdx < nMaxLen)
	{
		UINT32 nValue = 0;
		TMapIDItor find = tValueMap.find(nIdx);
		if(find != tValueMap.end())
		{
			nValue = find->second;
		}
		strHexValue += IntToHex(nValue);
		nIdx += 1;
	}
	return 0;
}
//------------------------------------------------------------------------------

INT32			HexToMap_64(String strHexValue, TMapID64& tValueMap, INT32 nMaxLen)
{
	INT32 nIdx = 0;
	CTokenString Token(strHexValue.c_str(), strHexValue.length());
	while(Token.IsNextToken())
	{
		String strBlock = Token.NextToken_Len(16);
		UINT64 nValue = HexToInt64(strBlock.c_str());

		tValueMap[nIdx] = nValue;
		nIdx += 1;
		if(nMaxLen)		nMaxLen -= 1;
	}

	while(nIdx < nMaxLen)
	{
		tValueMap[nIdx] = 0;
		nIdx += 1;
	}
	return 0;
}
//------------------------------------------------------------------------------

INT32			MapToHex_64(TMapID64& tValueMap, String& strHexValue, INT32 nMaxLen)
{
	INT32 nIdx = 0;
	while(nIdx < nMaxLen)
	{
		UINT64 nValue = 0;
		TMapID64Itor find = tValueMap.find(nIdx);
		if(find != tValueMap.end())
		{
			nValue = find->second;
		}
		strHexValue += Int64ToHex(nValue);
		nIdx += 1;
	}
	return 0;
}
//------------------------------------------------------------------------------

String			MapStrToStr(TMapStr& tStrMap, CHAR chCellTok, CHAR chBlockTok)
{
	String strValue;
	TMapStrItor begin, end;
	begin = tStrMap.begin();	end = tStrMap.end();
	for(begin; begin != end; begin++)
	{
		String strCell = SPrintf("%s%c%s%c", begin->first.c_str(), chCellTok, begin->second.c_str(), chBlockTok);
		strValue += strCell;
	}
	return strValue;
}
//------------------------------------------------------------------------------

INT32			StrToMapStr(String strMapList, TMapStr& tStrMap, CHAR chCellTok, CHAR chBlockTok)
{
	CTokenString Token(strMapList.c_str(), strMapList.length(), chBlockTok);
	while(Token.IsNextToken())
	{
		String strCell = Token.NextToken();

		CTokenString TokenCel(strCell.c_str(), strCell.length(), chCellTok);

		String strKey = TokenCel.NextToken();
		String strValue = TokenCel.RemainValue();

		tStrMap[strKey] = strValue;
	}
	return tStrMap.size();
}
//------------------------------------------------------------------------------

String			MapID_StrToStr(TMapIDStr& tIDMapStr, CHAR chCellTok, CHAR chBlockTok)
{
	String strValue;
	TMapIDStrItor begin, end;
	begin = tIDMapStr.begin();	end = tIDMapStr.end();
	for(begin; begin != end; begin++)
	{
		String strCell = SPrintf("%u%c%s%c", begin->first, chCellTok, begin->second.c_str(), chBlockTok);
		strValue += strCell;
	}
	return strValue;
}
//------------------------------------------------------------------------------

INT32			StrToMapID_Str(String strMapList, TMapIDStr& tIDMapStr, CHAR chCellTok, CHAR chBlockTok)
{
	CTokenString Token(strMapList.c_str(), strMapList.length(), chBlockTok);
	while(Token.IsNextToken())
	{
		String strCell = Token.NextToken();

		CTokenString TokenCel(strCell.c_str(), strCell.length(), chCellTok);

		UINT32 nKey = TokenCel.NextToken_UInt();
		String strValue = TokenCel.RemainValue();

		tIDMapStr[nKey] = strValue;
	}
	return tIDMapStr.size();
}
//------------------------------------------------------------------------------

INT32			MaptoMapStr_64(TMapID64& tIDMap, TMapStr& tStrMap)
{
	TMapID64Itor begin, end;
	begin = tIDMap.begin();		end = tIDMap.end();
	for(; begin != end; begin++)
	{
		tStrMap[UInt64ToStr(begin->first)] = UInt64ToStr(begin->second);
	}

	return tStrMap.size();
}
//------------------------------------------------------------------------------

INT32			MapStrToMap_64(TMapStr& tStrMap, TMapID64& tIDMap)
{
	TMapStrItor begin, end;
	begin = tStrMap.begin();		end = tStrMap.end();
	for(; begin != end; begin++)
	{
		tIDMap[StrToUInt64(begin->first.c_str())] = StrToUInt64(begin->second.c_str());
	}

	return tIDMap.size();
}
//------------------------------------------------------------------------------

INT32			RemoveSdeltemp()
{
	return 0;
}
//------------------------------------------------------------------------------
INT32			CheckDumpFile(String &strPath, INT32 nRestDumpCount)
{
	return 0;
}
//------------------------------------------------------------------------------

INT32			RemoveDumpFiles()
{
	return 0;
}
//------------------------------------------------------------------------------

INT32			RemoveInvenFiles()
{
	return 0;
}
//------------------------------------------------------------------------------

void			WriteLogA(char* fmt,...)
{
}

//------------------------------------------------------------------------------

void			DeletePrefixFiles(String strPath, LPCTSTR lpszPrefixed)
{
}
//------------------------------------------------------------------------------