#include "Winebar.h"
/*����һ����ʾϵͳʱ��ĺ����������ڴ˻�ȡϵͳʱ��*/
void ShowTime()
{
	SYSTEMTIME sys;
	while (1) {
		printf("��ǰʱ��Ϊ��\n");
		//��ȡϵͳʱ�� 
		GetLocalTime(&sys);
		//������/��/�� ʱ/��/��.���� ���ڼ���ʽ��ӡ 
		printf("%4d/%02d/%02d %02d:%02d \n",
			sys.wYear, sys.wMonth, sys.wDay, sys.wHour, sys.wMinute,
			sys.wSecond, sys.wMilliseconds, sys.wDayOfWeek);
		Sleep(60000);
		//�������� 
		system("cls");
	}
}