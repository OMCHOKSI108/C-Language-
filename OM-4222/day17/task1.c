#include<stdio.h>
int main(){
	int n,i;
	
	printf("Enter Size Of Arrey :");
	scanf("%d",&n);
	printf("\n");
	
	int a[n];
	for(i=0;i<n;i++){
		
		printf("Enter Element Of Arrey a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\n\t");
	printf("{");
	for(i=0;i<n;i++){
		
		printf("%d ",a[i]);
		}
	printf("}");
	
	return 0;
}
