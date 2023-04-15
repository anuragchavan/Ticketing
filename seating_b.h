#ifndef SEATING_B_H
#define SEATING_B_H

class seating_b
{
	public:
		seating_b(); //Contructor for sale of gold tickets (seating type B)
		double goldTicket (double count, double price);     //Function for calculating the total ticket sales

	protected:
		double goldTicketPrice, goldTicketCount, totalSales;    //Protected variables for calculating total sales
};

#endif