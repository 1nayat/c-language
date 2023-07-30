#include<stdio.h>
int main()
{
	int c,d,temp;
	printf("enter the value of c");
	scanf("%d",&c);
	printf("enter the value of d");
	scanf("%d",&d);
	temp=c;
	c=d;
	d=temp;
	printf("value of c=%d",c);
	printf("value of d=%d",d);
	return 0;
	
}
