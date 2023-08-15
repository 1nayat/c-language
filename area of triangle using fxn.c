#include<stdio.h>
int area(int base,int height)
{
	int area =(base*height)/2;
	return area;
}
int main()
{
	int base,height;
	printf("Enter the base and height of right angled triangle:");
	scanf("%d%d",&base,&height);
	int Totalarea=area(base,height);
	printf("The area of right angled of triangle is  %d\n",Totalarea);
	return 0;
}
