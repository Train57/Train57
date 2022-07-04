#include <stdio.h>
#include <windows.h>
int main()
{
	int Message_Num = 5;
	FindWindow(NULL, L"苏盐曹淮联合反卷中心");

	while (Message_Num > 0)
	{
		SendMessage(FindWindow(NULL, L"苏盐曹淮联合反卷中心"), WM_PASTE, NULL, 0);
		SendMessage(FindWindow(NULL, L"苏盐曹淮联合反卷中心"), WM_KEYDOWN, VK_RETURN, 0);
		Message_Num--;
	}


	return 0;
}
