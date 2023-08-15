#include<stdio.h>
int swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
//	return swap;
}
int main()
{
	int x,y;
	printf("Enter the two numbers :");
	scanf("%d%d",&x,&y);
    swap(&x,&y);
	printf("The two numbers after swapping are %d%d\n",x,y);
	return 0;
}
