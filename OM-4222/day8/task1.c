#include<stdio.h>
int main(){
	 int a,b,c;
	 printf("Enter A:"); 
	scanf("%d",&a);
	printf("Enter B:");
	scanf("%d",&b);
	printf("Enter C:"); 
	scanf("%d",&c);
	if(b>a){
		if(c>a){
			printf("a is minimum");
			    }
	    else{
			printf("c is minimum");
		   }
		    }
	      else{
		if(c>b){
			 printf("b is minimum");
		         }
		 else{
			printf("c is minimum");
			}
		}    
        return 0;
       }
