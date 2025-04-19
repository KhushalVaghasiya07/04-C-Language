#include<stdio.h>

/*
    1
   21
  321
 4321
54321  	
*/
main()
{
	
	char i,j,s;
	
	
	
	for(i=A;i<=E;i++)
	{
		for(s=5;s>i;s--)
		{
			printf("  ");
		}
		for(j=i;j>=A;j--)
		{
			printf(" %c",j); 
		}
		printf("\n");
	}
}