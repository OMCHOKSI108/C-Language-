#include <stdio.h>
#include <string.h>
 int main(){
    char a; 
    printf("Enter Input : ");
    scanf("%c",&a);
    
 if(a>='A' && a<='z'){
        a+=32;
   	}
 	printf("Lowercase : %c",a);
     return 0;
}

