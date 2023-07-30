#include<stdio.h>
int main()
{
	float wt_lb,ht_in,BMI;
	printf("enter the weight in pounds");
	scanf("%f",&wt_lb);
	printf("enter the height in inches");
	scanf("%f",&ht_in);
	BMI=703*wt_lb/ht_in*ht_in;
	if (BMI<18.5)
	{printf("weight status:underweight");
	}
	if (BMI>=25.0 && BMI<=29.9)
	{
		printf("weight status:overweight");
	}
	else 
{
	printf("weight status:obese");
}
    return 0; 
}
