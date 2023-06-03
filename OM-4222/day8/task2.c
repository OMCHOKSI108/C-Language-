#include<stdio.h>
int main(){
	int a,b,c,d;
	printf("Enter A:");
	scanf("%d",&a);
	printf("Enter B:");
	scanf("%d",&b);
	printf("Enter C:");
	scanf("%d",&c);
	printf("Enter D:");
	scanf("%d",&d);
	if(a>b){
		if(a>c){
			if(a>d){
				printf("A is Maximum");
			}
			else{
				printf("D is Maximum");
				
			}
		}
		else{
			if(c>d){
				printf("C is Maximum");
				
			}
			else{
				printf("D is Maximum");
			}
			
		}
		
	}
	else{
		if(b>c){
			
			if(b>d){
				printf("B is Maximum");
				
				}
				else{
					
					printf("D is Maximum");
				}
		}
		else{
			if(c>d){
				
				printf("C is Maximum");
			}
			else{
				
				printf("D is Maximum");
			}
		}
	}
	
	
	
	return 0;

}
	
	
	
	
	
	
	
