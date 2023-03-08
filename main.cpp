// Write a Program to Count the sum of numbers in a string
#include <iostream>
#include <string.h>
using namespace std;
int main() {
  string ok;
  cin >> ok;

  int len = ok.length();
  char str[len];
  for (int i = 0; i < len; i++) {
    str[i] = ok[i];
  }
  int i, sum = 0;
  for (i = 0; str[i] != '\0'; i++) {
    if ((str[i] >= '0') && (str[i] <= '9')) {
      sum += (str[i] - '0');
    }
  }
  cout << "Sum is: " << sum;
  return 0;
}