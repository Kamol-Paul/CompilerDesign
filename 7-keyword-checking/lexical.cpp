#include <bits/stdc++.h>
using namespace std;

bool isCharacter(char c) {
  return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
bool isDigit(char c) {
  return c >= '0' && c <= '9';
}

vector<string> keywords = {"int", "float", "double", "char", "string", "bool", "void", "auto", "break", "case", "const", "continue", "default", "do", "else", "enum", "extern", "for", "goto", "if", "long", "register", "return", "short", "signed", "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned", "volatile", "while"};

bool isKeyword(string str) {
  for (int i = 0; i < keywords.size(); i++) {
    if (str == keywords[i])
      return true;
  }
  return false;
}

vector<string> operators = {"+", "-", "*", "/", "%", "++", "--", "=", "+=", "-=", "*=", "/=", "%=", "==", "!=", ">", ">=", "<", "<=", "&&", "||", "!", "&", "|", "^", "~", "<<", ">>", ">>>"};

bool isOperator(string str) {
  for (int i = 0; i < operators.size(); i++) {
    if (str == operators[i])
      return true;
  }
  return false;
}
vector<string> specialCharacters = {
    "@",
    "#",
    "$",

    "^",
    "&"};
bool isSpecialCharacter(string str) {
  for (int i = 0; i < specialCharacters.size(); i++) {
    if (str == specialCharacters[i])
      return true;
  }
  return false;
}

bool isIdentifire(string str) {
  int n = str.length();
  if (n < 1)
    return false;
  if (!isCharacter(str[0]))
    return false;
  for (int i = 1; i < n; i++) {
    if (!isCharacter(str[i]) && !isDigit(str[i]) && str[i] != '_')
      return false;
  }
  return true;
}

void lexicalAnalizer(string expression) {
  string token = "";

  for (int i = 0; i < expression.length(); i++) {
    if (expression[i] == ' ') {

      if (isKeyword(token)) {
        cout << token << " is a keyword" << endl;
      } else if (isIdentifire(token)) {
        cout << token << " is a identifire" << endl;
      } else if (isOperator(token)) {
        cout << token << " is a operator" << endl;
      } else if (isSpecialCharacter(token)) {
        cout << token << " is a special character" << endl;
      } else {
        cout << token << " is a constant" << endl;
      }
    }
    token = "";
  }
  else {
    token += expression[i];
  }
}
int main() {
  string expression;
  cout << "Enter the expression: ";
  getline(cin, expression);
  lexicalAnalizer(expression);
  return 0;
}
}