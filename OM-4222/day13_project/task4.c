#include<stdio.h>

int main(){
	
	int f,l,n,sum;
	
	
	printf("Enter Value :");
	scanf("%d",&n);
	f=n;
	while(f>=10){
		
		f = f/10;
		
	}
	
	l = n % 10;
	
	sum=l+f;
	printf("Sum Of First And Last Number : %d",sum);
	return 0;
}