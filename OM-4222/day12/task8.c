#include<stdio.h>
int main(){
	int i=1,n,sum=0;
     printf("Enter Value :");
	 scanf("%d",&n);
	 
	 do{
	 sum =sum +i;
	   i++;
	  
	  }while(i<=n);	
	
		printf("%d\n",sum);
	
	return 0;
}
