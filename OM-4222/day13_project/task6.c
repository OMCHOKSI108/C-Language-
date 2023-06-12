#include<stdio.h>

int main(){
	int n,f=1;
	printf("Enter Value :");
	scanf("%d",&n);
	while(n>=1){
		
		f=f*n;
		n--;
		
	}
	printf("Factorial Of Given Number Is:5 %d",f);
	
	return 0;
}