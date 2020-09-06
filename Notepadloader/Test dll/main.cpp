#include <iostream>
#include <Windows.h>

#ifdef _MSV_VER 
#define _CRT_SECURE_NO_WARNINGS
#endif
// Used to disable warning caused my freopen, since it's depracticed


using namespace std; // not recommended to use

int main(void) {

	AllocConsole(); 
	freopen("CONOUT$", "w", stdout);
	freopen("CONIN$", "r", stdin);
	FILE* Monke; 
	cout << "Hello";
	MessageBox(0, L"Test", L"Test", MB_OK);
	return 0;


}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
	switch (ul_reason_for_call) 
	{
	case DLL_PROCESS_ATTACH: 
		CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)main, NULL, NULL, NULL);
		break;
	}
	return TRUE; 
}
