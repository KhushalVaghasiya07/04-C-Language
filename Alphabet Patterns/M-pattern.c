
#include<stdio.h>

/*

*	        *	
*  *     *  *   
*	  *		*
*			*
*			*
*			*
*			*		


*/

main()
{
	int i,j;
	
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=5;j++)
		{
			if( (j==1) || (i==2) && (j!=3) || (j==5)  || (i==3) && (j==3)) 
			{
				printf("*  ");
			}
			else
			{
				printf("   ");
			}
		}
		printf("\n");
}
}