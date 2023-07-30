// coordinates (x,y)into (r,Q)
// atan is inverse of tan
#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,r,Q;
	printf("Enter x coordinate:-");
	scanf("%f",&x);
	printf("Enter y coordinate:-");
	scanf("%f",&y);
	r=sqrt(x*x+y*y);
	Q=atan(y/x);
	printf("coordinates in polar form %2f(cos(%2f)+i.sin(%2f)",r,Q,Q);
	return 0;
}
