#include <iostream>
#include <ostream>
#include <string>
#include <vector>

// fuctions determine if highway number is primary, which is numbered from 1
// - 99. if auxiliary, numbered from 100 - 999. auxiliary also services
// primary highways based on right most two digits. direction of highway is
// also determined by odd numbers = N/S. even numbers = E/W.

bool hwPrimary(int hwNum) { return hwNum >= 1 && hwNum <= 99; }
bool hwAuxiliary(int hwNum) { return hwNum >= 100 && hwNum <= 999; }
std::string hwDirection(int hwNum) {
  if (hwNum < 0) {
    return "This is not a highway number.";
  } else if (hwNum == 0) {
    return "This is not a highway number.";
  } else {
    return (hwNum % 2 == 1) ? "East/West" : "North/South";
  }
}

std::string auxiliary(int hwNum) {
  if (hwNum > 100 && hwNum < 999) {
    return "it services I-";
  }
  return "";
}

int main() {

  // user inputs highway number to determine primary, auxiliary, and N/S, E/W
  // directions.

  int hwNum; // defined highway number
  // std::cout << "Input highway:" << std::endl; --> testing input
  std::cin >> hwNum; // user determines highway number.
  std::string direction = hwDirection(hwNum);
  bool primary = hwPrimary(hwNum);
  bool auxiliary = hwAuxiliary(hwNum);

  // this determines outputs direction and primary or auxiliary..
  if (direction != "This is not a highway number.") {
    if (primary) {
      std::cout << "I-" << hwNum << "is primary.";
    } else if (auxiliary) {
      std::cout << "I-" << hwNum << " is Auxiliary, its services ";
      std::vector<int> services = getAuxServices{hwNum % 100};
      if (services.empty()) {
        std::cout << "no primary highways." << std::endl;
      } else {
        for (size_t i = 0; i < serivces.size(); ++i) {
          if (i > 0)
            std::cout << ", ";
          std::cout << "I-" << services[i];
        }
        std::cout << "." << std::endl;
      }
      else {
        std::cout << "Invalid highway number entered." << std::endl;
      }
      return 0;
    }
