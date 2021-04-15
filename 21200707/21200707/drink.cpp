#include "Winebar.h"
/*定义中文版*/
void drink_menu_c()
{
	for (int i = 0; i < 32; i++)
		printf(" ");
	printf("酒水\n");
	for (int i = 0; i < 70; i++)
		printf("*");
	printf("\n（1）莫吉托 ￥50元/杯\t\t\t");
	printf("（2）雪碧威士忌 ￥479元/支\n");
	printf("（3）嘉士伯1644白啤 ￥35/支\t\t");
	printf("（4）轩尼诗 ￥658/支\n");
	printf("（5）长岛冰茶 ￥60元/杯\t\t\t");
	printf("（6）凯歌香槟 ￥680元/支\n");
	printf("（7）灰雁伏特加 ￥200元/支\t\t");
	printf("（8）人头马 ￥235元/支\n");
	printf("（9）龙舌兰 ￥98元/支\n");
	for (int i = 0; i < 70; i++)
		printf("*");
	printf("\n请输入序号(以0结束）：");
}
int drinks_c(int num) {
	//printf("已点酒水：\n");建议主函数第一次调用本函数之前，先打印这行代码，便于顾客观看
	int price = 0;
	switch (num)//输出已点的酒水，计算价格
	{
	case 1:printf("莫吉托 $50元/杯"); T_c(); price = price + 50; ; break;
	case 2:printf("雪碧威士忌 $479元/支"); T_c(); price = price + 479; break;
	case 3:printf("嘉士伯1644白啤 $35元/支"); T_c(); price = price + 35; break;
	case 4:printf("轩尼诗 $658元/支"); T_c(); price = price + 658; break;
	case 5:printf("长岛冰茶 $60元/杯"); T_c(); price = price + 60; break;
	case 6:printf("凯歌香槟 $680元/支"); T_c(); price = price + 680; break;
	case 7:printf("灰雁伏特加 $200元/支"); T_c(); price = price + 200; break;
	case 8:printf("人头马 $235元/支"); T_c(); price = price + 235; break;
	case 9:printf("龙舌兰 $98元/支"); T_c(); price = price + 98; break;
	default:
		printf("输入错误，请输入正确的数字：");
		int n;
		scanf_s("%d", &n);
		price = drinks_c(n);
	}
	return price;
}
void T_c() {          //询问客人酒水温度选择，并打印选择温度
	printf("\n您希望的温度是 1:常温 2:少冰 3:多冰?   ");
	int n;
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:printf("常温\n"); break;
	case 2:printf("少冰\n"); break;
	case 3:printf("多冰\n"); break;
	default:
		printf("错误，请重新输入：");
		T_c();
	}
}
/*英文版*/
void drink_menu_e()
{
	for (int i = 0; i < 32; i++)
		printf(" ");
	printf("Drinks\n");
	for (int i = 0; i < 70; i++)
		printf("*");
	printf("\n（1）Mojito ￥50/cup\t\t\t\t");
	printf("（2）Sprite whisky ￥479/cup\n");
	printf("（3）Carlsberg 1644 white beer ￥35/bottle\t");
	printf("（4）Hennessy ￥658/bottle\n");
	printf("（5）long island ice tea ￥60/cup\t\t");
	printf("（6）Veuve Clicquot ￥680/bottle\n");
	printf("（7）Grey goose vodka ￥200/bottle\t\t");
	printf("（8）Remy Martin XO ￥235/bottle\n");
	printf("（9）tequila ￥98/cup\n");
	for (int i = 0; i < 70; i++)
		printf("*");
	printf("\n please enter serial number (end with 0)：");
}

int drinks_e(int num) {
	//printf("已点酒水：\n");建议主函数第一次调用本函数之前，先打印这行代码，便于顾客观看
	int price = 0;
	switch (num)//输出已点的酒水，计算价格
	{
	case 1:printf("Mojito $50 / cup"); T_e(); price = price + 50; ; break;
	case 2:printf("Sprite whisky $479 / bottle"); T_e(); price = price + 479; break;
	case 3:printf("Carlsberg 1644 white beer $35 / bottle"); T_e(); price = price + 35; break;
	case 4:printf("Hennessy $658 / bottle"); T_e(); price = price + 658; break;
	case 5:printf("Long island iced tea $60 / cup"); T_e(); price = price + 60; break;
	case 6:printf("Kaige champagne $680 yuan / bottle"); T_e(); price = price + 680; break;
	case 7:printf("Grey goose vodka $200 / bottle"); T_e(); price = price + 200; break;
	case 8:printf("Remy Martin $235 / bottle"); T_e(); price = price + 235; break;
	case 9:printf("Tequila $98 / bottle"); T_e(); price = price + 98; break;
	default:
		printf("Input error, please input correct number:");
		int n;
		scanf_s("%d", &n);
		price = drinks_c(n);
	}
	return price;
}
void T_e() {          //询问客人酒水温度选择，并打印选择温度
	printf("\nWhat temperature do you want is 1: normal temperature 2: less ice 3: more ice");
	int n;
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:printf("normal temperature\n"); break;
	case 2:printf("Little ice\n"); break;
	case 3:printf("More ice\n"); break;
	default:
		printf("Error!Please enter the right number:");
		T_e();
	}
}