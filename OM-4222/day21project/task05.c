#include <stdio.h>
#include <string.h>
 int main(){
    char a; 
    printf("Enter Input : ");
    scanf("%c",&a);
    
 if(a>='a' && a<='z'){
        a-=32;
   	}
 	printf("Upercase : %c",a);
     return 0;
}

