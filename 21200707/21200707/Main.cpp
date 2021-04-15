#include "Winebar.h"
int main()
{
	double total = 0;
	int language;
	int i = 0;
	/*选择语言*/
	printf("选择语言\n");
	printf("（1）中文\t\t\t（2）英语\n");
	scanf_s("%d", &language);
	if (language == 1)
	{
		total += Chinese(i);
		total += Chinese(i + 1);
		total = bill_c(total);
		printf("您好！您的总金额为：￥%lf，请付款。", total);
	}
	else if (language == 2)
	{
		total += English(i);
		total += English(i + 1);
		total = bill_c(total);
		printf("Hello! Your total amount is: ￥%lf, please pay.", total);
	}
	else
		printf("Error!\a");
	/*计时退出*/
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