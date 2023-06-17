#include<stdio.h>
int main(){
	int n,i,m;
	
	printf("Enter Size Of Arrey :");
	scanf("%d",&n);
	printf("\n");
	int a[n];
	for(i=0;i<n;i++){
	
	    printf("Enter First Arrey Element a[%d] : ",i);
	    scanf("%d",&a[i]);
	
	}
	printf("\n");
	printf("Enter Size Of Second Arrey :");
	scanf("%d",&m);
	printf("\n");
	int b[m];
	for(i=0;i<m;i++){
	
	    printf("Enter Second Arrey Element b[%d] : ",i);
	    scanf("%d",&b[i]);
	
	}
	printf("\n\t");
	printf("New Arrey Is : { ");
	for(i=0;i<n;i++){
	
     	printf(" %d",a[i]);
}
for(i=0;i<m;i++){
	
     	printf(" %d",b[i]);
}

       printf(" } ");
       	return 0;
}

