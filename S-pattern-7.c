#include<stdio.h>

/*
12345
 1234
  123
   12
    1
*/
main()
{
	
	int i,j,s;
	
	for(i=5;i>=1;i--)
	{
		for(s=i;s<5;s++)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++)
		{
			printf(" %d",j); 
		}
		printf("\n");
	}
}