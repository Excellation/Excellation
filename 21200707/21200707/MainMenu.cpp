#include "Winebar.h"
/*中文版*/
int Chinese(int i)
{
	struct link
	{
		int price;
		struct link* next;
	};
	char choice = 'Y';
	double total = 0;
	printf("\n您好，欢迎来到20cm+酒吧，以下是为您提供的服务\n");
	while (choice == 'Y')
	{
		if (i)
			food_menu_c();
		else
			drink_menu_c();
		link* head = new link;
		head->next = nullptr;
		link* p = head;
		scanf_s("%d", &head->price);
		while (p->price != 0)
		{
			p->next = new link;
			p->next->next = nullptr;
			p = p->next;
			scanf_s("%d", &p->price);
		}
		p = head;
		if (i)
			while (p->price)
			{
				if (p->price > 9 || p->price < 0)
					printf("\a没有（%d）选项\n", p->price);
				else
					total += food_c(p->price);
				p = p->next;
			}
		else
			while (p->price)
			{
				if (p->price > 9 || p->price < 0)
					printf("\a没有（%d）选项\n", p->price);
				else
					total += drinks_c(p->price);
				p = p->next;
			}
		p = head;
		while (p)
		{
			head = head->next;
			delete p;
			p = head;
		}
		printf("\n您是否还需要继续点单（Y/N）：");
		choice = getchar();
		scanf_s("%c", &choice, 2);
		while (choice != 'Y' && choice != 'N')
		{
			printf("请输入Y或者N，而不是其它字母：\a");
			scanf_s("%c", &choice, 2);
			choice = getchar();
		}
	}
	return total;
}
/*英文版*/
int English(int i)
{
	struct link
	{
		int price;
		struct link* next;
	};
	char choice = 'Y';
	double total = 0;
	printf("\nHello, welcome to 20cm + bar, the following is the service for you\n");
	while (choice == 'Y')
	{

		if (i)
			food_menu_e();
		else
			drink_menu_e();
		link* head = new link;
		head->next = nullptr;
		link* p = head;
		scanf_s("%d", &head->price);
		while (p->price != 0)
		{
			p->next = new link;
			p->next->next = nullptr;
			p = p->next;
			scanf_s("%d", &p->price);
		}
		p = head;
		if (i)
			while (p->price)
			{
				if (p->price > 9 || p->price < 0)
					printf("\aThere is no（%d）choice\n", p->price);
				else
					total += food_e(p->price);
				p = p->next;
			}
		else
			while (p->price)
			{
				if (p->price > 9 || p->price < 0)
					printf("\aThere is no（%d）choice\n", p->price);
				else
					total += drinks_e(p->price);
				p = p->next;
			}
		p = head;
		while (p)
		{
			head = head->next;
			delete p;
			p = head;
		}
		printf("\nDo you need to continue to order (Y / N):");
		choice = getchar();
		scanf_s("%c", &choice, 2);
		while (choice != 'Y' && choice != 'N')
		{
			printf("Please enter Y or N instead of other letters:\a");
			scanf_s("%c", &choice, 2);
			choice = getchar();
		}
	}
	return total;
}
