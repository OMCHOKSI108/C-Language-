#include<stdio.h>
int main(){
char a;

printf("Enter A : ");
scanf("%c",&a);

switch(a){

case 'J':
printf("January");
break;

case 'F':
printf("Febuary");
break;

case 'M':
printf("March");
break;

case 'A':
printf("April");
break;

case 'Y':
printf("May");
break;

case 'u':
printf("June");
break;

case 'l':
printf("July");
break;

case 'g':
printf("August");
break;

case 'S':
printf("September");
break;

case 'O':
printf("October");
break;

    case 'N':
printf("November");
break;

case 'D':
printf("Dicember");
break;

default :
	printf("invalid");
	break;
}
         
		 
		 return 0;
}
