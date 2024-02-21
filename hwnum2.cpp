#include <iostream>
#include <ostream>
#include <string>

// fuctions determine if highway number is primary, which is numbered from 1
// - 99. if auxiliary, numbered from 100 - 999. auxiliary also services
// primary highways based on right most two digits. direction of highway is
// also determined by odd numbers = N/S. even numbers = E/W.

bool hwPrimary(int hwNum) { return hwNum % 2 == 1; }
bool hwAuxiliary(int hwNum) { return hwNum % 3 == 0; }
std::string hwDirection(int hwNum) {
  if (hwNum < 0) {
    return "This is not a highway number.";
  } else if (hwNum == 0) {
    return "This is not a highway number.";
  } else {
    return (hwNum % 2 == 1) ? "East/West" : "North/South";
  }

  if (hwNum > 1) {
    return (hwNum % 3 == 0) ? "East/West" : "North South";
  }
}

int main() {

  // user inputs highway number to determine primary, auxiliary, and N/S, E/W
  // directions.

  int hwNum; // defined highway number
  // std::cout << "Input highway:" << std::endl; --> testing input
  std::cin >> hwNum; // user determines highway number.
  std::string direction = hwDirection(hwNum);
  bool primary = hwPrimary(hwNum);
  bool auxiliary = hwPrimary(hwNum);

  // this determines outputs direction and primary or auxiliary..
  if (direction != "This is not a highway number.") {

    std::cout << "I-" << hwNum << " is " << (primary ? "Primary" : "Auxiliary")
              << ", "
              << "going " << direction << std::endl;
  } else {
    std::cout << "Invalid highway number entered." << std::endl;
  }

  if (direction == hwAuxiliary) {
    std::cout << "I- " << hwNum << " is "
              << (auxiliary ? "Primary" : "Auxiliary") << ", "
              << "it services I-90." << std::endl;
  }
  return 0;
}
