#ifndef SEATING_A_H //(if not defined) checks if SEATING_A_H is previously defined
#define SEATING_A_H //defines identifier SEATING_A_H in #ifndef if it is not defined previously

class seating_a
{
	public:
		seating_a();  //Contructor for sale of platinum tickets (seating type A)
		double platinumTicket (double count, double price);     //Function for calculating the total ticket sales

	protected:
		double platinumTicketPrice, platinumTicketCount, totalSales;    //Protected variables for calculating total sales
};

#endif