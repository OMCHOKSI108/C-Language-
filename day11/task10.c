#include <stdio.h>

int main() {
    int n,f=1;

    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 1) {
        f= f*n;
        n--;
    }
	printf("Factorial: %d\n", f);
	return 0;
}
