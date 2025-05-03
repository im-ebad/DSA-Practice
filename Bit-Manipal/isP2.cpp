#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cout << "Enter a number:" << endl;
  cin >> n;
  if ((n & n - 1) == 0)
    cout << n << " is power of 2" << endl;
  else
    cout << n << " is not power of 2" << endl;
  return 0;
}

// Example
/*
n = 16       1 0 0 0 0
n-1 = 15     0 1 1 1 1
            ------------
             0 0 0 0 0
*/
