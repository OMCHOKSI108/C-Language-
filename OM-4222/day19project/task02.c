#include<stdio.h>
int main(){
	
	int i,l,sl,n;
	printf("Enter Size Of Arrey :");
	scanf("%d",&n);
	int a[n];
	printf("\n"); 
	for(i=0;i<n;i++){
		printf("Enter Element a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n");
	l=a[0];
	for(i=0;i<n;i++){
		if(a[i]>l){
			l=a[i];
		}
	}
	sl=a[0];
	for(i=1;i<n;i++){
		if(a[i]>sl  && a[i]<l){
			sl=a[i];
		}
		
	}
	printf("Second Largest Number Is :%d",sl);
	
	
	return 0;
}
