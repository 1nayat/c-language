#include<stdio.h>
int main()
{
	float y,x,i; 
	for(y=1;y<7;y++)
	{
		for(x=5;x<13;x+=0.5)
		i=(2+(y+0.5*x));
		printf("\n%d%f=%f",i,y,x);
	}
	return 0;
}
//wrong
