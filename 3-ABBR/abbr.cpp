#include <bits/stdc++.h>
using namespace std;
map<string, string> abbr;

void insertAbbrWord(string code, string word) {
  abbr[code] = word;
}

int main() {
  insertAbbrWord("CSE-3141", "Computer Scinence and Engineering, 3rd year, 1st semister , Compiler Design");
  insertAbbrWord("CSE-3142", "Computer Scinence and Engineering, 3rd year, 1st semister , Data Structure");
  insertAbbrWord("CSE-3143", "Computer Scinence and Engineering, 3rd year, 1st semister , Algorithm Design and Analysis");
  insertAbbrWord("CSE-3144", "Computer Scinence and Engineering, 3rd year, 1st semister , Discrete Mathematics");
  insertAbbrWord("CSE-3145", "Computer Scinence and Engineering, 3rd year, 1st semister , Object Oriented Programming");
  insertAbbrWord("CSE-3146", "Computer Scinence and Engineering, 3rd year, 1st semister , Database Management System");
  insertAbbrWord("CSE-3147", "Computer Scinence and Engineering, 3rd year, 1st semister , Computer Graphics");
  insertAbbrWord("CSE-3148", "Computer Scinence and Engineering, 3rd year, 1st semister , Operating System");
  insertAbbrWord("CSE-3149", "Computer Scinence and Engineering, 3rd year, 1st semister , Computer Network");

  string code;
  cin >> code;
  cout << abbr[code] << endl;
  return 0;
}