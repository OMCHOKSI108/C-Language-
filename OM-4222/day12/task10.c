#include<stdio.h>
int  main(){
	
	int n,i=1,ans;
	
	printf("Enter Value : ");
	scanf("%d",&n);
	do{
		ans=n*i;
			printf("%d x %d = %d \n",n,i,ans);
	
		i++;
	}while(i<=10);

	
	
	return 0;
}
