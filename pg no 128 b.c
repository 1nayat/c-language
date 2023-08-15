#include<stdio.h>
#include<math.h>
int main()
{
	int i,num,fact;
	printf("Enter any number");
	scanf("%d",&num);
	fact=num;
	for (i=1;i<num;i=i+1)
	fact*=i;
	printf("%d The factorial of number is  %d",fact,num);
	getch();
	return 0;
	
}
