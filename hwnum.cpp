#include <iostream>
#include <ostream>
#include <string>

int main() {

  std::string extract_numeric_part(const std::string &highway_number);
  bool is_primary_highway(const std::string &numeric_part);
  bool is_auxiliary_highway(const std::string &numeric_part);
  std::string extract_primary_highway(const std::string &numeric_part);
  std::string determine_direction(const std::string &highway_number);

  std::string user_input;
  std::cin >> user_input;

  std::string numeric_part = extract_numeric_part(user_input);

  if (is_primary_highway(numeric_part)) {
    std::string direction = determine_direction(numeric_part);
    std::cout << "I-" << user_input << " is a primary, going " << direction
              << "." << std::endl;
  } else if (is_auxiliary_highway(numeric_part)) {
    std::string primary_highway = extract_primary_highway(numeric_part);
    std::string direction = determine_direction(primary_highway);
    std::cout << "I-" << user_input << " is an auxiliary, serving I-90"
              << primary_highway << ", going " << direction << std::endl;
  } else {
    std::cout << "Invalid highway number: " << user_input << std::endl;
  }

  return 0;
}

std::string extract_numeric_part(const std::string &highway_number) {
  size_t position = highway_number.find_first_not_of("0123456789");
  if (position != std::string::npos) {
    return highway_number.substr(0, position);
  }
  return highway_number;
}
bool is_primary_highway(const std::string &numeric_part) {
  return (numeric_part.length() == 1 || (numeric_part.length() == 2));
}
bool is_auxiliary_highway(const std::string &numeric_part) {
  return (numeric_part.length() == 3);
}
std::string extract_primary_highway(const std::string &numeric_part) {
  if (numeric_part.length() == 3) {
    return numeric_part.substr(1);
  } else if (numeric_part.length() == 4) {
    return numeric_part.substr(2);
  } else {
    return numeric_part.substr(1, 1);
  }
}
std::string determine_direction(const std::string &highway_number) {
  char last_char = highway_number.back();
  return (last_char == 'N' || last_char == 'S') ? "north/south" : "east/west";
}
