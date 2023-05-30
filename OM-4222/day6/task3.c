#include<stdio.h>

int main(){
	
	int a=54;
	int b=72;
	int temp;
	
	temp=b;
	b=a;
	a=temp;
	printf("A : %d\n",a);
	printf("B : %d",b);
	return 0;
}
