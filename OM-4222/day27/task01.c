#include<stdio.h>
#include<string.h>

struct Student{
	int id;
	char name[20];
	int age;
	char course[20];
	char school[20];
	char city[20];
    int std;
	
};
int main(){
  int n;
  printf("Enter Student Number   :");
  scanf("%d",&n);	
  struct Student stu[n];
  int i;
    for(i=0;i<n;i++){
    	printf("Enter Student [%d] Id : ",i);
    	scanf("%d",&stu[i].id);
    	printf("\n");
    	
    	printf("Enter Student [%d] Name : ",i);
    	scanf("%s",stu[i].name);
    	printf("\n");
    	printf("Enter Student [%d] Course : ",i);
    	scanf("%s",stu[i].course);
    	printf("\n");
    	printf("Enter Student [%d] Std : ",i);
    	scanf("%d",&stu[i].std); 
    	printf("\n");
    	printf("Enter Student [%d] Age : ",i);
    	scanf("%d",&stu[i].age);
    	printf("\n");
    	printf("Enter Student [%d] City : ",i);
    	scanf("%s",stu[i].city);
    	printf("\n");
    	
	}
	 for(i=0;i<n;i++){
    printf("Student [%d]..  \n",i+1);
    	printf("Id      :   %d",stu[i].id);
    printf("\n");
    	printf("Name    :   %s",stu[i].name);
    printf("\n");	
    
    	printf("Course  :   %s",stu[i].course);
    printf("\n");	
    
    	printf("Standard:   %d",stu[i].std); 
    	
    printf("\n");
    	printf("Age     :   %d",stu[i].age);
    printf("\n");	
    
    	printf("City    :   %s",stu[i].city);
    printf("\n\n");	
    	
	}
	
	
	
	return 0;
} 
  
