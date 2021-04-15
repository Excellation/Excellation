#include "Winebar.h"
/*ÖÐÎÄ°æ*/
double bill_c(double x) {
	int z;
	double m = 0;
	if (x > 100) {
		printf("ÇëÑ¡ÔñÓÅ»ÝÏîÄ¿£º\n");
		printf("£¨1£©ÔùËÍÒ»±­¿§·È\t\t\t£¨2£©´ò°ËÕÛ");
		printf("\nÇë¼üÈë1»ò2£º\n");
		scanf_s("%d", &z);
		if (z == 1) {
			printf("ËÍÄúÒ»±­¿§·È£¡\n");
			m = x;
		}
		else if (z == 2)
			m = x * (float)0.8;
	}
	else m = x;
	return m;
}
/*Ó¢ÎÄ°æ*/
double bill_e(double x) {
	int z;
	double m = 0;
	if (x > 100) {
		printf("Please select a special item:\n");
		printf("£¨1£©A free cup of coffee\t\t\t£¨2£©20%% Off");
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
