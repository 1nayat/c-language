#include<stdio.h>
#include<math.h>
int main()
{
	int i,hr,bonus;
	for (i=1;i<11;i=i+1)
	{
	printf("Enter the working hours of employee :");
	scanf("%d",&hr);
	if (hr>40)
	{
	bonus=(hr-40)*12;
	printf("The bonus of employee is : %dRs\n\n",bonus);
    }

	else
	printf("the employee has no overtime\n\n");
}
    getch();
	return 0;
}
