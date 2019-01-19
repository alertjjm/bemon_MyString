#include "stdafx.h"
#include "MyStringEx.h"
int _tmain(int argc, _TCHAR* argv[]) {
	CMyString b("World"), c;
	c = "hello" + b;
	cout << c << endl;

	return 0;
}
