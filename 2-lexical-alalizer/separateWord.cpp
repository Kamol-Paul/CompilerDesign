#include <bits/sdtc++.h>
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

void separateWord(string str) {
  string word;
  vector<string> vowelSentence, consonentSentence;
  for (int i = 0; i < str.length(); i++) {
    if (str[i] == ' ') {
      if (isVowel(word[0]))
        vowelSentence.push_back(word);
      else if (isConsontant(word[0]))
        consonentSentence.push_back(word);
      word = "";
    } else {
      word += str[i];
    }
  }
  if (isVowel(word[0]))
    vowelSentence.push_back(word);
  else if (isConsontant(word[0]))
    consonentSentence.push_back(word);
  cout << "Vowel Sentence: ";
  for (int i = 0; i < vowelSentence.size(); i++)
    cout << vowelSentence[i] << " ";
  cout << endl;
  cout << "Consonent Sentence: ";
  for (int i = 0; i < consonentSentence.size(); i++)
    cout << consonentSentence[i] << " ";
  cout << endl;
}

int main() {
  string str;
  getline(cin, str);
  separateWord(str);
  return 0;
}