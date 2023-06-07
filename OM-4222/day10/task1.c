#include<stdio.h>

int main(){
	
	
	char value;
	printf("Enter Value : ");
	scanf("%c",&value);
	if(value>='a' && value<='z'){
		
		printf("it is Alphabet");
		
	}
	else{
	
	if(value>= '0'  && value<='9'){
	
	printf("it is Digit");
   }
   else{
   	
   	printf("it is Special Charcater");
   }


	}
	
	
	return 0;
}
