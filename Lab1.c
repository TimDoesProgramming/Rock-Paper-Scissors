#include <stdio.h>
	//declaring functions
	char GetUserInput();
        int FindWinner(char user_choice,char computer_choice);
        char GetComputerChoice();
	int getchar(void);


int main(){
	//declaring variables
	char quit;
	int result;	
	char uInput;
	char cInput;	
	
	//main loop calls all functions and
	//keeps the program going until the user quits
	do{

	printf("Welcome to the rock paper scissors, please follow the prompt \n");

	uInput = GetUserInput();
	cInput = GetComputerChoice();

	result = FindWinner(uInput,cInput);
	
	//displays results for user
	if(result == 0){
	printf("It's a tie!\n ");
	}
	else if(result == -1){
	printf("You lost!\n ");
	}
	else{
	printf("You won!\n ");
	}


	printf("If you want to quit enter q \n");
	//flussd the getchar
	while ((getchar()) != '\n'); 

	quit = getchar();	
	}while(quit != 'q');


	return 0;

	    
}
//Function: GetUserInput
//Returns: Char
//Params: N/A
//purpose: takes user input and returns it.
char GetUserInput(){
        char input;

        do{
        printf("please enter a lowercase p, r or s \n");
        input = getchar();
        }while(input !=  'p' && input != 'r' && input !='s');

        return input;
        }
 
//Function: FindWinner
//Returns: int
//
//Params: user_choice, which comes from GetUserInput()
//and computer_choice which comes from GetComputerInput()
//
//purpose: compares the input of the computer and the 
//person playing to output who won in the form of a number.
//-1 means the player lost, 0 is a tie and 1 is a win. 

 int FindWinner(char user_choice,char computer_choice){
        if(user_choice == 'p' && computer_choice == 'p'){
        return 0;
        }
        if(user_choice == 'p' && computer_choice == 's'){
        return -1;
        }
        if(user_choice == 'p' && computer_choice == 'r'){
        return 1;
        }
        if(user_choice == 'r' && computer_choice == 'p'){
        return -1;
        }
        if(user_choice == 'r' && computer_choice == 's'){
        return 1;
        }
        if(user_choice == 'r' && computer_choice == 'r'){
        return 0;
        }
        if(user_choice == 's' && computer_choice == 'p'){
        return 1;
        }
        if(user_choice == 's' && computer_choice == 's'){
        return 0;
        }
        if(user_choice == 's' && computer_choice == 'r'){
        return -1;
        }


        }
//Function: GetComputerInput
//Returns: Char
//Params: N/A
//
//purpose: randomly generates a RPS throw for 
//the user to play against
//
 char GetComputerChoice(){

        int randomChoice;
        char prs;

        randomChoice = (rand()%3 );

        if(randomChoice == 0){
        prs = 'p';
        }

        else if(randomChoice == 1){
        prs = 'r';
        }

        else{
        prs = 's';
        }

        return prs;
        }


