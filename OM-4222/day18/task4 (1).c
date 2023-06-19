#include<stdio.h>
int main(){
	int n,i,j,m;
	printf("Enter value of rows :");
	scanf("%d",&n);
	
	printf("Enter value of column :");
	scanf("%d",&m);
	printf("\n");
	for(i=0;i<n;i++){
		for(j=1;j<n;j++){
			printf("%d",j);
			
		}
		printf("\n\t");
		
	}
	
	
	return 0;
}
