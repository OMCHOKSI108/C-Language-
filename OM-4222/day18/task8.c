#include<stdio.h>

int main(){
	int n,i,m,j;
	
	printf("Enter Number of Rows    :");
	scanf("%d",&n);
	
	printf("Enter Number of Columns :");
	scanf("%d",&m);
	printf("\n");
	int a[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Enter Element a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
		
	}
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d  ",a[i][j]);
		
		}
		printf("\n");
	}
		printf("\n");
		int sum=0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(i==j){
				
				sum+=a[i][j];
			}
		
		}
		printf("\n");
	}
	
	printf("Diagonal Sum Is : %d",sum);
	
	
	return 0;
}
