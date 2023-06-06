#include<stdio.h>
int main(){
	int a,b,c,d,e;
	printf("Enter A :");
    scanf("%d",&a);
	
	printf("Enter B :");
    scanf("%d",&b);

	printf("Enter C :");
    scanf("%d",&c);
	
	printf("Enter D :");
    scanf("%d",&d);
    
	printf("Enter E :");
    scanf("%d",&e);
     
     a>b ? a>c ? a>d ? a>e ? printf("A is Maximum") : printf("E is Maximum") : d>e ? printf("D is Maximum") : printf("E is Maximum") : c>d ? c>e ? printf("C is Maximum") : printf("e is Maximum") : d>e ? printf("D is Maximum") : printf("E is Maximum") : b>c ? b>d ? b>e ? printf("B is Maximum") : printf("E is Maximum") :  d>e ? printf("D is Maximum") : printf("E is Maximum") : c>d ? c>e ? printf("C is Maximum") : printf("e is Maximum") : d>e ? printf("D is Maximum") : printf("E is Maximum") ;

	
	
	return 0;
}
