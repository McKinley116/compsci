#include <iostream>
#include <ostream>
#include <string>

int main() {
  int hwNum;

  std::cin >> hwNum;

  if (hwNum > 1 && hwNum < 99) {
    std::cout << "I-" << hwNum << " is primary, going east/west." << std::endl;
  } else if (hwNum > 100 && hwNum < 999) {
    std::cout << "I-" << hwNum << " is auxiliary, serving " << hwNum << ", "
              << "going east/west." << std::endl;
  } else {
    std::cout << hwNum << " is not a valid highway number." << std::endl;
  }

  return 0;
}
