#include<stdio.h>


	int main(){
		
		int a[5];
		int *p[5];
		int j,i;
	
		for(j=0 ; j<5 ; j++){
			printf("Enter Value [%d]: ",j+1);
			scanf("%d",&a[j]);
		} 
		
		for(i=0 ; i<=4 ; i++){
			p[i] = &a[i];
			
			printf("%d\n",*p[i]);
		}
		return 0;
	}
