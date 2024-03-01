//File: calc.cpp (Panther Calculator)
//Name: Brandon McKinley
//Date: 03/10/2024
//Course: CompSci 1
//Description:  This program will be a cashier calculator for the panther store that will display items, price, quantity, sales tax, etc. 
//Usage:  This program will ask the user for input, items and cost, amount paid and a table of the information.

#include <cstdio>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <ostream>
#include <string>

int main ()
{
	std::cout << "-----Panther Express Cashier Program-----" << std::endl;
	// require user input for three items and their cost and quantity.
	//	cost per item = unit price * quantity
	std::string itmBght1; 
	double itmPrice1;
	int itmQnty1;
	std::cin >> itmBght1;
	std::cin >> itmPrice1;
	std::cin >> itmQnty1;
	std::cout << "Unit name: " << itmBght1 << std::endl; 
	std::cout << " Unit price for " << itmBght1 << " is: " << itmPrice1 << std::endl;
	std::cout << "Unit quantity for " << itmBght1 << " is: " << itmQnty1 << std::endl;

	std::string itmBght2;
	double itmPrice2;
	int itmQnty2;
	std::cin >> itmBght2; 
	std::cin >> itmPrice2;
	std::cin >> itmQnty2;
	std::cout << "Unit name: " << itmBght2 << std::endl; 
	std::cout << " Unit price for " << itmBght2 << " is: " << itmPrice2 << std::endl;
	std::cout << "Unit quantity for " << itmBght2 << " is: " << itmQnty2 << std::endl;

	std::string itmBght3;
	double itmPrice3;
	int itmQnty3;
	std::cin >> itmBght3;
	std::cin >> itmPrice3;
	std::cin >> itmQnty3;
	std::cout << "Unit name: " << itmBght3 << std::endl;
	std::cout << " Unit price for " << itmBght3 << " is: " << itmPrice3 << std::endl;
	std::cout << "Unit quantity for " << itmBght3 << " is: " << itmQnty3 << std::endl;


	// require user to input sales tax ( between 0 and 100).
	int slsTax (slsTax > 0 && slsTax < 100);
	std::cin >> slsTax;
	std::cout << "Tax rate (in whole numbers): " << slsTax << std::endl;
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
