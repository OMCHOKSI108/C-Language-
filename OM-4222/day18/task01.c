#include<stdio.h>
int main(){
	int i,j;
	int m,n;
	
	printf("Enter Number Of Row   :");
	scanf("%d",&n);
	
	printf("Enter Number Of Column :");
	scanf("%d",&m);
	printf("\n");
     	
	for(i=0;i<n;i++){
		for(j=1;j<=m;j++){
			
			printf("%d ",j);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
