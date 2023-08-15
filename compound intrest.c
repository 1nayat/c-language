#include<stdio.h>
#include<math.h>
int main()

{
	float i,p,q,r,n,a,b;
	for(i=1;i<11;i++)
	{
	printf("Enter the principal rate,annual rate,number of years,intrest compound times per year:-");
	scanf("\n%f%f%f%f",&p,&r,&n,&q);
	b=pow((1+r/q),n*q);
	a=p*b;
	printf("The amount is%f",a);
    }
	return 0;
}
