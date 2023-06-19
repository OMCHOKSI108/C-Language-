#include<stdio.h>
int main(){
	int n,i,j,m;
	
	printf("Enter Number Of Rows    : ");
	scanf("%d",&n);
	
	printf("Enter Number Of Columns : ");
	scanf("%d",&m);
	
		printf("\n");	
		
       int a[i][j];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Enter Element Of Arrey a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
				}
        
	}
	
	printf("\n");
	printf("Your Arrey Is : \n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf(" %d",a[i][j]);
			
			
		}
		printf("\n");
	}
	
	int c[m];
	
	for(i=0;i<m;i++){
		
		c[i]=0;
		
	}
	printf("Your Row Wise Sum  Is : \n ");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			
			c[i]+=a[i][j];
	
         
		}
			printf("%d",c[i]);
		printf("\n ");
		
	}
	
	
	
	
	return 0;
}
