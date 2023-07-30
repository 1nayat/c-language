#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,rad,ar;
	printf("Enter the coordinates of center of circle\n");
	scanf("%d%d",&x,&y);
	printf("Enter the radius of circle");
	scanf("%d",&rad);
	ar=sqrt(pow(x,2)+pow(y,2));
	if(ar<rad)
	printf("Point lies inside the circle");
	else if(ar==rad)
	printf("point lies on the circle");
	else 
	printf("Point lies outside the circle");
	return 0;
	
}
