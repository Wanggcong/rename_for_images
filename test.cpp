#include <iostream>
#include <windows.h>
#include <tchar.h>
using namespace std;
//#define UNICODE
int main()
{

	cout << "helloworld1" << endl;
	HANDLE hFile = ::CreateFile(_T("CreateFileDemo.txt"), GENERIC_WRITE, 0, NULL
		, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	if (hFile == INVALID_HANDLE_VALUE)
	{
		OutputDebugString(_T("CreateFile fail!\r\n"));
	}
	return 0;
}