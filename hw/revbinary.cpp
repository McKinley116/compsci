#include <iostream>
// this program allows a user to input a int number and output it in reverse
// binary..
int main() {
  // define user input.
  int userNum;
  // get input from user.
  std::cin >> userNum;
  // calculate bits
  int numBits = 0;
  int temp = userNum;
  while (temp > 0) {
    numBits++;
    temp /= 2;
  }
  // array to store reverse binary digits.
  int reverseBinary[32];
  int i = 0;
  // convert user input into binary
  while (userNum > 0) {
    reverseBinary[i] = userNum % 2;
    userNum /= 2;
    i++;
  }
  // output reverse binary.
  for (int j = 0; j < numBits; j++) {
    std::cout << reverseBinary[j];
  }
  std::cout << std::endl;
  return 0;
}
