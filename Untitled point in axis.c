#include<stdio.h>
int main()
{
	float x,y;
	printf("Enter X and Y coordinate\n");
	scanf("%f%f",&x,&y);
	if (x==0&&y==0)
	printf("Point lies on the origin");
	else if(x>=1&&y==0)
	printf("Point lies on x-axis");
	else if(x==0&&y>=1)
	printf("Point lies on y-axis");
	
	return 0;
}
