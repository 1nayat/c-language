  #include<stdio.h>
  #include<math.h>
int main()
{
	float distance;
	printf("enter the distance in km");
	scanf("%f",&distance);
	distance=distance/1000;
	printf("distance in mtr=%f\n",distance);
	distance=distance/100000;
	printf("distance in cm=%f",distance);
	
	return 0;
}
	
	

