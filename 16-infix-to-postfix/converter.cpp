#include <bits/stdc++.h>
using namespace std;

// Function to return precedence of operators
int prec(char c) {
  if (c == '^')
    return 3;
  else if (c == '*' || c == '/')
    return 2;
  else if (c == '+' || c == '-')
    return 1;
  else
    return -1;
}
void infixToPostfix(string s) {
  stack<char> st;
  string result;

  for (char ch : s) {
    if (isalpha(ch)) {
      cout << ch;
    } else if (ch == '(') {
      st.push(ch);
    } else if (ch == ')') {
      while (st.top() != '(') {
        cout << st.top();
        st.pop();
      }
      if (!st.empty()) {
        st.pop();
      }
    } else {
      while (!st.empty() && prec(ch) <= prec(st.top())) {
        cout << st.top();
        st.pop();
      }
      st.push(ch);
    }
  }
  while (st.empty() == false) {
    cout << st.top();
    st.pop();
  }
}

int main() {
  string exp = "a+(b*c-d*(d/e^f)*g)*h";
  infixToPostfix(exp);
  return 0;
}
