#include "stdafx.h"
#include "MyStringEx.h"


CMyStringEx::CMyStringEx()
{
}

int CMyStringEx::Find(const char* pszParam) {
	if (pszParam == NULL || this->GetString() == NULL)
		return -1;
	const char* ptr = this->GetString();
	const char* ptr2 = strstr(ptr, pszParam);
	int a = strlen(ptr2);
	int b = strlen(ptr);
	return b-a;
}

CMyStringEx::~CMyStringEx()
{
}
