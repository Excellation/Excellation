#include "Winebar.h"
/*���İ�*/
double bill_c(double x) {
	int z;
	double m = 0;
	if (x > 100) {
		printf("��ѡ���Ż���Ŀ��\n");
		printf("��1������һ������\t\t\t��2�������");
		printf("\n�����1��2��\n");
		scanf_s("%d", &z);
		if (z == 1) {
			printf("����һ�����ȣ�\n");
			m = x;
		}
		else if (z == 2)
			m = x * (float)0.8;
	}
	else m = x;
	return m;
}
/*Ӣ�İ�*/
double bill_e(double x) {
	int z;
	double m = 0;
	if (x > 100) {
		printf("Please select a special item:\n");
		printf("��1��A free cup of coffee\t\t\t��2��20%% Off");
		printf("\nPlease type 1 or 2:\n");
		scanf_s("%d", &z);
		if (z == 1) {
			printf("A cup of coffee for you!\n");
			m = x;
		}
		else if (z == 2)
			m = x * (float)0.8;
	}
	else m = x;
	return m;
}
