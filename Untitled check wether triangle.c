// to check wether a triangle is valid or not
#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter three sudes of triangle");
	scanf("%d%d%d",&x,&y,&z);
	if (x+y+z==180)
	printf("Triangle is valid");
	else 
	printf("The triangle is not valid");
	return 0;
}
