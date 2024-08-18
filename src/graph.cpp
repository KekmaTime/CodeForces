#include <bits/stdc++.h>
using namespace std;

int main() {
  int m, n;
  cin >> n >> m;
  vector<int> adj[n + 1];
  for (int i = 1; i < m; i++) {
    int u, v;
    adj[u].push_back(v);

    // needed only for a un-directed graph
    // adj[v].push_back(u);
  }

  return 0;
}
