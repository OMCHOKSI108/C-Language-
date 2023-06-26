#include <stdio.h>
#include <string.h>
 int main(){
    int i;
	char a[100]; 
    printf("Enter Input : ");
    scanf("%s",a);
    
 if(a[0]>='a' && a[0]<='z'){
        a[0]-=32;
   	}
   	
      
    for(i=1;a[i];i++)  
    {
        if(a[i]>=65 && a[i]<=90)
         a[i]+=32;
       
 	}
 	
 	printf("Titlecase : %s",a);
     return 0;
}

