#include <bits/stdc++.h>
using namespace std;
int main() {
  int i, j, l, c, m[50][50];
  for (i=0;i<5;i++) {
    for(j=0;j<5;j++) {
      cin >> m[i][j];
      if (m[i][j]==1) {
        l = i;
        c = j;
      }
    }
  }
  cout << (abs(l-2)+abs(c-2)) << "\n";
}

