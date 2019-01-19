#pragma once
#include "MyString.h"
class CMyStringEx :
	public CMyString
{
public:
	using CMyString::CMyString;
	int Find(const char* pszParam);
	CMyStringEx();
	~CMyStringEx();
	int SetString(const char* pszParam);
};

