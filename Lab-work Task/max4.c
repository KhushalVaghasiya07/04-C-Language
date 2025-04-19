#include<stdio.h>

main()
{
	int a,b,c,d;
	
	printf("Enter the value of A = ");
	scanf("%d",&a);
	printf("Enter the value of B = ");
	scanf("%d",&b);
	printf("Enter the value of C = ");
	scanf("%d",&c);
	printf("Enter the value of D = ");
	scanf("%d",&d);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("A is maximum");
		}
		else
		{
			printf("C is maximum");	
		}
		if(a>d)
		{
			printf("A is maximum");
		}
		else
		{
			printf("D is maximum");
		}
		
	}
	else
	{
		if(b>c)
		{
			printf("B is maximum");
		}
		else
		{
			printf("C is maximum");
		}
	}
}