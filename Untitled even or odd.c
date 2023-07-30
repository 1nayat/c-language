// to check wether a number is even or odd //
#include<stdio.h>
int main()
{
	int number;
	printf("enter any number:");
	scanf("%d",&number);
//	rem=number/2;
	if(number%2==0)
	{
	printf("the given number is even\n");
    }
	else
	{
    printf("the given number is odd\n");
	}
	return 0;
	
}
