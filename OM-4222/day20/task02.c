#include<stdio.h>
#include<string.h>
int main(){
	
    char g[15];
	char p[15];

	printf("Enter Gmail    : ");
	scanf("%s",g);
	
	printf("Enter Password : ");
	scanf("%s",g);
	if(strcmp(g,"omchoksi278@gmail.com")  &&  (p,"Omchoksi@111")){
		printf("\n");
		printf(".........LOGIN SUCCESFULLY.........");
		
	}
	else{
		
				printf("Gmail Or Password Invalid!");
	
	}
	
	return 0;
}
