#include <iostream>

int main() {
  char triChar;
  int triHeight;

  std::cout << "Enter a character: " << std::endl;
  std::cin >> triChar;
  std::cout << "Enter a height: " << std::endl;
  std::cin >> triHeight;
  std::cout << std::endl;

  int height = 0;

  for (int i = 1; i <= triHeight; ++i) { // loops through each row..
    for (int j = 0; j < i; ++j) {  // loops to print characters in each row..
      std::cout << triChar << " "; // prints space after characters..
    }
    std::cout << std::endl; // moves to next line...
  }

  return 0;
}
