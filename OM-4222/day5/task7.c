#include<stdio.h>
int main(){
	int a,b,c,ans;
	
	printf("enter the value of a:");
	
	scanf("%d",&a);
	
	printf("enter the value of b:");
	
	scanf("%d",&b);
	
	printf("enter the value of c:");
	
	scanf("%d",&c);
	
	
	ans = (a*a) + (b*b) + (c*c) + 2*((a*b)+(b*c)+(c*a));
	
	printf("ans is : %d",ans);
	
	return 0;
}