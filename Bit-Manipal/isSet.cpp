#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, i;
  cout << "Enter a number:" << endl;
  cin >> n;
  cout << "Enter ith-bit:" << endl;
  cin >> i;
  // using leftshit
  // if (1 << i & n)
  //   cout << "ith-bit is set i.e 1" << endl;
  // else
  //   cout << "ith-bit is not set i.e 0" << endl;
  // using rightshift
  if (1 & n >> i)
    cout << "ith-bit is set i.e 1" << endl;
  else
    cout << "ith-bit is not set i.e 0" << endl;

  return 0;
}
