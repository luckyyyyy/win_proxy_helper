#include <Windows.h>
#include <WinInet.h>
#include <stdio.h>

#pragma comment(lib, "Wininet.lib")

int main(int argc)
{
	InternetSetOption(0, INTERNET_OPTION_SETTINGS_CHANGED, NULL, 0);
	InternetSetOption(0, INTERNET_OPTION_REFRESH, NULL, 0);
	printf("internet set option done\n");
	return 0;
}
