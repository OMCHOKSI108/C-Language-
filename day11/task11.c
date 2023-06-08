#include<stdio.h>
int main(){
	int n,i=1,a;
	printf("Enter Value :");
	scanf("%d",&n);
	while(i<=10){
		a=n*i;
		
		printf("%d x %d  = %d\n",n,i,a);
		i++;
		}
	return 0;
}