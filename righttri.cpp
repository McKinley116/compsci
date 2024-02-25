#include <iostream>

int main() {
  char triChar;
  int triHeight;

  std::cout << "Enter a character: " << std::endl;
  std::cin >> triChar;
  std::cout << "Enter a height: " << std::endl;
  std::cin >> triHeight;

  int height = 0;
  while (height < triHeight) {
    std::cout << triChar << std::endl;
    height++;
  }

  return 0;
}
