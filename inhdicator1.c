#include<stdio.h>


void swap(int *a,int *b){

	int  c;

	 c = *a;
	*a = *b;
	*b =  c;
	
	
		
	printf(" swap a = %d",*a);
	printf(" swap b = %d",*b);
	return 0;
}
main()
{
	int a,b;
	
	printf("enter value of a = \n");
	scanf("%d",&a);
	printf("enter value of b = \n");
	scanf("%d",&b);
	
	swap(&a,&b);
	return 0;
}
