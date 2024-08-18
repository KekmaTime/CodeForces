#include <bits/stdc++.h>

using namespace std;

int main() {
  set<char> s;

  string a;
  cin >> a;

  for (char x : a) {
    s.insert(x);
  }

  if (s.size() % 2 == 0) {
    cout << "CHAT WITH HER!" << endl;
  } else {
    cout << "IGNORE HIM!" << endl;
  }
  return 0;
}
