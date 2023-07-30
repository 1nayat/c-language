// prpgramme to reverse the number 
#include<stdio.h>
int main()
{
	int num,a,b,c,d,e,reversed_number;
	printf("Enter any 5 digit number:-");
	scanf("%d",&num);
	e=num%10;
	d=(num/10)%10;
	c=(num/100)%10;
	b=(num/1000)%10;
	a=(num/10000);
	reversed_number=e*10000+d*1000+c*100+b*10+a;
	printf("The reversed number %d",reversed_number);
	return 0;
}
