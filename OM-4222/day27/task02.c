#include<stdio.h>
#include<string.h>

struct Employee{
	int id;
	char name[20];
	int age;
	char role[20];
	char company_name[20];
	char city[20];
    int expirence;
	
};
int main(){
  int n;
  printf("Enter Employee Number   :");
  scanf("%d",&n);	
  struct Employee emp[n];
  int i;
    for(i=0;i<n;i++){
    	printf("Enter Employee [%d] Id : ",i+1);
    	scanf("%d",&emp[i].id);
    	
    	printf("Enter Employee [%d] Name : ",i+1);
    	scanf("%s",emp[i].name);
    	
    	printf("Enter Employee [%d] Role : ",i+1);
    	scanf("%s",emp[i].role);
    	
		printf("Enter Employee [%d] Expirence : ",i+1);
    	scanf("%d",&emp[i].expirence); 
    	
		printf("Enter Employee [%d] Age : ",i+1);
    	scanf("%d",&emp[i].age);
    	
		printf("Enter Employee [%d] City : ",i+1);
    	scanf("%s",emp[i].city);
    	
		printf("Enter Employee [%d] Company Name : ",i+1);
    	scanf("%s",emp[i].company_name);
    	
		printf("\n");
    	
	}
	 for(i=0;i<n;i++){
    printf("\nEmployee [%d].....  \n",i+1);
    	printf("Id              :   %d",emp[i].id);
    printf("\n");
    	printf("Name            :   %s",emp[i].name);
    printf("\n");	
    
    	printf("Role            :   %s",emp[i].role);
    printf("\n");	
    
    	printf("Expirence       :   %d",emp[i].expirence); 
    	
    printf("\n");
    	printf("Age             :   %d",emp[i].age);
    printf("\n");	
    
    	printf("City            :   %s",emp[i].city);
    printf("\n");	
    
    	printf("Company Name    :   %s",emp[i].company_name);
    printf("\n\n");	
    	
	}
	
	
	
	return 0;
} 
  
