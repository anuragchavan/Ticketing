#include "seating_c.h"  //including the header file for seating type c
#include<iostream>
using namespace std;

seating_c::seating_c() //constructor of the class, which accepts the number of tickets sold and the price of the silver seats, then calculates the total sales for Silver tickets
{
	cout << "\nTotal Sales Counter for Type C - Silver Seats selected"<<endl; 
	
	cout << "Enter the Number of Silver Tickets Sold: ";
	cin >> silverTicketCount;
	
	cout << "\nEnter the Price of Silver Tickets: ";
	cin >> silverTicketPrice;
	
	totalSales = silverTicket (silverTicketCount, silverTicketPrice); //calling function for calculating sale of silver tickets (seating type C)
														
	cout << "\nThe Total Ticket Sales for Silver Tickets (Seating Type C) in Euros is: " << totalSales << endl;		
}

double seating_c::silverTicket (double count, double price)	//Function definition for sale of silver tickets (seating type C)
	{
		totalSales = count*price;	//Total Sales Calculation for silver ticket
		return totalSales;	//return statement to display the sales value to the user or return the value for further calculations
	}