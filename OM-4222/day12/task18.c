#include<stdio.h>

int main(){
	int i,n,sum=0;
	printf("Enter Value :");
	scanf("%d",&n);
	
	for( i=1 ; i<=n ; i++){
	sum=sum+i;	
	}
		
			printf("%d\n",sum);
	
	return 0;
}
