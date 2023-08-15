#include<stdio.h>
int main()
{
	int i,num;
	printf("Enter any number ");
	scanf("%d",&num);
	for(i=0;i<21;i++)
	{
		printf("%d*%d=%d\n",num,i,num*i);
	}
	return 0;
}
