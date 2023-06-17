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

	printf("\n\t");
	printf("Average Of :");
int sum=0;
	for(i=0;i<n;i++){
		
		sum+=a[i];
		}
		
	printf("%d",sum/n);
		return 0;
}

