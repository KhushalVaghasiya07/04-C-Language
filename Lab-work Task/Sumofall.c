#include<stdio.h>

main()
{
	int	i,n,sum=0;
	
	printf("Enter Any number = ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum=i + sum;	
	}
	printf("All number of sum = %d",sum);
	
}