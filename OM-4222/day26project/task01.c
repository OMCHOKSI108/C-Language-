#include<stdio.h>
void swap(int *n1,int *n2){
    int n3;
	n3=*n1;
	*n1=*n2;
	*n2=n3;
	printf(" A : %d\n B : %d\n",*n1,*n2);
	
	
}
int main(){
	int a,b;
	printf("Enter A : ");
	scanf("%d",&a);
	
	printf("Enter B : ");
	scanf("%d",&b);
		printf("\n");
	
	swap(&a,&b);
	
	
	
	
	return 0;
}
