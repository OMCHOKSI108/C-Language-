#include<stdio.h>
int main(){
	int n,i;
	printf("Enter Size Of Arrey :");
	scanf("%d",&n);
	int a[i];
	for(i=0;i<n;i++){
		printf("Enter Element a[%d]: ",i);
		scanf("%d",&a[i]);
		}
		printf("\n");
		printf("Right Rotate Arrey Is :");
	for(i=n-1;i>=0;i--){
		printf("%d ",a[i]);
	}
	
	return 0;
}
