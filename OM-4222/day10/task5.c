#include <stdio.h>

int main() {
    int units;
    float total_bill;
     
	printf("Enter the electricity units consumed: ");
    scanf("%d", &units);

    
    if (units <= 50) {
        total_bill = units * 0.50;
    } else if (units <= 150) {
        total_bill = 50 * 0.50 + (units - 50) * 0.75;
    } else if (units <= 250) {
        total_bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    } else {
        total_bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }

    
    total_bill += total_bill * 0.20;

    
    printf("Total electricity bill: Rs. %.2f\n", total_bill);

    return 0;
}
