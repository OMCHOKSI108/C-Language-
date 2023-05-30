#include<stdio.h>
int main() {
	float p,r,t;
	
	float simple_interest;
	
	printf("enter the value of p:\n");
	scanf("%f", &p);
	printf("enter the value of r:\n");
	scanf("%f", &r);
	printf("enter the value of t:\n");
	scanf("%f", &t);
		simple_interest=(p*r*t)/100;
		printf("simple interest is :%.2f",simple_interest);
		return 0;
		
}