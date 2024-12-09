#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  int a, b, c, r = 0;
  cin >> n;
  while (n--) {
    cin >> a >> b >> c;
    if (a+b+c>1) {
      r++; 
    }
  }
  cout << r << "\n";
}
