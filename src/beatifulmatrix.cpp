#include <bits/stdc++.h>

using namespace std;

int main() {

  int matrix[5][5], xpos, ypos;

  for (int i = 0; i < 5; i++) {
    cin >> matrix[i][0] >> matrix[i][1] >> matrix[i][2] >> matrix[i][3] >>
        matrix[i][4];
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (matrix[i][j] == 1) {
        xpos = i;
        ypos = j;
      }
    }
  }

  cout << abs(xpos - 2) + abs(ypos - 2) << endl;
  return 0;
}
