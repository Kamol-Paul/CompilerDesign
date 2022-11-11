#include <bits/stdc++.h>
using namespace std;

bool isCharacter(char c) {
  return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
bool isDigit(char c) {
  return c >= '0' && c <= '9';
}
bool isBinaryCharacter(char c) {
  return c == '0' || c == '1';
}

bool isCharacterVariableName(string str) {
  int n = str.length();
  if (n < 4)
    return false;
  if (str[0] != 'c' && str[1] != 'h' && str[2] != '_')
    return false;
  if (!isCharacter(str[3]))
    return false;
  for (int i = 4; i < n; i++) {
    if (!isCharacter(str[i]) && !isDigit(str[i]))
      return false;
  }
  return true;
}

bool isBinaryVariableName(string str) {
  int n = str.length();
  if (n < 4)
    return false;
  if (str[0] != 'b' && str[1] != 'n' && str[2] != '_')
    return false;
  if (!isCharacter(str[3]))
    return false;
  for (int i = 4; i < n; i++) {
    if (!isCharacter(str[i]) && !isDigit(str[i]))
      return false;
  }
  return true;
}

bool isBinary(string str) {
  int n = str.size();
  if (n < 2)
    return false;
  if (str[0] != '0')
    return false;
  for (int i = 1; i < n; i++) {
    if (!isBinaryCharacter(str[i]))
      return false;
  }
  return true;
}

void check(string str) {
  if (isBinaryVariableName(str)) {
    cout << str << " is a binary variable name" << endl;
  } else if (isBinary(str)) {
    cout << str << " is a binary number" << endl;
  } else {
    cout << str << " is not a binary number" << endl;
  }
}

int main() {
  string str;
  cin >> str;
  check(str);
  return 0;
}