#include<stdio.h>
int main(){
	int f=1,n,i;
	
	printf("Enter Value :");
	scanf("%d",&n);
	
	while(n>=1){
		f=f*n;
		n--;
		
	}
	printf("Factorial is :%d",f);
	return 0;
}