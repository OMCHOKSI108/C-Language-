#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter A :");
    scanf("%d",&a);
	
	printf("Enter B :");
    scanf("%d",&b);

	printf("Enter C :");
    scanf("%d",&c);
	
	a>b ? a>c ? printf("A is Maximum") : printf("C is Maximum") : b>c ? printf("B is Maximum") : printf("c is Maximum");
	return 0;
}
