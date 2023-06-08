#include<stdio.h>
int main(){
	int i=1;
	int n;
	
	printf("Enter Value");
	scanf("%d",&n);
while(n>=i){
	 
	 while(n%2==0){
		printf("%d\n",n);
		n--;	
	}
	
		n--;
}	
	return 0;
}