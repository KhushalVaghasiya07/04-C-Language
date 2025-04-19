#include<stdio.h>

main(){
	int a=1,b=2;
	printf("Enter the value of A = ");
	scanf("%d",&a);
	printf("Enter the value of B = ");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("Value of A = %d",a);
	printf("\nValue of B = %d",b);
}