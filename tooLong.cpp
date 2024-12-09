#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, i;
  string s;
  cin >> n;
  for (i=0;i<n;i++) {
    cin >> s;
    cout << ((s.length()>10) ? s[0] + to_string(s.length() - 2) + s[s.length()-1] : s) << endl;
  }
}
