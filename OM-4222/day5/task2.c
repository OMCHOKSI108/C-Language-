#include<stdio.h>
int main(){
	int a,b,substraction;
	
	printf("enter the value of a :");
	
	scanf("%d",&a);
	
	printf("enter the value of b:");
	
	scanf("%d",&b);
	
	substraction = a*a - 2*a*b + b*b;
	
	printf("ans is : %d",substraction);
	
	return 0;
}