// programme to calc tax ask for income as in out from the user and calc acc to given condt
//a) if income is less than 150000 then no tax
//b)if 150001-300000 then charge 10%
//c)if 300001-50000 then charge 20%
//d)income above 500001 then charge 30%
 
 #include<stdio.h>
 int main()
 {
 	float income,tax;
 	printf("Enter the income in figures:");
 	scanf("%f",&income);
 	if (income<150000)
 	{printf("No tax applicable");
	 }
	 if  (income>150001 && income<=300000)
	{
	  tax=(income*0.1);
}
	   if (income>300000 && income<=500000)
{
	 tax=15000+(income*0.2);
}
	  if (income>500000)
	{
	  tax=45000+(income*0.3);
}
#include <stdio.h> 

int main()
	{
	float amount,tax;
	printf("Enter the amount of income: ");
	scanf("%f",&amount);
	if(amount<=150000){
		tax=0;
	}else if(amount>150000 && amount<=300000){
		tax=amount*0.1;
	}else if(amount>300000 && amount<=500000){
		tax=amount*0.2;
	}else{
		tax=amount*0.3;
	}
	if(tax==0){
		printf("\nNo tax.\n");
	}else{
		printf("\nThe tax = %2f\n",tax);
	}
	
    return 0;
}
	{
	  printf("your%f income",tax);
}
return 0;
	 
 }
