#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include "number.h"
#include "tools.h"

int main(){
	int choice;
	char choice2;
	char input[100];
	long int decimal;
	int result;
	size_t size;
	char bin[100];
	
	system("color F0");
	drawSBox(27, 7, 66, 9);
	gotoxy(35, 8);
	printf("Number System Converter");
	
	drawSBox(27, 10, 66, 17);
	gotoxy(31,12);
	printf("Jhon Ryan D. Ledon BSCS-1 F3");
	gotoxy(31,14);
	printf("Instructor:");
	gotoxy(33,15);
	printf("Mr. Roden J. Ugang");
	gotoxy(33,19);
    printf("Press any key to start (^v^)");
    getch();
    system("cls");
	
	MainMenu:
	system("color 06");
	system("cls");
	menu();
	drawSBox(19, 21, 66, 25);
	gotoxy(30,23);
	printf("Enter a valid choice[1-4]: ");
	gotoxy(57,23);
	
	if (scanf("%d", &choice) != 1) {
        while (getchar() != '\n');
        gotoxy(21,27);
        printf("Invalid input! Please enter an integer. \\(-_-)\n");
        gotoxy(26,28);
        printf("Press any key to continue (0v0)");
        getch();
        printf("\n\n\n\n\n\n\n");
        system("cls");
        goto MainMenu;
    }
	
	switch(choice){
		case 1:
			system("cls");
			Menu1:
			system("color 60");
			binMenu();
			
			//Check the input
			 if (scanf(" %c", &choice2) != 1) {
		        while (getchar() != '\n');
		        printf("Invalid input! Please enter a character. \\(-_-)\n");
		        printf("Press any key to continue (0v0)");
		        getch();
		        printf("\n\n\n\n\n\n\n");
		        system("cls");
		        goto Menu1;
		    }
		    
		    // if A is inputted
		    
		    // Decimal TO Binary
		    
		    //Cant convert to binary 
			switch(toupper(choice2)){
				case'A':
					system("cls");
					gotoxy(22,7);
					printf("Enter a Decimal Number:");
					
					drawSBox(21, 8, 64, 10);
    				gotoxy(23,9);
					scanf(" %s", &input);
					result = check_if_dec(input);
						
					if (result == 0){
							
						drawSBox(21, 13, 64, 15);
						gotoxy(22,12);
    					printf("Binary value:");
    						
						gotoxy(23,14);
    					printf("ERROR! INVALID VALUE                     ");
    						
    					gotoxy(27,18);
		    			printf("Press any key to continue ('^')");
						getch();
						system("cls");	
    					goto Menu1;
    				}
    					else if(result!=0){
    						//string to integer value
							decimal = atoi(input);
								
			    			//function for decimal to binary
							dec_to_bin(decimal);
								
							gotoxy(27,18);
    						printf("Press any key to continue ('^')");
							getch();
								
							system("cls");
							goto MainMenu;
						}		
				break;
						
				// if B inputted
				//binary to decimal
				
				//No correction needed
				case'B':
					system("cls");
					gotoxy(22,7);
					printf("Enter a Binary Number:");
					
					drawSBox(21, 8, 64, 10);
    				gotoxy(23,9);
					scanf(" %s", &input);
			
					size = string_size(input);
					result = bin_check(input, size);
			
					if (result == 0){
						drawSBox(21, 13, 64, 15);
						gotoxy(22,12);
    					printf("Decimal value:");
						gotoxy(23,14);
    					printf("ERROR! INVALID VALUE                     ");
    					
    					gotoxy(27,18);
		    			printf("Press any key to continue ('^')");
						getch();
						system("cls");	
    					goto Menu1;
    					
    				} else {
    					bin_to_dec(input);
					}
    				
    				//goes to main menu 
					gotoxy(27,18);
    				printf("Press any key to continue ('^')");
					getch();
					system("cls");
					goto MainMenu;
					
					break;
				default:
					gotoxy(20,21);
					printf("Invalid choice! Press any key to continue ('^')");
					getch();
					system("cls");
					goto Menu1;		
			}
			
			break;
		
		//OCTAL 	
		case 2:
			system("cls");
			Menu2:
			system("color C0");
			octMenu();
			
			//Check the input
			 if (scanf(" %c", &choice2) != 1) {
		        while (getchar() != '\n');
		        printf("Invalid input! Please enter a character. \\(-_-)\n");
		        printf("Press any key to continue (0v0)");
		        getch();
		        printf("\n\n\n\n\n\n\n");
		        system("cls");
		        goto Menu2;
		    }
		    
		    // if A is inputted
			switch(toupper(choice2)){
				case'A':
					system("cls");
					gotoxy(22,7);
					printf("Enter a Decimal Number:");
					
					drawSBox(21, 8, 64, 10);
    				gotoxy(23,9);
    				scanf("%s", &input);
    				result = check_if_dec(input);
						
					if (result == 0){
							
						drawSBox(21, 13, 64, 15);
						gotoxy(22,12);
    					printf("Octal value:");
    						
						gotoxy(23,14);
    					printf("ERROR! INVALID VALUE                     ");
    						
    					gotoxy(27,18);
		    			printf("Press any key to continue ('^')");
						getch();
						system("cls");	
    					goto Menu2;
    				}
    					else if(result!=0){
    						//string to integer value
							decimal = atoi(input);
								
			    			//function for decimal to binary
							dec_to_oct(decimal);
								
							gotoxy(27,18);
    						printf("Press any key to continue ('^')");
							getch();
								
							system("cls");
							goto MainMenu;
						}		
					
					break;
					
				// if B inputted
				//Octal to decimal
				
				case'B':
					system("cls");
					gotoxy(22,7);
					printf("Enter an Octal Number:");
					
					drawSBox(21, 8, 64, 10);
    				gotoxy(23,9);
    				scanf(" %s", &input);
					result = oct_check(input);
					if (result == 0){
						
						drawSBox(21, 13, 64, 15);
						gotoxy(22,12);
    					printf("Decimal value:");
						gotoxy(23,14);
    					printf("ERROR! INVALID VALUE                     ");
    					
    					gotoxy(27,18);
		    			printf("Press any key to continue ('^')");
						getch();
						system("cls");	
    					goto Menu2;
    					
					} else {
						oct_to_dec(input);
					}

    				
    				gotoxy(27,18);
    				printf("Press any key to continue ('^')");
					getch();
					system("cls");
					goto MainMenu;
					
					break;
				default:
					gotoxy(20,21);
					printf("Invalid choice! Press any key to continue ('^')");
					getch();
					system("cls");
					goto Menu2;		
			}
			
			break;
		
			
		case 3:
			system("cls");
			Menu3:
			system("color 5F");
			hexMenu();
			
    		 if (scanf(" %c", &choice2) != 1) {
		        while (getchar() != '\n');
		        printf("Invalid input! Please enter a character. \\(-_-)\n");
		        printf("Press any key to continue (0v0)");
		        getch();
		        printf("\n\n\n\n\n\n\n");
		        system("cls");
		        goto Menu3;
		    }
		    
		    // if A is inputted
			switch(toupper(choice2)){
				case'A':
					system("cls");
					gotoxy(22,7);
					printf("Enter a Decimal Number:");
					
					drawSBox(21, 8, 64, 10);
    				gotoxy(23,9);
    				scanf("%s", &input);
    				result = check_if_dec(input);
						
					if (result == 0){
							
						drawSBox(21, 13, 64, 15);
						gotoxy(22,12);
    					printf("Hexadecimal value:");
    						
						gotoxy(23,14);
    					printf("ERROR! INVALID VALUE                     ");
    						
    					gotoxy(27,18);
		    			printf("Press any key to continue ('^')");
						getch();
						system("cls");	
    					goto Menu3;
    				}
    					else if(result!=0){
    						//string to integer value
							decimal = atoi(input);
								
			    			//function for decimal to binary
							dec_to_hex(decimal);
								
							gotoxy(27,18);
    						printf("Press any key to continue ('^')");
							getch();
								
							system("cls");
							goto MainMenu;
						}		
					
					
					
					break;
					
				// if B inputted
				case'B':
					system("cls");
					gotoxy(22,7);
					printf("Enter a Hexadecimal Number:");
					
					drawSBox(21, 8, 64, 10);
    				gotoxy(23,9);
    				scanf(" %s", &input);
					result = hex_check(input);
					if (result == 0){
						
						drawSBox(21, 13, 64, 15);
						gotoxy(22,12);
    					printf("Decimal value:");
						gotoxy(23,14);
    					printf("ERROR! INVALID VALUE                     ");
    					
    					gotoxy(27,18);
		    			printf("Press any key to continue ('^')");
						getch();
						system("cls");	
    					goto Menu3;
    					
					} else {
						hex_to_dec(input);
					}
    				
    				gotoxy(27,18);
    				printf("Press any key to continue ('^')");
					getch();
					system("cls");
					goto MainMenu;
					
					break;
				default:
					gotoxy(20,21);
					printf("Invalid choice! Press any key to continue ('^')");
					getch();
					system("cls");
					goto Menu3;		
			}
			
			
			break;
			
		case 4:
			system("color E0");
			system("cls");
			drawSBox(21, 6, 64, 10);
			gotoxy(26,8);
			printf("Thank you for using my program! <3");
			printf("\n\n\n\n\n\n\n\n\n\n\n");
			getch();
			return 0;
			
		default:
			gotoxy(20,27);
			printf("Invalid choice! Press any key to continue ('^')");
			getch();
			system("cls");
			goto MainMenu;
			
	}

}
