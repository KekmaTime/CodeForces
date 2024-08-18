#include <bits/stdc++.h>

using namespace std;

int main() {
  string a;
  cin >> a;
  vector<int> digits;

  for (int i = 0; i < a.length(); i++) {
    if (a[i] >= '1' && a[i] <= '3') {
      digits.push_back(a[i]);
    }
  }

  sort(digits.begin(), digits.end());

  string result;
  for (int i = 0; i < digits.size(); i++) {
    if (i > 0) {
      result += '+';
    }
    result += digits[i];
  }

  cout << result << endl;
}
