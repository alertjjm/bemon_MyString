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


int CMyStringEx::SetString(const char* pszParam)
{
	int nResult;
	if (pszParam == NULL)
		return -1;
	if (strcmp(pszParam, "¸Û¸ÛÀÌ¾Æµé") == 0)
		nResult = CMyString::SetString("ÂøÇÑ »ç¶÷");
	else
		nResult = CMyString::SetString(pszParam);
	return nResult;
}
