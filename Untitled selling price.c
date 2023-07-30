#include<stdio.h>
int main()
{
	float selling_price,profit_earned,cost_price;
	printf("enter the selling price of 15 items");
	scanf("%f",&selling_price);
	printf("enter the profit erned on 15 items");
	scanf("%f",&profit_earned);
	cost_price=selling_price-profit_earned/15;
	printf("cost price of each item=%f",cost_price);
	return 0;
}
