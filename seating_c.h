#ifndef SEATING_C_H
#define SEATING_C_H

class seating_c
{
	public:
		seating_c();  //Contructor for sale of silver tickets (seating type C)
		double silverTicket (double count, double price);     //Function for calculating the total ticket sales

	protected:
		double silverTicketPrice, silverTicketCount, totalSales;    //Protected variables for calculating total sales
};

#endif