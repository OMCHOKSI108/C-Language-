#include<stdio.h>
int main(){
	int i=2000;
	int n=3000;
	
	while(i<=n){
		while(i%4==0){
			printf("%d\n",i);
			i++;
		}
		i++;
	}
		return 0;
	}
