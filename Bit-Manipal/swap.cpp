#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  cout << "Before Swap" << endl;
  cout << "a:" << a << " "
       << "b:" << b << endl;
  a = a ^ b;
  b = a ^ b; // a^b^b=a
  a = a ^ b; // a^b^a=a
  cout << "After Swap" << endl;
  cout << "a:" << a << " "
       << "b:" << b << endl;
  return 0;
}

// XOR return 0 for same value
