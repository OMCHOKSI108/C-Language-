#include<stdio.h>
int main(){
	int a,b,c,d;
	printf("Enter A :");
    scanf("%d",&a);
	
	printf("Enter B :");
    scanf("%d",&b);

	printf("Enter C :");
    scanf("%d",&c);
	
	printf("Enter D :");
    scanf("%d",&d);
    
    a>b ? a>c ? a>d ? printf("A is Maximum") : printf("D is Maximum") : c>d ? printf("C is Maximum") : printf("D is Maximum") : b>c ? b>d ? printf("B is Maximum") : printf("D is Maximum") : c>d ? printf("C is Maximum") : printf("D is Maximum");
	
	
	return 0;
}
