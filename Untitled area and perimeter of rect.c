#include<stdio.h>
int main()
{
	int lt,bt,area,perimeter;
	printf("Enter length and breadth of recatngle");
	scanf("%d%d",&lt,&bt);
	area=lt*bt;
	perimeter=lt+bt;
	if(area>perimeter)
	printf("Area is greater than perimeter");
	else
	printf("Perimeter is greater than area");
	return 0;
}
