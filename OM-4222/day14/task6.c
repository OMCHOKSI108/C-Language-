#include<stdio.h>
int main(){
	int r,c;
	for(c=5;c>=1;c--){
		
		for(r=5;r>=c;r--){
			printf("%d",c);
			
			
		}
		printf("\n");
	}
	
	return 0;
}