#include<stdio.h>
int main(){
	int a,b,ans;
	
	printf("enter the value of a :");
	
	scanf("%d",&a);
	
	printf("enter the value of b:");
	
	scanf("%d",&b);
	
	ans = (a*a*a) + ((3*a*b)*(a+b)) + (b*b*b);
	
	printf("ans is : %d",ans);
	
	return 0;
}