#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, r=0;
  string s;
  cin >> n;
  while(n--) {
    cin >> s;
    if (s=="X++" || s=="++X") r++;
    if (s=="X--" || s=="--X") r--;
  }
  cout << r << "\n";
}

