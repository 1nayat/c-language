#include<stdio.h>
#include<math.h>
int main()
{
	float length,breadth,radius;
	printf("enter lenght of rectangle");
	scanf("%f",&length);
	printf("enter breadth of rectangle");
	scanf("%f",&breadth);
	float area=length*breadth;
	printf("area of rectangle=%2f",area);
	float perimeter=length+breadth;
	printf("perimeter of rectangle=%2f",perimeter);
	//calc of circle
	printf("enter radius of circle");
	scanf("%f",&radius);
    float circumfrence = 2*3.14*radius;
	printf("circumfrence of circle=%f",circumfrence);

	return 0;
}
