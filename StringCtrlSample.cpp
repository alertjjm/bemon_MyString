#include "stdafx.h"
#include "MyString.h"
int _tmain(int argc, _TCHAR* argv[]) {
	CMyString strLeft("Test"), strRight("String");
	if (strLeft == strRight)
		cout << "same" << endl;
	else
		cout << "different" << endl;
	strLeft = CMyString("String");
	if (strLeft != strRight)
		cout << "different" << endl;

	else
		cout << "same" << endl;
	return 0;
}
