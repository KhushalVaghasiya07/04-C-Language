#include<stdio.h>

main()

{
	
	int row, col;
	
	printf("Enter the array's row size : ");
	scanf("%d",&row);
	printf("Enter the array's Column size : ");
	scanf("%d",&col);
	
	printf("\n\n");
	
	int i,j;
	int a[row][col];
	
	printf("Enter array's elements : ");
	printf("\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);	
		}	
		printf("\n");
	}
	
	
	printf("Output in Matrix Form : \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf(" %d ",a[i][j]);	
		}	
		printf("\n");
	}
	
	
	int	sum = 0;  
	
	for(i=0;i<row;i++) 
	{
	    for(j=0;j<col;j++)
		{
	        sum += a[i][j]; 
	    }
	}
	printf("\n");
	printf("Sum of all array's : %d",sum);
	
	printf("\n");
	
	float avg=(float)sum/(col*row);
	printf("\n");
	printf("Your Array's Average is : %.2f",avg);	
}