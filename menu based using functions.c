#include<stdio.h>
int add(int x,int y)
{
	return x+y;
}
int sub(int x,int y)
{
	return x-y;
}
int mult(int x,int y)
{
	return x*y;
}
int divide(int x,int y)
{
	return x/y;
}
int main()
{
	int choice,x,y,result;
	printf("Enter you choice\n\n");
	printf("1.Addition\n");
	printf("2.subtraction\n");
	printf("3.multiplication\n");
    printf("4.division\n");
	printf("5.exit\n");
	scanf("%d",&choice);
	printf("Enter any two numbers\n");// this will also work for exit option to avoid that print seperately with every operation
	scanf("%d%d",&x,&y);
	switch(choice)
	{
		case 1:
			
			 result=add(x,y);
			printf("The addition of two numbers is %d\n",result);
			break;
				case 2:
		result=sub(x,y);		
			printf("The subtraction of two numbers is %d\n",result);
			break;
				case 3:
				result=mult(x,y);			
			printf("The multiplication of two numbers is %d\n",result);
			break;
				case 4:			
				 result=divide(x,y);
			printf("The division of two numbers is %d\n",result);
			break;
			default:
				printf("Thankyou for choosing this programme ");
				break;
	}
						
	return 0;				
}
