#include <iostream>

void printCoins(int amount, const std::string &coinName,
                const std::string &pluralCoinName) {
  if (amount == 0)
    return;
  std::cout << amount << " " << (amount == 1 ? coinName : pluralCoinName)
            << std::endl;
}

int main() {
  int totalChange;
  std::cout << "Enter the total change amount: ";
  std::cin >> totalChange;

  if (totalChange == 0) {
    std::cout << "No change" << std::endl;
    return 0;
  }

  // Calculate the number of dollars, quarters, dimes, nickels, and pennies
  int dollars = totalChange / 100;
  totalChange %= 100;
  int quarters = totalChange / 25;
  totalChange %= 25;
  int dimes = totalChange / 10;
  totalChange %= 10;
  int nickels = totalChange / 5;
  totalChange %= 5;
  int pennies = totalChange;

  // Output the change using the fewest coins
  std::cout << "Change using the fewest coins:" << std::endl;
  printCoins(dollars, "Dollar", "Dollars");
  printCoins(quarters, "Quarter", "Quarters");
  printCoins(dimes, "Dime", "Dimes");
  printCoins(nickels, "Nickel", "Nickels");
  printCoins(pennies, "Penny", "Pennies");

  return 0;
}
