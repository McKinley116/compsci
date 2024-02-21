#include <iostream>
#include <string>

// fuctions determine if highway number is primary, which is numbered from 1
// - 99. if auxiliary, numbered from 100 - 999. auxiliary also services
// primary highways based on right most two digits. direction of highway is
// also determined by odd numbers = N/S. even numbers = E/W.

bool hwPrimary(int hwNum) { return hwNum % 2 == 0; }
std::string hwDirection(int hwNum) {
  if (hwNum < 0) {
    return "This is not a highway number.";
  } else if (hwNum == 0) {
    return "This is not a highway number.";
  } else {
    return (hwNum % 2 == 0) ? "East/West" : "North/South";
  }
}

int main() {

  // user inputs highway number to determine primary, auxiliary, and N/S, E/W
  // directions.

  int hwNum;
  int primaryHw;
  int auxiliarHw;

  // user inputs highwayNum.
  // std::cout << "Input highway:" << std::endl; --> testing input
  std::cin >> hwNum;

  return 0;
}
