#include <bits/stdc++.h>
#include <cwctype>
using namespace std;

#define ll long long
#define ull unsigned long long
#define ld long double

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)x.size()
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i >= b; i--)
#define trav(x, v) for (auto &x : v)

void fast_io() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
}

int main() {
  fast_io();
  string s;
  cin >> s;

  int high = 0;
  int low = 0;

  rep(i, 0, s.length()) {
    if (isupper(s[i])) {
      high++;
    } else {
      low++;
    }
  }
  if (high > low) {
    rep(i, 0, s.length()) {
      if (islower(s[i])) {
        s[i] = toupper(s[i]);
      }
    }
  } else {
    rep(i, 0, s.length()) {
      if (isupper(s[i])) {
        s[i] = tolower(s[i]);
      }
    }
  }

  cout << s << endl;
  return 0;
}
