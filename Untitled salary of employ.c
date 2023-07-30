#include<stdio.h>
#include<math.h>
int main()

{
	float basic,da,hra,gross;
	printf("enter basic salary of employ");
	scanf("%f",&basic);
	da=(0.1*basic);
	hra=(0.2)*basic;
	gross=basic+da+hra;
	printf("gross=%f",gross);
	return 0;
}  
