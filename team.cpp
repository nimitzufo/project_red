#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, a , b, c, k=0, i=0;
  cin >> n; 
  while(i<n) {
    cin >> a >> b >> c;
    if (a+b+c>1) k++;
    i++;
  }
  cout << k << endl;
}
