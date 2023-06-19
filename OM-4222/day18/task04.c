#include<stdio.h>
int main(){
	int n,i,m,j;
	
	printf("Enter Number Of Rows    :");
	scanf("%d",&n);
	
	printf("Enter Number Of Columns :");
	scanf("%d",&m);
	printf("\n");
	int a[n][m];
	for(i=0;i<n;i++){
		
		for(j=0;j<m;j++){
			printf("Enter First Arrey Element a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	
	}
	for(i=0;i<n;i++){
		
		for(j=0;j<m;j++){
			printf("%d ",a[i][j] );
			
		}
	printf("\n");
	}
	
	
	
		printf("\n");
	int b[n][m];
	for(i=0;i<n;i++){
		
		for(j=0;j<m;j++){
			printf("Enter Second Arrey Element b[%d][%d] :",i,j);
			scanf("%d",&b[i][j]);
		}
	
	}
		for(i=0;i<n;i++){
		
		for(j=0;j<m;j++){
			printf("%d ",b[i][j] );
			
		}
	printf("\n");
	}
	
	int c[n][m];
	
	for(i=0;i<n;i++){
		
		for(j=0;j<m;j++){
			c[i][j]=0;
	
		}
		printf("\n");
	}
	
printf("Sum Of Two Arrey Is :\n");

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			c[i][j]=a[i][j]+b[i][j];
	printf(" %d ",c[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}