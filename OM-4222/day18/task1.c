#include<stdio.h>
int main(){
	int n,i,m,j;
	
	printf("Enter Number Of Rows    :");
	scanf("%d",&n);
	
	printf("Enter Number Of Columns :");
	scanf("%d",&m);
	int a[n][m];
	for(i=0;i<n;i++){
		
		for(j=0;j<m;j++){
			printf("Enter Element a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	
	}
		for(i=0;i<n;i++){
		
		for(j=0;j<m;j++){
			printf(" %d ",a[i][j]);
			
		}
		printf("\n");
	}
	
	return 0;
}