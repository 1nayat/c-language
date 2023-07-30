#include<stdio.h>
int main()
{
	int a =20;
	int b =10;
	printf("a=%i,b=%i\n",a,b);
	int temp=a;
	a=b;
	b=temp;
	printf("a=%i,b=%i\n",a,b);
	return 0;
}
