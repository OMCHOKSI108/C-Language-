
#include <stdio.h>
#include <string.h>
 int main(){
    char a[1000];  
    int i;
 
    printf("Enter  the string : ");
    gets(a);
    
 
     
    for(i=0;a[i];i++)  
    {
        if(a[i]>=65 && a[i]<=90)
         a[i]+=32;
        else if(a[i]>=97 && a[i]<=122)
         a[i]-=32;
 	}
 	
     
    printf("Togglecase : %s\n",a);
 
 
    return 0;
}

