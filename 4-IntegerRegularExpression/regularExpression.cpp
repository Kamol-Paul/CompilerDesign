#include <bits/stdc++.h>
using namespace std;

bool isCharacter(char c) {
  return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

bool isDigit(char c) {
  return c >= '0' && c <= '9';
}
bool isInAtoH(char ch) {
  return (ch >= 'a' && ch <= 'h') || (ch >= 'A' && ch <= 'H');
}

bool isIntegerVariableName(string str) {
  int n = str.length();
  if (n == 0)
    return false;
  if (!isCharacter(str[0]))
    return false;
  if (!isInAtoH(str[0]))
    return false;
  for (int i = 1; i < n; i++) {
    if (!isCharacter(str[i]) && !isDigit(str[i]))
      return false;
  }
  return true;
}
bool isShortInt(string str) {
  int n = str.size();
  if (n == 0)
    return false;

  for (char ch : str) {
    if (!isDigit(ch))
      return false;
  }
  if (str[0] == '0')
    return false;
  if (n >= 5)
    return false;
  return true;
}
bool isLongInt(string str) {
  int n = str.size();
  if (n == 0)
    return false;

  for (char ch : str) {
    if (!isDigit(ch))
      return false;
  }
  if (str[0] == '0')
    return false;

  if (n >= 5)
    return true;
  return false;
}

void checkLexicalValue(string str) {
  if (isIntegerVariableName(str)) {
    cout << "Integer Variable Name" << endl;
  } else if (isShortInt(str)) {
    cout << "Short Integer" << endl;
  } else if (isLongInt(str)) {
    cout << "Long Integer" << endl;
  } else {
    cout << "Invalid Input" << endl;
  }
}
int main() {
  string str;
  cin >> str;
  checkLexicalValue(str);
  return 0;
}