#include<stdio.h>
int main(){
	
	int n,i,j,m;
	
	printf("Enter Number Of Rows    : ");
	scanf("%d",&n);
	printf("Enter Number Of Columns : ");
	scanf("%d",&m);
	int a[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Enter First Arrey Element a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}

	}
	printf("\n");
	int b[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Enter Second Arrey Element a[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}

	}
	int sum[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		sum[i][j]=0;
		}

	}
	printf("Sum Of Two Arrey Is : \n");
		for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		sum[i][j]+=a[i][j]+b[i][j];
		printf("%d ",sum[i][j]);
		}
printf("\n");
	}
	
	
	
	return 0;
}