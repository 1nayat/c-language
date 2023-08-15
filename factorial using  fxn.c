#include<stdio.h>
int factorial(int num)
{
	int i,fact=1;
	for (i=1;i<=num;i++)
	{
	fact=fact*i;
    }
	return fact;
}
int main()
{
int num;
printf("Enter any number:");
scanf("%d",&num);
int result=factorial(num);
printf("The factorial of %d is  %d",num,result);
return 0;
}
