#include<stdio.h>
int main()
{
	int num1,num2,result,choice;
	printf("Press 1 for addition,2 for subtraction,3 for multiplication,4 for division:");
	scanf("%d",&choice);
	printf("Enter two numbers");
	scanf("%d%d",&num1,&num2);
	switch(choice)
	{
		case 1:
			result=num1+num2;
			printf("The sum of the two numbers is %d\n",result);
			break;
				case 2:
			result=num1-num2;
			printf("The difference of the two numbers is %d\n",result);
			break;
				case 3:
			result=num1*num2;
			printf("The product of the two numbers is %d\n",result);
			break;
				case 4:
			result=num1/num2;
			printf("The division of the two numbers is %d\n",result);
			break;
			default:
				printf("Invalid choice\n");
				break;
			
	}
	return 0;
	
	
}
