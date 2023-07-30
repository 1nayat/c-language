// to check sum of 6 digit number
#include<stdio.h>
int main ()
{
	int num,a,b,c,d,e,f,digit_sum;
	printf("enter any 6 digit number:-");
	scanf("%d",&num);
	f=num%10;
	e=(num/10)%10;
	d=(num/100)%10;
	c=(num/1000)%10;
	b=(num/10000)%10;
	a=(num/100000);
	digit_sum=a+b+c+d+e+f;
	printf("the sum of 6 digit number=%d",digit_sum);
	return 0;
}
