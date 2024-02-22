#include <iostream>
#include <ostream>
#include <string>

bool hwPrimary(int hwNum) { return hwNum >= 1 && hwNum <= 99; }
bool hwAuxiliary(int hwNum) { return hwNum >= 100 && hwNum <= 999; }

std::string hwDirection(int hwNum) {
  if (hwNum < 0) {
    return "This is not a highway number.";
  } else if (hwNum == 0 || (hwNum % 100 == 0)) {
    return "This is not a highway number.";
  } else {
    return (hwNum % 2 == 0) ? "east/west." : "north/south.";
  }
}

std::string getServiceInfo(int hwNum) {
  if (hwAuxiliary(hwNum)) {
    int primaryHighway = hwNum % 100;
    return "serving I-" + std::to_string(primaryHighway) + ", ";
  }
  return "";
}

int main() {
  int hwNum;
  std::cin >> hwNum;

  std::string direction = hwDirection(hwNum);
  bool primary = hwPrimary(hwNum);
  bool auxiliary = hwAuxiliary(hwNum);

  if (direction != "This is not a highway number.") {
    if (primary) {
      std::cout << "I-" << hwNum << " is primary, ";
    } else if (auxiliary) {
      std::cout << "I-" << hwNum << " is auxiliary, serving ";
      std::cout << "I-" << hwNum % 100 << ", ";
    }
    std::cout << "going " << direction << std::endl;
  } else {
    std::cout << "Invalid highway number entered." << std::endl;
  }

  return 0;
}
