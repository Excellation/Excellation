#include "Winebar.h"
/*这是一个显示系统时间的函数，可以在此获取系统时间*/
void ShowTime()
{
	SYSTEMTIME sys;
	while (1) {
		printf("当前时刻为：\n");
		//获取系统时间 
		GetLocalTime(&sys);
		//按照年/月/日 时/分/秒.毫秒 星期几格式打印 
		printf("%4d/%02d/%02d %02d:%02d \n",
			sys.wYear, sys.wMonth, sys.wDay, sys.wHour, sys.wMinute,
			sys.wSecond, sys.wMilliseconds, sys.wDayOfWeek);
		Sleep(60000);
		//清屏命令 
		system("cls");
	}
}