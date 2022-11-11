#include <bits/stdc++.h>
using namespace std;

bool isInAtoH(char ch) {
  return (ch >= 'a' && ch <= 'h') || (ch >= 'A' && ch <= 'H');
}
bool isInOtoZ(char ch) {
  return (ch >= 'o' && ch <= 'z') || (ch >= 'O' && ch <= 'Z');
}
bool isCharacter(char c) {
  return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
bool isDigit(char c) {
  return c >= '0' && c <= '9';
}
bool isFloatVariableName(string str) {
  int n = str.length();
  if (n == 0)
    return false;
  if (!isCharacter(str[0]))
    return false;
  if (!isInAtoH(str[0]) || !isInOtoZ(str[0]))
    return false;
  for (int i = 1; i < n; i++) {
    if (!isCharacter(str[i]) && !isDigit(str[i]))
      return false;
  }
  return true;
}
bool isFloat(string str) {
  int n = str.size();
  if (n < 4)
    return false;
  if (str[n - 3] != '.')
    return false;
  if (!isDigit(str[n - 2]) || !isDigit(str[n - 1]))
    return false;
  if (str[0] == '0' && str[1] != '.')
    return false;
  for (int i = 0; i < n - 3; i++) {
    if (!isDigit(str[i]))
      return false;
  }
  return true;
}
bool isDouble(string str) {
  int n = str.size();
  if (n < 5)
    return false;

  int dotPosition = -1;
  for (int i = 0; i < n; i++) {
    if (str[i] == '.') {
      dotPosition = i;
      break;
    }
  }
  if (dotPosition == -1)
    return false;

  if (str[0] == '0' && str[1] != '.')
    return false;
  for (int i = 1; i < n; i++) {
    if (i == dotPosition)
      continue;
    if (!isDigit(str[i]))
      return false;
  }
  if (n - dotPosition > 4)
    return true;
  return false;
}

void check(string str) {
  if (isFloatVariableName(str))
    cout << "Float Variable Name" << endl;
  else if (isFloat(str))
    cout << "Float" << endl;
  else if (isDouble(str))
    cout << "Double" << endl;
  else
    cout << "Invalid Number" << endl;
}

int main() {
  string str;
  cin >> str;
  check(str);
  return 0;
}