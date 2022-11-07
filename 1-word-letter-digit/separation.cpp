// separate letters , digits , and other characters in a string

#include <bits/stdc++.h>
using namespace std;

bool isLetter(char ch) {
  return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

bool isDigit(char ch) {
  return ch >= '0' && ch <= '9';
}

bool isOther(char ch) {
  return !isLetter(ch) && !isDigit(ch);
}

// make the function according to the question's need
void separate(string &str) {
  string letter, digit, other;
  for (int i = 0; i < str.size(); i++) {
    if (isLetter(str[i]))
      letter += str[i];
    else if (isDigit(str[i]))
      digit += str[i];
    else if (isOther(str[i]))
      other += str[i];
  }
  cout << "Letter: " << letter << endl;
  cout << "Digit: " << digit << endl;
  cout << "Other: " << other << endl;
}

int main() {
  cout << "Enter a string: ";
  string str;
  getline(cin, str);
  cout << endl;
  separate(str);
}