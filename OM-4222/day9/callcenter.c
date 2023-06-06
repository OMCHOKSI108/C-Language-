#include<stdio.h>

int main(){
     int a;
     printf("1= to check balance\n 2=to talk in hindi \n3=to check usage of mobile data\n4= to talk in gujrati \n5= to buy reacharge \n6= to close old plan\n7=to learn more or more help \n8= to end call\n\n\n");
     printf("Enter the value of A :");
     scanf("%d",&a);
     
     switch(a){
     	
     	case 1:
     		printf("78.65 rs");
     		break;
     	
     	case 2:
     		printf("Hindi");
     		break;
     	
     	case 3:
     		printf("689.24 mb");
     		break;
     	
     	case 4:
     		printf("Gujrati");
     		break;
     		
     	case 5:
     		printf("Your Recharge done Succesfully");
     		break;
     		
     	case 6:
     		printf("Your Old Plan Closed Succesfully ");
     		break;
     		
     	case 7:
     		printf("to learn more go to our website");
     		break;
     		
     		
     	case 8:
     		printf("Call Ended");
     		break;
     default:
	 printf("Invalid");
	 break;		
     		
     		
     		
	 }
	 
	 
	
	
	return 0;
}