#include "seating_a.h" //including the header file for seating type a 
#include<iostream>

using namespace std;

seating_a::seating_a() 	//constructor of the class, which accepts the number of tickets sold and the price of the platinum seats, then calculates the total sales for Platinum tickets
{
	cout << "\nTotal Sales Counter for Type A - Platinum Seats selected" <<endl;
	
	cout << "Enter the Number of Platinum Tickets Sold: ";
	cin >> platinumTicketCount;
	
	cout << "\nEnter the Price of Platinum Tickets: ";
	cin >> platinumTicketPrice;
	
	totalSales = platinumTicket (platinumTicketCount, platinumTicketPrice); //Function call for calculating total sale of platinum tickets (seating type A)
	
	cout << "\nThe Total Ticket Sales for Platinum Tickets (Seating Type A) in Euros is: " << totalSales << endl;		
}

double seating_a::platinumTicket (double count, double price)	//Function definition for sale of platinum tickets (seating type A)
	{
		totalSales= count*price;	//Total Sales Calculation for platinum ticket
		return totalSales; //return statement to display the sales value to the user or return the value for further calculations	
	}