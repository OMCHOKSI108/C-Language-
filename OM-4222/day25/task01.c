#include<stdio.h>
int main(){
	int arr[]={52,25,23,75,46,63};
	int *a1,*a2,*a3,*a4,*a5,*a6;
	
	a1=&arr[0];
	a2=&arr[1];	
	a3=&arr[2];
	a4=&arr[3];
	a5=&arr[4];				
	a6=&arr[5];
	
	printf("... Square Of Element ...\n");
	printf(" %u  =>  %d \n",a1,(*a1)*(*a1));
	printf(" %u  =>  %d \n",a1,(*a2)*(*a2));
	printf(" %u  =>  %d \n",a1,(*a3)*(*a3));
	printf(" %u  =>  %d \n",a1,(*a4)*(*a4));
	printf(" %u  =>  %d \n",a1,(*a5)*(*a5));
	printf(" %u  =>  %d \n",a6,(*a6)*(*a6));
 
   return 0;

}
