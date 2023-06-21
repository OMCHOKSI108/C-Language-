#include<stdio.h>
int main(){
	int n,i,j,m;
	
	printf("Enter Size Of Arrey : ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		printf("Enter Element Of Arrey a[%d] :",i);
		scanf("%d",&a[i]);
	
	}
	
	printf("Negative Number are { ");
	
	for(i=0;i<n;i++){
		if(a[i]<0){
		
		printf("%d ",a[i]);
	}
	
	}
		printf(" }");
}
