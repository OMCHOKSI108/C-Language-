#include<stdio.h>
int main(){
	int f=1,n,i;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	
	do{
		f=f*n;
		n--;
	}while(i<=n);
	
	printf("%d",f);
	
	
	return 0;
}
