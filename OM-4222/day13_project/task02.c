#include<stdio.h>
int main(){
	int i,n,ans;
	
	printf("Enter Value :");
	scanf("%d",&n);
	
	for(i=1 ; i<=10 ;i++){
	
	ans=n*i;
	
	printf("\n%d x %d = %d \n",n,i,ans);
}
	
	return 0;
}
