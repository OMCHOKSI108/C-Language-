#include<stdio.h>
int main(){
	int n,i;
	
	printf("Enter Size Of Arrey :");
	scanf("%d",&n);
	printf("\n");
	int a[n];
	for(i=0;i<n;i++){
	
	    printf("Enter First Arrey Element a[%d] : ",i);
	    scanf("%d",&a[i]);
	
	}

	printf("\n");
	int b[n];
	for(i=0;i<n;i++){
	
	    printf("Enter Second Arrey Element b[%d] : ",i);
	    scanf("%d",&b[i]);
	
	}
	printf("\n\t");
	printf("Sum Of Two Arrey :");
int sum[n];
	for(i=0;i<n;i++){
		
		sum[i]=a[i]+b[i];
			printf("  %d",sum[i]);

	}
		return 0;
}

