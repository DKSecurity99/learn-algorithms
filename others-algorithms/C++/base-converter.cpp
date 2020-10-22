#include <iostream>
#include <math.h>
#include <string>
#include <vector>

#define MAX 100

using namespace std;

string baseConverter(int decimal_number, int base) {
  vector<int> rests_of_divisision;
  int actual_rest;
  string base_result;

  string chars_base[16] = {
    "0", "1", "2", "3", "4", "5",
    "6", "7", "8", "9",
    "A", "B", "C", "D", "E", "F"
  };

  while (decimal_number > 0) {
    actual_rest = floor(decimal_number % base);
    rests_of_divisision.push_back(actual_rest);
    decimal_number = floor(decimal_number / base);
  }

  while (rests_of_divisision.size() > 0) {
    base_result += chars_base[rests_of_divisision.back()];
    rests_of_divisision.pop_back();
  }

  return base_result;
}

int main() {

  cout << baseConverter(123, 16) << "\n"; // Hexdecimal
  cout << baseConverter(123, 2) << "\n"; // binary
  cout << baseConverter(123, 8) << "\n"; // octal

  return 0;
}
