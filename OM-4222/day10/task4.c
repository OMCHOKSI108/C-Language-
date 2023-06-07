#include<stdio.h>
int main(){
char a;

printf("Enter A : ");
scanf("%c",&a);

switch(a){

case 'M':
printf("Monday");
break;

case 'T':
printf("Tuseday");
break;

case 'W':
printf("Wednesday");
break;

case 'h':
printf("Thursday");
break;

case 'F':
printf("Friday");
break;

case 'S':
printf("Saturday");
break;

case 'u':
printf("Sunday");
break;

default :
	printf(" Invalid");
	break;

}
         return 0;
}
