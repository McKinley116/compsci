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
#include <limits>
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

	std::cout << "Unit name: ";
	std::getline(std::cin, itmBght1);	
	std::cout << "Unit price for " << itmBght1 << " is: ";
	std::cin >> itmPrice1;	
	std::cout << "Unit quantity for " << itmBght1 << " is: "; 	
	std::cin >> itmQnty1;
	std::cout << std::endl;

	// this clears the buffer for getline..
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::string itmBght2;
	double itmPrice2;
	int itmQnty2;
	std::cout << "Unit name: "; 
	std::getline(std::cin, itmBght2); 
	std::cout << "Unit price for " << itmBght2 << " is: ";
	std::cin >> itmPrice2;
	std::cout << "Unit quantity for " << itmBght2 << " is: ";
	std::cin >> itmQnty2;
	std::cout << std::endl;

	// this clears the buffer for getline..
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::string itmBght3;
	double itmPrice3;
	int itmQnty3;
	std::cout << "Unit name: ";
	std::getline(std::cin, itmBght3);	
	std::cout << "Unit price for " << itmBght3 << " is: ";
	std::cin >> itmPrice3;
	std::cout << "Unit quantity for " << itmBght3 << " is: ";
	std::cin >> itmQnty3;
	std::cout << std::endl;

	// this clears the buffer for getline..
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	// require user to input sales tax ( between 0 and 100).
	int slsTax;	
	std::cout << "Tax rate (in whole numbers): ";
	std::cin >> slsTax;
	std::cout << std::endl;

	// displays break down of items, cost, quantity. cost summary.
	// cost per item = unit price * quantity
	const int WIDTH = 15; // included to easily adjust table spacing..
	double ttlCost1 = itmPrice1 * itmQnty1;
	double ttlCost2 = itmPrice2 * itmQnty2;
	double ttlCost3 = itmPrice3 * itmQnty3;
	std::cout << "$-----Cost Breakdown-----$" << std::endl;
	std::cout << std::setw(WIDTH) << "Item" << std::setw(WIDTH) << "Price" << std::setw(WIDTH) << "Quantity" << std::setw(WIDTH) << "Cost" << std::setw(WIDTH) << std::endl;
	std::cout << std::setw(WIDTH) << itmBght1 << std::setw(WIDTH) << itmPrice1 << std::setw(WIDTH) << itmQnty1 << std::setw(WIDTH) << ttlCost1 << std::setw(WIDTH) << std::endl;	
	std::cout << std::setw(WIDTH) << itmBght2 << std::setw(WIDTH) << itmPrice2 << std::setw(WIDTH) << itmQnty2 << std::setw(WIDTH) << ttlCost2 << std::setw(WIDTH) << std::endl;
	std::cout << std::setw(WIDTH) << itmBght3 << std::setw(WIDTH) << itmPrice3 << std::setw(WIDTH) << itmQnty3 << std::setw(WIDTH) << ttlCost3 << std::setw(WIDTH) << std::endl;
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


	// displays denominations of %100, $20, $5, $1, .25, .10, .05, .01). static_cast<int> is a safe way to convert..
	double remainingChange = change;
	int dollar100 = static_cast<int>(remainingChange / 100);
	remainingChange -= dollar100 * 100;
	int dollar20 = static_cast<int>(remainingChange / 20);
	remainingChange -= dollar20 * 20;
	int dollar5 = static_cast<int>(remainingChange / 5);
	remainingChange -= dollar5 * 5;
	int dollar1 = static_cast<int>(remainingChange / 1);
	remainingChange -= dollar1 * 1;
	int quarters = static_cast<int>(remainingChange / 0.25);
	remainingChange -= quarters * 0.25;
	int dimes = static_cast<int>(remainingChange / 0.10);
	remainingChange -= dimes * 0.10;
	int nickels = static_cast<int>(remainingChange / .05);
	remainingChange -= nickels * .05;
	int pennies = static_cast<int>(round(remainingChange * 100));

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
