#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("Enter the value of A = ");
	scanf("%d",&a);
	
	printf("Enter the value of B = ");
	scanf("%d",&b);
	
	c=a+b;
	a=c-a;
	b=c-b;
	
	printf("Value of A = %d",a);
	printf("\nValue of B = %d",b);
}