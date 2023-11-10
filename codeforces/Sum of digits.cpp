#include<iostream>
#include<string.h>
using namespace std;

const int N = 1e5 + 9;
char number_as_string[N];
int main() {
  cin >> number_as_string;
  int len = strlen(number_as_string);
  if (len == 1) {
    cout << 0 << '\n';
    return 0;
  }

  int sum_of_digits = 0;
  for (int i = 0; i < len; i++) {
    sum_of_digits += number_as_string[i] - '0';
  }
  int spell_count = 1;

  int current_number = sum_of_digits;

  while (current_number > 9) {
    int sum_of_digits = 0;
    while (current_number > 0) {
      int last_digit = current_number % 10;
      sum_of_digits += last_digit;
      int number_without_last_digit = current_number / 10;
      current_number = number_without_last_digit;
    }
    current_number = sum_of_digits;
    ++spell_count;
  }
  cout << spell_count << '\n';
  return 0;
}
