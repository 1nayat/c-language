#include<stdio.h>
#include<math.h>
int main()
{
	float english,urdu,maths;
	printf("enter marks of maths");
	scanf("%f",&maths);
	printf("enter marks of urdu");
	scanf("%f",&urdu);
	printf("enter marks of english");
	scanf("%f",&english);
	float total=maths+urdu+english;
	float percentage=(total/300)*100;
	printf("percentage=%2f",percentage);
	return 0;
}
