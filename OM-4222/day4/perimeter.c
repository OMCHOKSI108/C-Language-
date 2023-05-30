#include<stdio.h>
int main(){
	float perimeter,pi=3.14;
	int r;
	printf("Enter The Value Of r :");
	scanf("%d",&r);
	perimeter=2*pi*r;
	printf("perimeter of circle is :%.2f",perimeter);
	return 0;
}