#include<stdio.h>
int main(){
	float A,P,r,t;
	printf("Enter The Value of initial principal balance P: ");
	scanf("%f",&P);
    printf("Enter The Value of annual interest rate r: ");
	scanf("%f",&r);
	printf("Enter The Value of time t: ");
	scanf("%f",&t);
	A = P*(1+r*t);
	printf("Your Simple Interest Is :%.2f",A);
	return 0;	
}