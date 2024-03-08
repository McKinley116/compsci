#include <algorithm>
#include <iostream>

int main() {

  int num1, num2, num3;

  std::cout << "Enter three numbers" << std::endl;
  std::cin >> num1;
  std::cin >> num2;
  std::cin >> num3;

  int small = std::min({num1, num2, num3});

  std::cout << "The smallest number is:" << small << std::endl;

  return 0;
}
