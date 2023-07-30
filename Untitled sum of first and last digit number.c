// 5 digit number progarmme to obtain sum of first and last digit of number
#include<stdio.h>
int main()
{
	int num,a,b,c,d,e,sum_digit;
	printf("Enter any 5 digit number:-");
	scanf("%d",&num);
	e=num%10;
	a=(num/10000);
	sum_digit=a+e;
	printf("the sum of first and last digit number %d",sum_digit);
	return 0;
	
}
