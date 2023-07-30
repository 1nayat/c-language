#include<stdio.h>
int main()
{
	float length,breadth;
	printf("enter length of rectangle,enter breadth of rectangle");
	scanf("%f %f",&length,breadth);
	float area=length*breadth;
	printf("area=%2f\n",area);
	return 0;
}
