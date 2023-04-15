/*-----------------------------------------------
* This C++ program computes the total ticket sales of a concert.
* There are three types of seating’s:  A, B, and C.
* The program accepts the number of tickets sold and the price of a ticket for each of the three types of seats.
* The program allows the user to re-run or quit after invalid input or successful completion 

Formulae use -
Total Sales = Price of Ticket * Quantity of Tickets sold

Each Seating Type consists of a header file and a cpp file
-----------------------------------------------*/

#include <iostream>  //include statement for the standard input/output library of C++
#include <string>	//include statement for the access to use string functions

//including header files of all the seating types
#include "seating_a.h"
#include "seating_b.h"
#include "seating_c.h"

using namespace std; //allows to use standard functions and objects like cout, cin, etc. without the need for the namespace prefix

int main () {
	
    char seating_char; //Declaring the character used to enter for the seating type
    
    char prompt; //Declaring the character used to quit or re-run the program

    //welcome message
    cout << "Welcome to CVT Concert\n\n";

    // using do-while loop to allow the user to compute multiple concerts or quit the session
    
    
    do {
    	
        //displaying menu of options for the user
        
        cout << "Select the Seating type: \n\n";
        cout << "Enter A for Platinum Tickets.\n"
             << "Enter B for Gold Tickets.\n"
             << "Enter C for Silver Tickets.\n\n";

        cout << "Enter Your Choice Here: ";
        
        cin >> seating_char;

        //checking user's choice and calling corresponding function
        
        /*The if-else statement in the code checks the user's choice of seating type, 
		entered as a character, and calls the corresponding function for that seating type.*/
		
		
        if(seating_char == 'A' || seating_char == 'a') {
            seating_a();
        } 
		else if(seating_char == 'B' || seating_char == 'b') {
            seating_b();
        } 
		else if(seating_char == 'C' || seating_char == 'c') {
            seating_c();
        } 
		else {
			/*If the user enters any other character besides 'A', 'a', 'B', 'b', 'C', or 'c', 
			an error message is displayed stating that the input is invalid.*/
			
            cout << "Invalid Input! Please choose the correct seating type.\n" << endl;     

        }
        
        //prompting the user if they want to quit or restart the operation
        
        cout << "\nEnter Q to quit or Enter any other key to compute another concert.\n" << endl;
        
        cin >> prompt; //getting user's choice to restart or quit the program

    } 
	while(prompt !='q' && prompt !='Q'); //Checking if the prompt is q to quit the program otherwise the program will re-run
	
    cout<< "\nThanks for choosing CVT Concert. Have a great day !"; //exit message
    
    return 0; //indicating successful execution of the program

}
