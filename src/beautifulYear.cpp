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
  int year;
  cin >> year;

  while (true) {
    year++;
    int a = year / 1000;
    int b = year / 100 % 10;
    int c = year / 10 % 10;
    int d = year % 10;

    if (a != b && a != c && a != d && b != c && b != d && c != d) {
      break;
    }
  }

  cout << year << endl;
  return 0;
}
