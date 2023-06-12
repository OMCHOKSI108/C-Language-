#include <stdio.h>

int main(){
    int n,i,f = 0, s = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series Is: %d %d ", f,s);

    for ( i = 3; i <= n; i++) {
        next = f + s;
        printf("%d ", next);
        f = s;
        s = next;
    }

    return 0;
}
