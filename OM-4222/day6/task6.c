#include<stdio.h>

int main(){
	
	int b_s,hrs,da,ta;
	float ans;
	
	printf("Enter The Value Of Base Salary :");
	scanf("%d",&b_s);
	printf("Enter The Value Of HRS :");
	scanf("%d",&hrs);
	printf("Enter The Value Of  DA :");
	scanf("%d",&da);
	printf("Enter The Value Of TA :");
	scanf("%d",&ta);
	ans = (hrs)*b_s/100 + (da)*b_s/100 + (ta)*b_s/100 + b_s;
	printf("ans : %.0f",ans);

	return 0;
}
