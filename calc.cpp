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

	std::cout << "Unit name: " << itmBght1;
	std::cin >> itmBght1;	
	std::cout << "Unit price for " << itmBght1 << " is: " << itmPrice1;
	std::cin >> itmPrice1;	
	std::cout << "Unit quantity for " << itmBght1 << " is: " << itmQnty1; 	
	std::cin >> itmQnty1;
	std::cout << std::endl;

	std::string itmBght2;
	double itmPrice2;
	int itmQnty2;
	std::cout << "Unit name: " << itmBght2; 
	std::cin >> itmBght2; 
	std::cout << "Unit price for " << itmBght2 << " is: " << itmPrice2;
	std::cin >> itmPrice2;
	std::cout << "Unit quantity for " << itmBght2 << " is: " << itmQnty2;
	std::cin >> itmQnty2;
	std::cout << std::endl;

	std::string itmBght3;
	double itmPrice3;
	int itmQnty3;
	std::cout << "Unit name: " << itmBght3;
	std::cin >> itmBght3;	
	std::cout << "Unit price for " << itmBght3 << " is: " << itmPrice3;
	std::cin >> itmPrice3;
	std::cout << "Unit quantity for " << itmBght3 << " is: " << itmQnty3;
	std::cin >> itmQnty3;
	std::cout << std::endl;

	// require user to input sales tax ( between 0 and 100).
	int slsTax;
	std::cin >> slsTax;
	std::cout << "Tax rate (in whole numbers): " << slsTax << std::endl;
	std::cout << std::endl;

	// displays break down of items, cost, quantity. cost summary.
	// cost per item = unit price * quantity
	double ttlCost1 = itmPrice1 * itmQnty1;
	double ttlCost2 = itmPrice2 * itmQnty2;
	double ttlCost3 = itmPrice3 * itmQnty3;
	std::cout << "$-----Cost Breakdown-----$" << std::endl;
	std::cout << "Item" << std::setw(20) << "Price" << std::setw(20) << "Quantity" << std::setw(20) << "Cost" << std::endl;
	std::cout << itmBght1 << std::setw(20) << itmPrice1 << std::setw(20) << itmQnty1 << std::setw(20) << ttlCost1 << std::endl;
	std::cout << itmBght2 << std::setw(20) << itmPrice2 << std::setw(20) << itmQnty2 << std::setw(20) << ttlCost2 << std::endl;
	std::cout << itmBght3 << std::setw(20) << itmPrice3 << std::setw(20) << itmQnty3 << std::setw(20) << ttlCost3 << std::endl;
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
	double total = preTotal + tax;
	std::cout << "$"<< total << std::endl;
	std::cout << std::endl;

	// asks user price paid.
	double moneyPd;
	std::cout << "$-----How much money do you have?-----$" << std::endl;
	std::cin >> moneyPd;

	// displays change.
	//	change = total - cost
	double change = moneyPd - total;
	std::cout << "$-----Change-----$" << std::endl;
	std::cout << change << std::endl;
	std::cout << "--------------------";
	std::cout << std::endl;

	// displays denominations of %100, $20, $5, $1, .25, .10, .05, .01). basic math converts and outputs denominations..
	int dollar100 = change / 100 ;
	change -= dollar100 * 100;
	int dollar20 = change / 20;
	change -= dollar20 * 20;
	int dollar5 = change / 5;
	change -= dollar5 * 5;
	int dollar1 = change / 1;
	change -= dollar1 * 1;
	int quarters = change / 0.25;
	change -= quarters * 0.25;
	int dimes = change / 0.10;
	change -= dimes * 0.10;
	int nickels = change / 0.05;
	change -= nickels * 0.05;
	int pennies = change / 0.01;
	change -= pennies * 1;
	std::cout << "Denominations" << std::endl;
	std::cout << "$100 bills: " << dollar100 << std::endl;
	std::cout << "$20 bills: " << dollar20 << std::endl;
	std::cout << "$5 bills: " << dollar5 << std::endl;
	std::cout << "$1 bills: " << dollar1 << std::endl;
	std::cout << "Quarters: " << quarters << std::endl;
	std::cout << "Dimes: " << dimes << std::endl;
	std::cout << "Nickels: " << nickels << std::endl;
	std::cout << "Pennies: " << pennies << std::endl;
	
return 0;
}
