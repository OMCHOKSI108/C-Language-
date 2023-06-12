#include<stdio.h>
int main(){
	int count,n;
	
	printf("Enter Value :");
	scanf("%d",&n);
	
	while(n>0){
	
		n= n / 10;
		count++;
		
		}
          printf("There are %d digits",count);	
	return 0;
}