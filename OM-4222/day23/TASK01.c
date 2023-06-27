#include<stdio.h>

void sum(int a,int b){
	
	printf("Sum : %d\n\n",a+b);
	
}

void sub(int a,int b){
	
	printf("Substraction : %d\n\n",a-b);
	
}
void multi(int a,int b){
	
	printf("Multiplication : %d\n\n",a*b);
	
}
void div(int a,int b){
	
	printf("Division : %d\n\n",a/b);
	
}

int main(){
		
	int a,b;
	char sign;
     while(1){
	 
	
	printf("Enter First Value  : ");
	scanf("%d",&a);
	
	printf("Enter Second Value : ");
	scanf("%d",&b);
	
	printf("\nMake Selection\n + , - , x , / :");
	scanf(" %c",&sign);
	
	switch(sign){
		
		case '+':
		sum(a,b);
		
			break ;
		case '-':
			
		sub(a,b);
			break ;
		case 'x':
		
		multi(a,b);
			break ;
		
		case '/':
		
		div(a,b);
			break ;
		
		
		
	}
	
}

	return 0;
}

