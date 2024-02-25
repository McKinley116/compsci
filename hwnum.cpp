#include <iostream>
#include <iterator>
#include <ostream>
#include <string>
int main() {

  int hwNum;

  std::cin >> hwNum;

  if (hwNum > 0 && hwNum < 99) {
    std::cout << "I-" << hwNum << " is a primary highway." << std::endl;
    if (hwNum % 2 == 0) {
      std::cout << "it runs north/south." << std::endl;
    } else {
    }
  }

  return 0;
}
