#include<stdio.h>
int main(){
	int a,b,sum;
	
	printf("enter the value of a :");
	
	scanf("%d",&a);
	
	printf("enter the value of b:");
	
	scanf("%d",&b);
	
	sum = a*a + 2*a*b + b*b;
	
	printf("ans is : %d",sum);
	
	return 0;
}