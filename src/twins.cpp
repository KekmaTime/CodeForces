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

  vector<int> a(n);
  rep(i, 0, n) cin >> a[i];

  sort(rall(a));

  int total = accumulate(all(a), 0);
  int sum = 0, count = 0;

  rep(i, 0, n) {
    sum += a[i];
    count++;
    if (sum > total - sum)
      break;
  }

  cout << count << endl;

  return 0;
}
