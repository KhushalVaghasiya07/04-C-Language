#include<stdio.h>

main()
{
	int row,col;
	
	printf("Enter the Array's Row size : ");
	scanf("%d",&row);
	printf("Enter the Array's Column size : ");
	scanf("%d",&col);
	
	
	
	int a[row][col];
	int i,j;
	
	if(row==col)
	{
		printf("\n");
		printf("Enter Your Array's element : ");
		printf("\n");
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
	}
	else
	{
		printf("\n");
		printf("Make sure Your Row and Column are Same");
	}
	
	
	printf("Your Array's Output is Here : \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	int sum=0;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(i==j)
			{
				sum = sum + a[i][j];
			}
		}
	}
	
	printf("Your Diagonal sum is : %d",sum);
}