//latitude and longitude values given and outputs the distance between them in nautical miles
#include<stdio.h>
#include<math.h>
int main ()
{
	float l1,l2,g1,g2,D;
	printf("Enter the two longitudnal value in degrees:-");
	scanf("%f%f",&l1,&l2);
	printf("Enter the two latitudnal value in degrees:-");
	scanf("%f%f",&g1,&g2);
	D=3963*acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1));
	printf("The distance in nautical miles:-%2f");
	return 0;
	
}
