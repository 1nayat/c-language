#include<stdio.h>
float area(float radius)
{
	float area=3.14*radius*radius;
	return area;
}
float circum(float radius)
{
	float circum=2*3.14*radius;
	return circum;
}
int main()
{
	float radius;
	printf("Enter the radius of circle:");
	scanf("%f",& radius);
	float totalarea=area(radius);
	float totalcircum=circum(radius);
	printf("The area and circumfrence of the circle is %f\n  %f",totalarea,totalcircum);
	return 0;
}
