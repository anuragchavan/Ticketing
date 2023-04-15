#include "seating_b.h"  //including the header file for seating type b
#include<iostream>
using namespace std;

seating_b::seating_b() //constructor of the class, which accepts the number of tickets sold and the price of the gold seats, then calculates the total sales for Gold tickets
{
	cout << "\nTotal Sales Counter for Type B - Gold Seats selected" << endl;
	
	cout << "Enter the Number of Gold Tickets Sold: ";
	cin >> goldTicketCount;
	
	cout << "\nEnter the Price of Gold Tickets: ";
	cin >> goldTicketPrice;
	
	totalSales = goldTicket (goldTicketCount, goldTicketPrice); //Function call for calculating sale of gold tickets (seating type B)

	cout << "\nThe Total Ticket Sales for Gold Tickets (Seating Type B) in Euros is: " << totalSales << endl;		
}

double seating_b::goldTicket (double count, double price)		//Function definition for sale of gold tickets (seating type B)
	{
		totalSales = count*price;	//Total Sales Calculation for gold ticket
		return totalSales;	//return statement to display the sales value to the user or return the value for further calculations
	}