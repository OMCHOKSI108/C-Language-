#include<stdio.h>
int main(){
	int f,a,b,v;
	int *c;
	
	printf("Enter A: ");
	scanf("%d",&a);

	printf("Enter B: ");
	scanf("%d",&b);// c =&a; a =b b= *c
	f=b;
	

	printf("\n... Your Swapped Value ... \n");
     
	 c=&a;
	 b=*c;
	 v=b;
	 c=&f;
	 a=*c;
	 f=a;	
       
  	printf(" A : %d\n B : %d\n",f,v);
	
	return 0;
}
