

#include <iostream>
#include <stdexcept>
#include <string>
#include <iostream>
#include <windows.h> 
#include "bytes.hpp"
#include "stdafx.h"






int main()
{




	

		system("start notepad.exe");
		SetConsoleTitleA("Devin is god");
		Sleep(1500);

		DWORD processID = 0;
		HANDLE handle = 0;
		HWND window = FindWindow(0, (L"Untitled - Notepad"));
		if (!window)
		{
			//	printf("Failed to find window!\n");
			getchar();
			exit(0);
		}

		//printf("Found window!\n");

		GetWindowThreadProcessId(window, &processID);
		if (!processID)
		{
			//printf("Failed to get PID!\n");
			getchar();
			exit(-1);
		}

		//printf("Process ID : %d\n", processID);

		handle = OpenProcess(PROCESS_ALL_ACCESS, false, processID);
		if (!handle || handle == INVALID_HANDLE_VALUE)
		{
			//printf("Failed to get handle to our process!\n");
			getchar();
			exit(-1);
		}

		//printf("Got a handle to the process at : 0x%X\n", handle);

		if (!ManualMap(handle, rawData)) 
		

		CloseHandle(handle); 
		return 0;
		
			



	
}