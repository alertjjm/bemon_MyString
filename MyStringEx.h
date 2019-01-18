#pragma once
#include "MyString.h"
class CMyStringEx :
	public CMyString
{
public:
	int Find(const char* pszParam);
	CMyStringEx();
	~CMyStringEx();
	int SetString(const char* pszParam);
};

