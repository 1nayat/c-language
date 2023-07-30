// programme that takes xy coordinats of a pt and prints in which quad the pt lies
#include<stdio.h>
int main()
{
	int x,y;
	printf("enter the pt of x coordinate");
	scanf("%f",&x);
	printf("enetr the pt of y coordinate");
	scanf("%f",&y);
	if (x==0)
	{
		printf("point lies in y coordinate");
	}
	if (y==0)
	{
		printf("point lies in y coordinate");
	}
	if (x>0 && y>0)
	{
		printf("point lies in 1st quad");
	}
	else if (x>0 && y<0)
	{
	printf("point lies in 4th quad");
	}
	else if (x<0 && y>0)
	{
		printf("point lies in 2nd quad");
	}
	else 
	{
		 printf("point lies in 3rd quad");
	}
	return 0;
	
	
}
