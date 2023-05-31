#include<stdio.h>
int main(){
	 int a;
	 
	 printf("Enter The Value Of a : ");
	 scanf("%d",&a);
	
	
	if(a>0){
		printf("Given No. a is Positive");
	}
	 else if(a<0){
		printf("Given No. a is Nagative ");
	}
	else{
	   printf("Given No. a is Neutral ");	
	}
	return 0;
}
