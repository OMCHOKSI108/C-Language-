#include<stdio.h>
int main(){
	int m,n,i,j,sum=0;
	float avg;
	printf("Enter Number Of Row   :");
	scanf("%d",&n);
	
	printf("Enter Number Of Column :");
	scanf("%d",&m);
	printf("\n");
	j=m*n;
	int a[j];
	for(i=0;i<j;i++){
		
		printf("Enter Element Of Arrey a[%d]:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<j;i++){
	
     sum+=a[i];	
}
avg = sum/j;
printf("\n");
printf("Average Of Arrey Is %.2f",avg);

	return 0;
}
