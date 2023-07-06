#include<stdio.h>

int main(){
	char name[20];
	FILE *p;
	
	
	p = fopen("Write.txt","w");

if(p==NULL){
	
	printf("Error");
	
}	
	else{
	printf("Enter Text :");
	gets(name);	
	fputs(name,p);
	fclose(p);
		
	}
	
	
	
	return 0;
}
