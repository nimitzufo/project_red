#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, k, i, g, c=0;
  cin >> n >> k;
  int arr[n];
  for (i=0;i<n;i++) {
    cin >> arr[i];
  }
  g = arr[k-1];
  for (i=0;i<n;i++) {
    if (arr[i]>=g && arr[i]>0) c++;
  }
  cout << c << "\n";
}
