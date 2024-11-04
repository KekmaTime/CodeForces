#include <bits/stdc++.h>
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
  int k = 1;

  string comp;

  rep(i, 1, sz(s)) {
    if (s[i] == s[i - 1]) {
      k++;
      if (k == 10) {
        comp += "9" + string(1, s[i - 1]);
        k = 1;
      }
    } else {
      comp += to_string(k) + s[i - 1];
      k = 1;
    }
  }
  comp += to_string(k) + s[sz(s) - 1];

  cout << comp << endl;
}
