#include<stdio.h>
int main(){
	
	int unit;
	float bill;
	printf("Enter Unit : ");
	scanf("%d",&unit);
	
	if(unit<=50 && unit>=0){
		bill=unit*0.52;
	}
	else if(unit>=51  && unit<=150){
		bill=50 * 0.50 + (unit - 50) * 0.75;
		
	}
	else if(unit>=151 && unit<=250){
		bill=50 * 0.50 + 100*0.75 + (unit-150)*1.20;
		
	}
	else{
		bill=50*0.50 + 100*0.75+ 100*1.20 + (unit-250)*1.50;
		
	}
	bill += bill * 0.20;
	 printf("Total electricity bill: Rs. %.2f\n",bill);
	
		return 0;
}