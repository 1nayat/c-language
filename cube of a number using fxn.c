#include<stdio.h>
float cube(float number)
{
return number*number*number;
}
int main()
{
float num;
	printf("Enter a number:");
	scanf("%f",&num);
	float result=cube(num);
	printf("The cube of %f is %f\n",num,result);
	return 0;
}
