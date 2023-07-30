#include<stdio.h>
#include<math.h>
int main()
{
	float Q,res,cosQ,sinQ;
	printf("Enter the value of Q");
	scanf("%f",&Q);
	res=(sin(Q)*sin(Q)+cos(Q)*cos(Q));
	printf("the sum of sq of sine and cosine is %f",res);
	
	return 0;
}
