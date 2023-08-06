#include<stdio.h>


	int main(){
		
		int a[] = {10,20,30,40,50};
		int *p;
		
		p=&a;
		
		
		
		printf("%d\n",*(p+4));
		printf("%d\n",*(p+3));
		printf("%d\n",*(p+2));
		printf("%d\n",*(p+1));
		printf("%d\n",*(p+0));
							
		return 0;
	}
