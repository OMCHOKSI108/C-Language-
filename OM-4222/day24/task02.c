#include<stdio.h>
array(int A[],int n){
	int sum=0,i;
	for(i=0;i<n;i++){
	sum+=A[i];
   }
   
   printf("Sum : %d",sum);
}
int main(){
	int n,i;
	printf("Enter Size Of Arrey : ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		
		printf("Enter Element [%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	array(arr,n);
	return 0;
}
