#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
  long long m, n, a;
  cin >> m >> n >> a;

  long long lengthblk = (m + a - 1) / a;
  long long widthblk = (n + a - 1) / a;
  cout << lengthblk * widthblk << endl;
  return 0;
}
