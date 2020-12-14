#include<stdio.h>

int main(void){
	int price;
	int money;
	int torn;
	printf("Price = ",price);
	scanf("%d",&price);
	printf("Pay = ",money);
	scanf("%d",&money);
	torn = money - price;
	printf("Balance = %dBaht\n",torn);
	if(torn >= 500){
		printf("500 = %d\n",torn/500);
		torn = torn%500;
	}
		if(torn >= 100){
		printf("100 = %d\n",torn/100);
		torn = torn%100;
	}
		if(torn >= 50){
		printf("50 = %d\n",torn/50);
		torn = torn%50;
	}
		if(torn >= 20){
		printf("20 = %d\n",torn/20);
		torn = torn%20;
	}
		if(torn >= 10){
		printf("10 = %d\n",torn/10);
		torn = torn%10;
	}
		if(torn >= 5){
		printf("5 = %d\n",torn/5);
		torn = torn%5;
	}
	return 0;
}
