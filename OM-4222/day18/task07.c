#include<stdio.h>
int main(){
	int n,i,j,m,c=0;
	
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
	
	

		
		
	
	printf("Your Diagonl Sum  Is : \n ");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
	
		for(i=0;j=0;i=j){
		
			c+=a[i][j];
      printf("%d",c);
	   }
       if(i=j){
       		c+=a[i][j];
       	
       	printf("%d",c);
	   }
         
		}
			
	
		
	}
		printf("%d ",c);
		
	
	
	
	return 0;
}
