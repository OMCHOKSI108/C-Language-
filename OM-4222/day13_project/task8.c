#include<stdio.h>
int main(){    
int n,i,m=0,a=0;    
printf("Enter the number :");    
scanf("%d",&n);    
m=n/2;    
for(i=2;i<=m;i++)    
{    
if(n%i==0)    
{    
printf(" this Number is not prime");    
a=1;    
break;    
}    
}    
if(a ==0)    
printf("Number is prime");     
return 0;  
 }    