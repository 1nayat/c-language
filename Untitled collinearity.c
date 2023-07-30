#include<stdio.h>
int main()
{
	int x1,x2,x3,y1,y2,y3,ar;
	printf("Enter coordinates of first point:\n");
	scanf("%d%d",&x1,&y1);
		printf("Enter coordinates of second point:\n");
	scanf("%d%d",&x2,&y2);
		printf("Enter coordinates of third point:\n");
	scanf("%d%d",&x3,&y3);
	ar= (x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2));
	if(ar=0)
	printf("Points are collinear");
	else 
	printf("Points are not collinear");
	return 0;
}
