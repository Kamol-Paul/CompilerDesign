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

void countVowelConsonent(string str) {
  int vowel = 0, consonent = 0;
  for (int i = 0; i < str.length(); i++) {
    if (isVowel(str[i]))
      vowel++;
    else if (isConsontant(str[i]))
      consonent++;
  }
  cout << "Vowel: " << vowel << endl;
  cout << "Consonent: " << consonent << endl;
}

int main() {
  string str;
  getline(cin, str);
  countVowelConsonent(str);
  return 0;
}