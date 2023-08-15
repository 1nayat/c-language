#include<stdio.h>
int main()
{
	int b,p,c,i;
	printf("Enter base and power :");
	scanf("%d%d",&b,&p);
	c=1;// taking third variable
	for (i=1;i<=p;i++)
	{
	c*=b;//c=c*b
    }
	printf("%d raised to power %d is %d",b,p,c);
    
	return 0;
	
}

