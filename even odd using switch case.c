#include<stdio.h>
int main()
{
	int num,x;
	printf("Enter the integer you want to check:");
	scanf("%d",&num);
	switch(num%2)
	{
		case (0):
		printf("The number is even",num);
		break;
		case (1):
			printf("The number is odd",num);
		
	}
	return 0;
}
