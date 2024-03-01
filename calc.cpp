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
#include <set>
#include <string>

int main ()
{
	// require user input for three items and their cost and quantity.
	std::cout << "$-----Panther Express Cashier Program-----$" << std::endl;
	std::string itmBght1; 
	double itmPrice1;
	int itmQnty1;
	std::cin >> itmBght1;
	std::cout << "Unit name: " << itmBght1 << std::endl; 
	std::cin >> itmPrice1;
	std::cout << " Unit price for " << itmBght1 << " is: " << itmPrice1 << std::endl;
	std::cin >> itmQnty1;
	std::cout << "Unit quantity for " << itmBght1 << " is: " << itmQnty1 << std::endl;
	std::cout << std::endl;

	std::string itmBght2;
	double itmPrice2;
	int itmQnty2;
	std::cin >> itmBght2; 
	std::cin >> itmPrice2;
	std::cin >> itmQnty2;
	std::cout << "Unit name: " << itmBght2 << std::endl; 
	std::cout << " Unit price for " << itmBght2 << " is: " << itmPrice2 << std::endl;
	std::cout << "Unit quantity for " << itmBght2 << " is: " << itmQnty2 << std::endl;
	std::cout << std::endl;

	std::string itmBght3;
	double itmPrice3;
	int itmQnty3;
	std::cin >> itmBght3;
	std::cin >> itmPrice3;
	std::cin >> itmQnty3;
	std::cout << "Unit name: " << itmBght3 << std::endl;
	std::cout << "Unit price for " << itmBght3 << " is: " << itmPrice3 << std::endl;
	std::cout << "Unit quantity for " << itmBght3 << " is: " << itmQnty3 << std::endl;
	std::cout << std::endl;

	// require user to input sales tax ( between 0 and 100).
	int slsTax (slsTax > 0 && slsTax < 100);

	std::cin >> slsTax;
	std::cout << "Tax rate (in whole numbers): " << slsTax << std::endl;
	std::cout << std::endl;

	// displays break down of items, cost, quantity. cost summary.
	// cost per item = unit price * quantity
	double ttlCost1 = itmPrice1 * itmQnty1;
	double ttlCost2 = itmPrice2 * itmQnty2;
	double ttlCost3 = itmPrice3 * itmQnty3;
	std::cout << "$-----Cost Breakdown-----$" << std::endl;
	std::cout << "Item" << std::setw(15) << "Price" << std::setw(15) << "Quantity" << std::setw(15) << "Cost" << std::endl;
	std::cout << itmBght1 << std::setw(15) << itmPrice1 << std::setw(15) << itmQnty1 << std::setw(15) << ttlCost1 << std::endl;
	std::cout << itmBght2 << std::setw(15) << itmPrice2 << std::setw(15) << itmQnty2 << std::setw(15) << ttlCost2 << std::endl;
	std::cout << itmBght3 << std::setw(15) << itmPrice3 << std::setw(15) << itmQnty3 << std::setw(15) << ttlCost3 << std::endl;
	std::cout << std::endl;

	// displays pretax.
	// total before tax = sum of all three items.
	double preTotal = ttlCost1 + ttlCost2 + ttlCost3;
	std::cout << "$-----Cost Pretax-----$" << std::endl;
	std::cout << preTotal << std::endl;
	std::cout << std::endl;

	// displays w/ tax.
	//	tax = total before tax * tax rate
	//	total after tax = total cost * tax
	std::cout << "$-----Cost w/ Tax-----$" << std::endl;
	double txRate = slsTax / 2.0;
	double tax = preTotal * txRate;
	double total = preTotal * tax;
	std::cout << "$"<< total << std::endl;
	std::cout << std::endl;

	// asks user price paid.
	double moneyPd;
	std::cout << "$-----How much money do you have?-----$" << std::endl;
	std::cin >> moneyPd;
	std::cout << moneyPd << std::endl;

	// displays change.
	//	change = total - cost
	double change = moneyPd - total;
	std::cout << "$-----Change-----$" << std::endl;
	std::cout << change << std::endl;
	std::cout << "--------------------";
	std::cout << std::endl;

	// displays denominations of %100, $20, $5, $1, .25, .10, .05, .01).
	const int DOLLAR = 100;
	const int QUARTER = 25;
	const int DIME = 10;
	const int NICKEL = 5;
	const int PENNY = 1;
	std::cout << "Denominations" << std::endl;
	
return 0;
}