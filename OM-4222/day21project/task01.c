#include <stdio.h>
#include <string.h>
  int main(){
    char s[100];
    printf("Enter Input :");
    scanf("%s",s);
  
    int a = 0;
    int b = strlen(s) - 1;
  
   
    while (b > a) {
        if (s[a++] != s[b--]) {
            printf("%s Not Palindrome\n", s);
            return 0;
        
        }
    }
  
    printf("%s Is  Palindrome\n", s);
  
    return 0;
}
