#include "Winebar.h"
/*�������İ�*/
void drink_menu_c()
{
	for (int i = 0; i < 32; i++)
		printf(" ");
	printf("��ˮ\n");
	for (int i = 0; i < 70; i++)
		printf("*");
	printf("\n��1��Ī���� ��50Ԫ/��\t\t\t");
	printf("��2��ѩ����ʿ�� ��479Ԫ/֧\n");
	printf("��3����ʿ��1644��ơ ��35/֧\t\t");
	printf("��4������ʫ ��658/֧\n");
	printf("��5���������� ��60Ԫ/��\t\t\t");
	printf("��6���������� ��680Ԫ/֧\n");
	printf("��7��������ؼ� ��200Ԫ/֧\t\t");
	printf("��8����ͷ�� ��235Ԫ/֧\n");
	printf("��9�������� ��98Ԫ/֧\n");
	for (int i = 0; i < 70; i++)
		printf("*");
	printf("\n���������(��0��������");
}
int drinks_c(int num) {
	//printf("�ѵ��ˮ��\n");������������һ�ε��ñ�����֮ǰ���ȴ�ӡ���д��룬���ڹ˿͹ۿ�
	int price = 0;
	switch (num)//����ѵ�ľ�ˮ������۸�
	{
	case 1:printf("Ī���� $50Ԫ/��"); T_c(); price = price + 50; ; break;
	case 2:printf("ѩ����ʿ�� $479Ԫ/֧"); T_c(); price = price + 479; break;
	case 3:printf("��ʿ��1644��ơ $35Ԫ/֧"); T_c(); price = price + 35; break;
	case 4:printf("����ʫ $658Ԫ/֧"); T_c(); price = price + 658; break;
	case 5:printf("�������� $60Ԫ/��"); T_c(); price = price + 60; break;
	case 6:printf("�������� $680Ԫ/֧"); T_c(); price = price + 680; break;
	case 7:printf("������ؼ� $200Ԫ/֧"); T_c(); price = price + 200; break;
	case 8:printf("��ͷ�� $235Ԫ/֧"); T_c(); price = price + 235; break;
	case 9:printf("������ $98Ԫ/֧"); T_c(); price = price + 98; break;
	default:
		printf("���������������ȷ�����֣�");
		int n;
		scanf_s("%d", &n);
		price = drinks_c(n);
	}
	return price;
}
void T_c() {          //ѯ�ʿ��˾�ˮ�¶�ѡ�񣬲���ӡѡ���¶�
	printf("\n��ϣ�����¶��� 1:���� 2:�ٱ� 3:���?   ");
	int n;
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:printf("����\n"); break;
	case 2:printf("�ٱ�\n"); break;
	case 3:printf("���\n"); break;
	default:
		printf("�������������룺");
		T_c();
	}
}
/*Ӣ�İ�*/
void drink_menu_e()
{
	for (int i = 0; i < 32; i++)
		printf(" ");
	printf("Drinks\n");
	for (int i = 0; i < 70; i++)
		printf("*");
	printf("\n��1��Mojito ��50/cup\t\t\t\t");
	printf("��2��Sprite whisky ��479/cup\n");
	printf("��3��Carlsberg 1644 white beer ��35/bottle\t");
	printf("��4��Hennessy ��658/bottle\n");
	printf("��5��long island ice tea ��60/cup\t\t");
	printf("��6��Veuve Clicquot ��680/bottle\n");
	printf("��7��Grey goose vodka ��200/bottle\t\t");
	printf("��8��Remy Martin XO ��235/bottle\n");
	printf("��9��tequila ��98/cup\n");
	for (int i = 0; i < 70; i++)
		printf("*");
	printf("\n please enter serial number (end with 0)��");
}

int drinks_e(int num) {
	//printf("�ѵ��ˮ��\n");������������һ�ε��ñ�����֮ǰ���ȴ�ӡ���д��룬���ڹ˿͹ۿ�
	int price = 0;
	switch (num)//����ѵ�ľ�ˮ������۸�
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
void T_e() {          //ѯ�ʿ��˾�ˮ�¶�ѡ�񣬲���ӡѡ���¶�
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