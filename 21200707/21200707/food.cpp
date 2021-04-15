#include "Winebar.h"
/*中文版*/
void food_menu_c()
{
	for (int i = 0; i < 32; i++)
		printf(" ");
	printf("小食\n");
	for (int i = 0; i < 70; i++)
		printf("*");
	printf("\n（1）马苏里拉芝士 38元/份\t\t\t");
	printf("（2）佛卡恰（意大利特色火饼）28元/份\n");
	printf("（3）熏三文鱼 58元 / 份\t\t");
	printf("（4）马卡龙  28元 / 份\n");
	printf("（5）巧克力慕斯蛋糕 18元 / 份\t\t\t");
	printf("（6）手撕牦牛肉干 48元 / 份\n");
	printf("（7）炸食拼盘 68元 / 份\t\t");
	printf("（8）水果拼盘 48元 / 份\n");
	printf("（9）西芹佐法式奶酪酱沙拉	 48元 / 份\n");
	for (int i = 0; i < 70; i++)
		printf("*");
	printf("\n请输入序号(以0结束）：");
}
int food_c(int xuhao) {
	int PRICE = 0;
	switch (xuhao) {
	case 1:printf("马苏里拉芝士 38元/份"); PRICE = PRICE + 38; break;
	case 2:printf("佛卡恰（意大利特色火饼）28元/份"); PRICE = PRICE + 28; break;
	case 3:printf("熏三文鱼 58元 / 份"); PRICE = PRICE + 58; break;
	case 4:printf("马卡龙  28元 / 份"); PRICE = PRICE + 28; break;
	case 5:printf("巧克力慕斯蛋糕 18元 / 份"); PRICE = PRICE + 18; break;
	case 6:printf("手撕牦牛肉干 48元 / 份"); PRICE = PRICE + 48; break;
	case 7:printf("炸食拼盘 68元 / 份"); PRICE = PRICE + 68; break;
	case 8:printf("水果拼盘 48元 / 份"); PRICE = PRICE + 48; break;
	case 9:printf("西芹佐法式奶酪酱沙拉	 48元 / 份"); PRICE = PRICE + 48; break;
	default:printf("输入错误，请输入正确的数字：");
		int n;
		scanf_s("%d", &n);
		PRICE = food_c(n);
	}
	return PRICE;
}
/*英文版*/
void food_menu_e()
{
	for (int i = 0; i < 32; i++)
		printf(" ");
	printf("小食\n");
	for (int i = 0; i < 70; i++)
		printf("*");
	printf("\n（1）mozzarella 38 / share\t\t\t");
	printf("（2）focaccia 28 / share\n");
	printf("（3）saumon fumé 58 / share\t\t\t");
	printf("（4）macaron  28 / share\n");
	printf("（5）Chocolate Mousse Cake 18 / share\t\t");
	printf("（6）Hand shredded yak jerky 48 / share\n");
	printf("（7）Fried food platter 68 / share\t\t");
	printf("（8）Fruit platter 48 / share\n");
	printf("（9）Celery with French cheese salad 48 / share\n");
	for (int i = 0; i < 70; i++)
		printf("*");
	printf("\n please enter serial number (end with 0)：");
}
int food_e(int xuhao) {
	int PRICE = 0;
	switch (xuhao) {
	case 1:printf("mozzarella 38 / share"); PRICE = PRICE + 38; break;
	case 2:printf("focaccia 28 / share"); PRICE = PRICE + 28; break;
	case 3:printf("saumon fumé 58 / share"); PRICE = PRICE + 58; break;
	case 4:printf("macaron  28 / share"); PRICE = PRICE + 28; break;
	case 5:printf("Chocolate Mousse Cake 18 / share"); PRICE = PRICE + 18; break;
	case 6:printf("Hand shredded yak jerky 48 / share"); PRICE = PRICE + 48; break;
	case 7:printf("Fried food platter 68 / share"); PRICE = PRICE + 68; break;
	case 8:printf("Fruit platter 48 / share"); PRICE = PRICE + 48; break;
	case 9:printf("Celery with French cheese salad 48 / share"); PRICE = PRICE + 48; break;
	default:printf("Input error, please enter the correct number:");
		int n;
		scanf_s("%d", &n);
		PRICE = food_e(n);
	}
	return PRICE;
}