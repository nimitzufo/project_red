#include <bits/stdc++.h>
using namespace std;

short parity(unsigned long x) {
  short result = 0;
  while (x) {
    result ^= (x & 1);
    x >>= 1;
  }
  return result;
}
int main() {
  int n, p;
  cin >> n;
  p = parity(n);
  cout << p << endl;
}
