#include<stdio.h>
int main()
{
	int num;
	printf("Enter any number");
	scanf("%d",&num);
	if (num>0)
	printf("The absolute value of number is %d",num);
	if (num<0)
	printf("The absolute value of number is %d",-num);
	return 0;
}
