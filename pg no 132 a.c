#include<stdio.h>
int main()
{
	int i,j,last=300,flag=0;
	printf("prime numbers are\n");
	for(i=1;i<=last;i++)
	{
	flag=0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
			flag=1;
			break;
	        }
		}
		if(flag==0)
		{
			printf("%d\n",i);
			
		}
	}
	return 0;
	
}
