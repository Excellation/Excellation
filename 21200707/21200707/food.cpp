#include "Winebar.h"
/*���İ�*/
void food_menu_c()
{
	for (int i = 0; i < 32; i++)
		printf(" ");
	printf("Сʳ\n");
	for (int i = 0; i < 70; i++)
		printf("*");
	printf("\n��1����������֥ʿ 38Ԫ/��\t\t\t");
	printf("��2����ǡ���������ɫ�����28Ԫ/��\n");
	printf("��3��Ѭ������ 58Ԫ / ��\t\t");
	printf("��4������  28Ԫ / ��\n");
	printf("��5���ɿ���Ľ˹���� 18Ԫ / ��\t\t\t");
	printf("��6����˺��ţ��� 48Ԫ / ��\n");
	printf("��7��ըʳƴ�� 68Ԫ / ��\t\t");
	printf("��8��ˮ��ƴ�� 48Ԫ / ��\n");
	printf("��9����������ʽ���ҽ�ɳ��	 48Ԫ / ��\n");
	for (int i = 0; i < 70; i++)
		printf("*");
	printf("\n���������(��0��������");
}
int food_c(int xuhao) {
	int PRICE = 0;
	switch (xuhao) {
	case 1:printf("��������֥ʿ 38Ԫ/��"); PRICE = PRICE + 38; break;
	case 2:printf("��ǡ���������ɫ�����28Ԫ/��"); PRICE = PRICE + 28; break;
	case 3:printf("Ѭ������ 58Ԫ / ��"); PRICE = PRICE + 58; break;
	case 4:printf("����  28Ԫ / ��"); PRICE = PRICE + 28; break;
	case 5:printf("�ɿ���Ľ˹���� 18Ԫ / ��"); PRICE = PRICE + 18; break;
	case 6:printf("��˺��ţ��� 48Ԫ / ��"); PRICE = PRICE + 48; break;
	case 7:printf("ըʳƴ�� 68Ԫ / ��"); PRICE = PRICE + 68; break;
	case 8:printf("ˮ��ƴ�� 48Ԫ / ��"); PRICE = PRICE + 48; break;
	case 9:printf("��������ʽ���ҽ�ɳ��	 48Ԫ / ��"); PRICE = PRICE + 48; break;
	default:printf("���������������ȷ�����֣�");
		int n;
		scanf_s("%d", &n);
		PRICE = food_c(n);
	}
	return PRICE;
}
/*Ӣ�İ�*/
void food_menu_e()
{
	for (int i = 0; i < 32; i++)
		printf(" ");
	printf("Сʳ\n");
	for (int i = 0; i < 70; i++)
		printf("*");
	printf("\n��1��mozzarella 38 / share\t\t\t");
	printf("��2��focaccia 28 / share\n");
	printf("��3��saumon fum�� 58 / share\t\t\t");
	printf("��4��macaron  28 / share\n");
	printf("��5��Chocolate Mousse Cake 18 / share\t\t");
	printf("��6��Hand shredded yak jerky 48 / share\n");
	printf("��7��Fried food platter 68 / share\t\t");
	printf("��8��Fruit platter 48 / share\n");
	printf("��9��Celery with French cheese salad 48 / share\n");
	for (int i = 0; i < 70; i++)
		printf("*");
	printf("\n please enter serial number (end with 0)��");
}
int food_e(int xuhao) {
	int PRICE = 0;
	switch (xuhao) {
	case 1:printf("mozzarella 38 / share"); PRICE = PRICE + 38; break;
	case 2:printf("focaccia 28 / share"); PRICE = PRICE + 28; break;
	case 3:printf("saumon fum�� 58 / share"); PRICE = PRICE + 58; break;
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