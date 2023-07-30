#include<stdio.h>
#include <math.h>
int main()
{
	float tempinfarenhiet,tempindegree;
	printf("enter temp in farenhiet");
	scanf("%f",& tempinfarenhiet);
	tempindegree=(tempinfarenhiet-32)*5/9;
	printf("temp in degree%2f",tempindegree);
	
	return 0;
}
