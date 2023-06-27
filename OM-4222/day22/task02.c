#include<stdio.h>
#include<string.h>

void div(){
	int a;
	printf("Enter A:");
	scanf("%d",&a);
	
	if(a%3==0  && a%5==0){
		printf("Divisible By Both ");
		
	}
	else{
		
		printf("Not Divisible By Both ");
	}
	
}
int main(){
	
	
	div();
	
	
	return 0;
}