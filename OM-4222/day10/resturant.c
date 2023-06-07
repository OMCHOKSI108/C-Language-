#include<stdio.h>
int main(){
	int a;
	printf("\t\t\t\t\t\     WELCOME TO OUR MIDDILE MIDDILE SEATER HOTEL \n\n\n");
	printf("  Press 1. For  Menu \n  Press 2. for  Help\n\n  ");
	scanf("%d",&a);
	switch(a){
		
		case 1:
		printf("\n\nThank You For Chosing Menu....\n\n    Starter\n\nPress.....\n\n  1.Masala Dhosa       = 89/-\n  2.Panir Masala Dhosa = 100/-\n  3.Sandwitch          = 60/-\n  4.Pizza              = 159/-\n  5.Burger             = 59/-\n  6.For Exit \n\n" );
			scanf("%d",&a);
			
			
			switch(a){
				case 1:
				printf("\n\tYour Masala Dhosa Orderd created succesfully... ");
				break;
				
				case 2:
				printf("\n\tYour Panir Masala Dhosa Orderd Panir Masala Dhosa created succesfully... ");
				break;
				
				case 3:
				printf("\n\tYour Sandwitch Orderd succesfully... ");
				break;
				
			    case 4:
				printf("\n\tYour Pizza Orderd succesfully... ");
				break;
				
				case 5:
				printf("\n\tYour Burger Orderd succesfully... ");
				break;
				case 6:
				printf("\n\tYou exited succesfully... ");
				break;
			    default:
                printf("\n\tInvalid! input");			
			
			}
			
		printf("\n\n\n    Full Course\n\nPress.....\n\n  1.Panir Butter Masala   =150/-\n  2.Mixed Veg       \t  =160/-\n  3.Panir Angara          =179/-\n  4.Khichadi-kadhi        =120/- \n  5.For Exit\n\n\n ");
		scanf("%d",&a);
		switch (a){
			
				case 1:
				printf("\n\tYour Panir Butter Masala Orderd succesfully...\n\n\t......Thank You Keep Visit Again...... ");
				break;
				
				case 2:
				printf("\n\tYour Mixed Veg Orderd succesfully...\n\n\t......Thank You Keep Visit Again...... ");
				break;
				
			    case 3:
				printf("\n\tYour Panir Angara Orderd succesfully...\n\n\t......Thank You Keep Visit Again...... ");
				break;
				
				case 4:
				printf("\n\tYour Khichadi-kadhi Orderd succesfully...\n\n\t......Thank You Keep Visit Again...... ");
				break;
				case 5:
				printf("\n\tYou exited succesfully...\n\n\t......Thank You Keep Visit Again...... ");
				break;
			    default:
                printf("\n\tInvalid! input");			
			break;
			}
			break;
		
		    case 2:
			printf("\n\n Plese Checkout Our Website For More Help... ");
			break;
		
		
		
		
	}
	
	return 0;
}