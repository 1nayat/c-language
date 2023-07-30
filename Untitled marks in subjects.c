#include<stdio.h>
#include<math.h>
int main()
{
	float english,urdu,maths,sst,science;
	printf("enter marks of english");
	scanf("%f",&english);
	printf("enter marks of urdu");
	scanf("%f",&urdu);
	printf("enter marks of maths");
	scanf("%f",&maths);
	printf("enter marks of sst");
	scanf("%f",&sst);
	printf("enter marks of science");
	scanf("%f",&science);
    float total = english+urdu+maths+sst+science;
	float percentage=total*100/200;
	printf("percentage=%2f\n",percentage);
	return 0;
}
