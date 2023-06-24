#include<stdio.h>
#include<string.h>

int main(){
	int len,spe=0,digit=0,letter=0,i;
	char p[100];
	
	printf("Enter Password :");
	scanf("%s",p);
	
	len=strlen(p);
	for(i=0;i<len;i++){
		if((p[i]>='a'   && p[i]<='z')   || (p[i]>='A'  && p[i]<='Z')){
		
		
		letter =1;
	              }else if(p[i]>='0'  && p[i]<='9'){
	              	
	              	digit=1;
				  } 
				  else{
				  	spe=1;
				  	
				  }     
	
}
	if(spe && digit && letter && len>=6){
 printf("....LOGIN SUCCESFULLY....\n");		
		
	}
else{
	 printf("Password is Invalid!\n");
	
}	
	
	
	return 0;
}