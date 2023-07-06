#include<stdio.h>
int main(){
	FILE *p;
	char name[32];
	
	p = fopen("Write.txt","r");
	
	if(p==NULL){
		printf("Error");
		
	}
	else{
		
	    fgets(name,20,p);
	    puts(name);
		fclose(p);
		
	}
	
	
	return 0;
}
