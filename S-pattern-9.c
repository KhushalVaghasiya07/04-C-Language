#include<stdio.h>

/*
54321
 5432
  543
   54
    5
*/
main()
{
	
	int i,j,s;
	
	for(i=1;i<=5;i++)
	{
		for(s=i;s>1;s--)
		{
			printf("  ");
		}
		for(j=5;j>=i;j--)
		{
			printf(" %d",j); 
		}
		printf("\n");
	}
}