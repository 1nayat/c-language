// programme to calc area of triangle using three sides of triangle
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,s,area;
	printf("Enter three sides of a triangle:-");
	scanf("%f%f%f",&a,&b,&c);
	s=(a=+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("The area of triangle%f",area);
	return 0;
}
