#include<stdio.h>
int main(){
	int orig_num,num,rev=0,remainder;
	
	printf("Enter Number :");
	scanf("%d",&num);
	orig_num=num;
	while(num!=0){
		remainder=num%10;
		rev=rev*10 + remainder;
		num=num/10;
	}
    if(orig_num==rev){
	 
  	printf("This Is Palindrome Number ");	
}

	else{
	printf("This Is Not Palindrome Number ");
	
	}
	
	return 0;
}