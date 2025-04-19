#include<stdio.h>

main()
{
	int size,i;
	
	printf("Enter the size of Elements =  ");
	scanf("%d",&size);
	
	int a[size];
	
	 printf("\n\n");
	for(i=0;i<size;i++)
	{
		printf("Your element %d  :  ",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("\n\n");
	printf("Length of An Array : %d",size);

}