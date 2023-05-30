#include<stdio.h>

int main(){
	
	int a=54;
	int b=72;
	
	b = a+b;
	a = b-a;
	b = b-a;
	printf("A : %d\n",a);
	printf("B : %d",b);
	return 0;
}
