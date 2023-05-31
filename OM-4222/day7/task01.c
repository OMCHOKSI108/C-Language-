#include<stdio.h>

int main(){
	int a;
	int b;
	
	printf("Enter The Value Of a :");
	scanf("%d",&a);
	
	printf("Enter The Value Of b :");
	scanf("%d",&b);
	 
	if(a>b){
		
		printf("b is less than a");
	}
	
   	else if(b>a){
	 
	 printf("a is less than b");
		
	}
	return 0;
}
