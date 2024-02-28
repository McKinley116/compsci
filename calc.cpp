//File: calc.cpp (Panther Calculator)
//Name: Brandon McKinley
//Date: 03/10/2024
//Course: CompSci 1
//Description:  This program will be a cashier calculator for the panther store that will display items, price, quantity, sales tax, etc. 
//Usage:  This program will ask the user for input, items and cost, amount paid and a table of the information.

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

int main ()
{
	std::cout << "-----Panther Express Cashier Program-----" << std::endl;
	// require user input for three items and their cost and quantity.
	//	cost per item = unit price * quantity
	std::string itmBght; 
	double itmPrice;
	int itmQnty;

	std::cin >> itmBght;
	std::cin >> itmPrice;
	std::cin >> itmQnty;

	std::cout << itmBght << " " << itmPrice << " " << itmQnty << std::endl;
	// require user to input sales tax ( between 0 and 100).
	// displays break down of items, cost, quantity. cost summary.
	// displays pretax.
	//	total before tax = sum of all three items.
	// displays w/ tax.
	//	tax = total before tax * tax rate
	//	total after tax = total cost * tax
	// askes user price paid.
	// displays change.
	//	change = total - cost
	// displays denominations. ($100, $20, $5, $1, .25, .10, .05, .01)

return 0;
}
