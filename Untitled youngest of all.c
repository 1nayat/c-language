// to determine youngest of all
#include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter the age of Ram,Shyam,Ajay:-");
	scanf("%d%d%d",&x,&y,&z);
	if(x<y&&x<z)
	printf("Ram is the youngest");
	else if (y<x&&y<z)
	printf("Shyam is the youngest");
	else 
	printf("Ajay is the youngest");
	
	return 0;
}
