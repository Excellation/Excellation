#include "Winebar.h"
int main()
{
	double total = 0;
	int language;
	int i = 0;
	/*ѡ������*/
	printf("ѡ������\n");
	printf("��1������\t\t\t��2��Ӣ��\n");
	scanf_s("%d", &language);
	if (language == 1)
	{
		total += Chinese(i);
		total += Chinese(i + 1);
		total = bill_c(total);
		printf("���ã������ܽ��Ϊ����%lf���븶�", total);
	}
	else if (language == 2)
	{
		total += English(i);
		total += English(i + 1);
		total = bill_c(total);
		printf("Hello! Your total amount is: ��%lf, please pay.", total);
	}
	else
		printf("Error!\a");
	/*��ʱ�˳�*/
	int time = 10;
	clock_t start = clock();
	while (clock() - start < 10 * CLOCKS_PER_SEC)
	{
		while (clock() - start < (10 - time) * CLOCKS_PER_SEC);
		if (time <= 9)
			printf("\b\b0%d", time);
		else
			printf("%d", time);
		time--;
	}
	return 0;
}