#include <Windows.h>
#include <iostream>
#include "Lib.h"
extern "C" __declspec(dllexport) ULONGLONG getSize()
{
	ULARGE_INTEGER free;
	GetDiskFreeSpaceEx(L"Your Drive: ", &free, NULL, NULL);
	ULONGLONG m_FileSize = free.QuadPart;	
	return m_FileSize;
}




Log* GetPointer()
{
	return new Log;
}

Log::Log()
{
}
Log::~Log()
{
}

ULONGLONG Log::write()
{
	ULARGE_INTEGER free1;
	GetDiskFreeSpaceEx(L"Your Drive: ", &free1, NULL, NULL);
	ULONGLONG m_FileSize1 = free1.QuadPart;
	return m_FileSize1;
}
