// count number of words , letters , and other characters in a string

#include <bits/stdc++.h>
using namespace std;

bool isLetter(char ch) {
  return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

bool isDigit(char ch) {
  return ch >= '0' && ch <= '9';
}

bool isSpace(char ch) {
  return ch == ' ';
}

bool isOther(char ch) {
  return !isLetter(ch) && !isDigit(ch) && !isSpace(ch);
}

void counting(string &str) {
  int word = 1, letter = 0, digit = 0, other = 0;

  for (int i = 0; i < str.size(); i++) {
    if (isLetter(str[i]))
      letter++;
    else if (isDigit(str[i]))
      digit++;
    else if (isSpace(str[i]) && !isSpace(str[i + 1]))
      word++;
    else if (isOther(str[i]))
      other++;
  }

  cout << "Word: " << word << endl;
  cout << "Letter: " << letter << endl;
  cout << "Digit: " << digit << endl;
  cout << "Other: " << other << endl;
}

int main() {
  cout << "Enter a string: ";
  string str;
  getline(cin, str);
  cout << endl;
  counting(str);
}