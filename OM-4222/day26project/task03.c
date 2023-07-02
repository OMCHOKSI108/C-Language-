#include<stdio.h>
int main(){

int i,n;

    printf("Enter Size : ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
    	printf("Enter Element [%d] : ",i);
    	scanf("%d",&arr[i]);
}
int *a[n];
printf(":.... Your Reversed Array .... :\n ");
for(i=n-1;i>=0;i--){
	
	    a[i]=&arr[i];
		printf("%d ",*a[i]);
    }


return 0;
}
