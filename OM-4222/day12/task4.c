#include<stdio.h>
int main(){
	int i=1,n;
	printf("Enter Value :  ");
	scanf("%d",&n);
	do{
		
		printf("%d\n",n);
		
		n--;
		
	}while(n>=i);
	
	
	return 0;
}
