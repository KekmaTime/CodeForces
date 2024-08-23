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
  int n;
  cin >> n;

  int x;
  bool f = false;

  rep(i, 0, n) {
    cin >> x;
    if (x == 1) {
      f = true;
    }
  }
  if (f) {
    cout << "HARD";
  } else {
    cout << "EASY";
  }
  return 0;
}
