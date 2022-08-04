/* expectation00 */
// Good is not good enough.
// Date: 2022-08-04 09:37:26
#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/detail/standard_policies.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
using namespace std;
char gap = 32;
template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v) {
  os << '{';
  for (const auto &x : v)
    os << gap << x;
  return os << '}';
}
template <typename A, typename B>
ostream &operator<<(ostream &os, const pair<A, B> &p) {
  return os << '(' << p.first << gap << p.second << ')';
}

void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) {
  cerr << ' ' << H;
  dbg_out(T...);
}
#ifdef KAMOL
#define dbg(...) cerr << '(' << #__VA_ARGS__ << ')' << ':', dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif
#define ll long long
#define lll __int128_t
#define pb push_back
#define mp make_pair
#define All(x) (x).begin(), (x).end()
#define sz(z) (int)((z).size())
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<vi> vvi;
// typedef tree<
// int,
// null_type,
// less<int>,
// rb_tree_tag,
// tree_order_statistics_node_update>
// ordered_set;
mt19937 rng((uint_fast32_t)chrono::steady_clock::now().time_since_epoch().count());
ll hashPrime = 1610612741;

bool isCharcter(char ch) {
  return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

bool isDigit(char ch) {
  return ch >= '0' && ch <= '9';
}

bool isSpace(char ch) {
  return ch == ' ';
}

bool isHex(char ch) {
  return (ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'f') || (ch >= 'A' && ch <= 'F');
}

bool isItoN(char ch) {
  return (ch >= 'i' && ch <= 'n') || (ch >= 'I' && ch <= 'N');
}
bool isFloatVariable(string str) {
  int n = str.size();
  if (n == 0)
    return false;
  if (!isCharcter(str[0]) || isItoN(str[0]))
    return false;
  for (int i = 1; i < n; i++) {
    if (!isDigit(str[i]) && !isCharcter(str[i]))
      return false;
  }
  return true;
}
bool isFloatNumber(string str) {
  int n = str.size();
  if (n == 0)
    return false;
  if (!isDigit(str[0]))
    return false;
  if (str[0] == '0') {
    if (str[1] != '.')
      return false;
    for (int i = 2; i < n; i++) {
      if (!isDigit(str[i]))
        return false;
    }
    if (n != 4)
      return false;
  } else {
    int dot = 0;
    int dotPos = -1;
    for (int i = 1; i < n; i++) {
      if (!isDigit(str[i])) {
        if (str[i] == '.') {
          if (dot == 1)
            return false;
          dot = 1;
          dotPos = i;
        } else
          return false;
      }
    }
    return (n - dotPos == 2);
  }
  return true;
}

bool isDoubleNumber(string str) {
  int n = str.size();
  if (n == 0)
    return false;
  if (!isDigit(str[0]))
    return false;
  if (str[0] == '0') {
    if (str[1] != '.')
      return false;
    for (int i = 2; i < n; i++) {
      if (!isDigit(str[i]))
        return false;
    }
    return (n >= 5);
  } else {
    int dot = 0;
    int dotPos = -1;
    for (int i = 1; i < n; i++) {
      if (!isDigit(str[i])) {
        if (str[i] == '.') {
          if (dot == 1)
            return false;
          dot = 1;
          dotPos = i;
        } else
          return false;
      }
    }
    return (n - dotPos > 2);
  }
  return true;
}
// Came Up with a simple Idea.
string checkVariableType(string str) {
  if (isFloatVariable(str))
    return "Float Variable";
  if (isFloatNumber(str))
    return "Float Number";
  if (isDoubleNumber(str))
    return "Double Integer";
  return "Invalid Input";
}

void solve() {
  string str;
  while (cin >> str) {
    cout << str << " : " << checkVariableType(str) << endl;
  }
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
#ifdef KAMOL
  freopen("inputForTest5.txt", "r", stdin);
#endif
  int test = 1;
  // cin>>test;
  while (test--) {
    solve();
  }
  return 0;
}