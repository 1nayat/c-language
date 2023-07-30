//5 digit number print new number adding 1 to each digit
#include<stdio.h>
int main()
{
	int num;
	printf("enter any 5 digit number:-");
	scanf("%d",&num);
	num=num+11111;
	printf("The new number will be %d",num);
	return 0;
}
