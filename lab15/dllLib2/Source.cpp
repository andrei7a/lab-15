#include <Windows.h>
#include <iostream>
#include "Lib2.h"
extern "C" __declspec(dllexport) ULONGLONG getSize2()
{
	ULARGE_INTEGER free;
	GetDiskFreeSpaceEx(L"Ñ:\\", &free, NULL, NULL);
	ULONGLONG m_FileSize = free.QuadPart;
	return m_FileSize;
}




Log2* GetPointer2()
{
	return new Log2;
}

Log2::Log2()
{
}
Log2::~Log2()
{
}

ULONGLONG Log2::write2()
{
	ULARGE_INTEGER free1;
	GetDiskFreeSpaceEx(L"Your Drive: ", &free1, NULL, NULL);
	ULONGLONG m_FileSize1 = free1.QuadPart;
	return m_FileSize1;
}
