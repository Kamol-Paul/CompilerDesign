#include <bits/stdc++.h>
using namespace std;

bool isVowel(char ch) {
  if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    return true;
  return false;
}
bool isConsontant(char ch) {
  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
    if (!isVowel(ch))
      return true;
  }
  return false;
}

void showVowelConsonent(string str) {
  string vowel, consonent;
  for (int i = 0; i < str.length(); i++) {
    if (isVowel(str[i]))
      vowel += str[i];
    else if (isConsontant(str[i]))
      consonent += str[i];
  }
  cout << "Vowel: " << vowel << endl;
  cout << "Consonent: " << consonent << endl;
}

int main() {
  string str;
  getline(cin, str);
  showVowelConsonent(str);
  return 0;
}