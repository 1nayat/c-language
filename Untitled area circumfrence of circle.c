#include<stdio.h>
int main()
{
	float radius,circumfrence,area;
	printf("enter radius of circle");
	scanf("%f",&radius);
	circumfrence=3.14*2*radius;
	printf("circumfrence=%f",circumfrence);
	area=3.14*radius*radius;
	printf("area=%f",area);
	return 0;
}
