#include<stdio.h>
int main(){
	
	int n,i,j,m;
     printf("Enter Number Of Rows    :");
     scanf("%d",&n);
     printf("Enter Number Of Columns :");
     scanf("%d",&m);
     printf("\n");
     int a[n][m];
     for(i=0;i<n;i++){
     	
     	for(j=0;j<m;j++){
     		printf("Enter Element a[%d][%d] :",i,j);
     		scanf("%d",&a[i][j]);
		 }
	 }
     3
	 int b[n][m];
	  for(i=0;i<n;i++){
     	
     	for(j=0;j<m;j++){
     		b[j][i]=a[i][j];
		 }
		
	 }
	 printf("Transpose Arrey Is :\n");
	  for(i=0;i<n;i++){
     	
     	for(j=0;j<m;j++){
     		 printf("%d ",b[i][j]);
		 }
		printf("\n");
	 }
	 printf("%d",b[i][j]);
	 return 0;
}