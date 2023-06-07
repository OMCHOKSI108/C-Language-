#include<stdio.h>

int main(){
int a,b,c,d;

printf("Enter A:");
scanf("%i",&a);

printf("Enter B:");
scanf("%i",&b);

printf("Enter C:");
scanf("%i",&c);

printf("Enter D:");
scanf("%i",&d);	
	
	if(a>b){
		 
		 if(a>c){
		 	
		 	if(a>d){
		 		
		 		printf("A Is Maximum");
		 		
			 }
		 	else{
		 		
		 		printf("D Is Maximum");
		 		
			 }
		 }
		else{
			if(c>d){
				
				printf("C Is Maximum");
				
			}
			else{
				
				printf("D Is Maximum");
			}
			
		}
		
	}
else{
	if(b>c){
		if(b>d){
			
			printf("B Is Maximum");
			
			
		}
		else{
			
			printf("D Is Maximum");
			
		}
		
		
	}
	else{
		if(c>d){
			
			printf("C Is Maximum");
			
			
		}
		else{
			
			printf("D Is Maximum");
			
		}
		
		
	}
	
	
}
	
	
	return 0;
}
