#include<stdio.h>

main()
{
	int A,B;
	
	printf("Enter the value of A = ");
	scanf("%d",&A);
	printf("Enter the value of B = ");
	scanf("%d",&B);
	
	if(A<B)
	{
		printf("A is minimum");
	}
	else
	{
		printf("B is minimum");
	}
}