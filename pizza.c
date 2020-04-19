//
//  pizza.c
//  Pizza Inventory
//
//  Created by Alyssia on 1/29/20.
//  Class #102 Section #03
//
//	Description: This program is a user friendly inventory for pizza. It provides the current inventory of pizza as well as the final inventory of pizza after a user has placed their order. 
//
//
//

#include <stdio.h>

int main()
{
//Initializing the variables according to the assignment requirements.
	int choice = 0, howMany = 0, cheesePizza = 0, pepperoniPizza = 0, sausagePizza = 0, veggiePizza = 0, unitOfDough = 50, unitOfSauce = 50, unitOfCheese = 50, unitOfPepperoni = 50, unitOfSausage = 50, unitOfGreenPepper = 50, unitOfOlives = 50, unitOfMushroom = 50;
//Printing an introductory message. 
	printf("Welcome to the Pizza Ordering and Inventory Tracking System!\n\n");
//Printing the initial inventory for the pizza establishment.
	printf("Current inventory:\nDough: %d\nSauce: %d\nCheese: %d\nPepperoni: %d\nSausage: %d\nGreen Pepper: %d\nOlives: %d\nMushroom: %d\n\n", unitOfDough, unitOfSauce, unitOfCheese, unitOfPepperoni, unitOfSausage, unitOfGreenPepper, unitOfOlives, unitOfMushroom);
//Asking the user to choose how many pizzas to order.
	printf("How many pizzas would you like to order?\nHow many (limit of: 1 - 10): ");
	scanf("%d", &howMany);
//This will limit the choices to 1-10.
	if(howMany > 0 && howMany <= 10)
		{
			//Asking the user which type of pizza they would like to order.
			printf("What kind of Pizza do you want to order?\n1. Cheese Pizza\n2. Pepperoni Pizza\n3. Sausage Pizza\n4. Veggie Pizza\n5. None\n\nYour Choice: ");
			scanf("%d", &choice);
			switch(choice)
				{
					case 1:
					{	//If the user selects 1 for cheesePizza, it adds howMany to cheesePizza and subtracts each unit from the corresponding unit. 
						cheesePizza = cheesePizza + howMany;
						unitOfDough = unitOfDough - howMany;
						unitOfSauce = unitOfSauce - howMany;
						unitOfCheese = unitOfCheese - (howMany * 2);
						break;
					}	
					case 2:
					{	//If the user selects 1 for pepperoniPizza, it adds howMany to pepperoniPizza and subtracts each unit from the corresponding unit.
						pepperoniPizza = pepperoniPizza + howMany;
						unitOfDough = unitOfDough - howMany;
						unitOfSauce = unitOfSauce - howMany;
						unitOfCheese = unitOfCheese - howMany;
						unitOfPepperoni = unitOfPepperoni - howMany;
						break;
					}
					case 3:
					{	//If the user selects 1 for sasaugePizza, it adds howMany to sasaugePizza and subtracts each unit from the corresponding unit.
						sausagePizza = sausagePizza + howMany;
						unitOfDough = unitOfDough - howMany;
						unitOfSauce = unitOfSauce - howMany;
						unitOfCheese = unitOfCheese - howMany;
						unitOfSausage = unitOfSausage - howMany;
						break;
					}
					case 4:
					{	//If the user selects 1 for veggiePizza, it adds howMany to veggiePizza and subtracts each unit from the corresponding unit.
						veggiePizza = veggiePizza + howMany;
						unitOfDough = unitOfDough - howMany;
						unitOfSauce = unitOfSauce - howMany;
						unitOfCheese = unitOfCheese - howMany;
						unitOfGreenPepper = unitOfGreenPepper - howMany;
						unitOfOlives = unitOfOlives - howMany;
						unitOfMushroom = unitOfMushroom - howMany;
						break;
					}
					case 5:
					{	//If the user selects None, this message will appear. 
						printf("You did not order any pizza...\n\n");
						break;
					}
					default:
					{	//If the user types an invalid selection, this error message will appear. 
						printf("You entered an invalid pizza selection...\n\n");
						break;
					}
				}


		}
	else
		{	//If the user enters a quantity less than 1 and greater than 10, this error message will appear. 
			printf("You entered an invalid quantity...\n\n");
		}
	//Displaying how many pizzas the user ordered. 
	printf("You ordered:\nCheese Pizza: %d\nPepperoni Pizza: %d\nSausage Pizza: %d\nVeggie Pizza: %d\n\n", cheesePizza, pepperoniPizza, sausagePizza, veggiePizza);
	//Displaying the final inventory after accounting for the pizzas ordered. 
	printf("Final inventory:\nDough: %d\nSauce: %d\nCheese: %d\nPepperoni: %d\nSausage: %d\nGreen Pepper: %d\nOlives: %d\nMushroom: %d\n\n", unitOfDough, unitOfSauce, unitOfCheese, unitOfPepperoni, unitOfSausage, unitOfGreenPepper, unitOfOlives, unitOfMushroom);
	
	return 0;
}
