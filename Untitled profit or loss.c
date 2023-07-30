// progarmme to check profit or loss by selling and cost price
#include<stdio.h>
#include<conio.h>
int main()
{
	float sp,cp;
	printf("Enter the cost price and selling price of item:-");
	scanf("%f%f",&cp,&sp);
	if(sp-cp>0)
		printf("The seller has profit of %2fRs\n",sp-cp);
	else if(sp-cp<0)
		printf("The seller has loss of %2fRs\n",sp-cp);
	else
	 printf("The seller has neither profit neither loss");
	
	return 0;
}
