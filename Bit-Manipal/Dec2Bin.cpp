#include <bits/stdc++.h>
using namespace std;
int convert2Decimal(string s) {
  int decimal = 0;
  int p2 = 1;
  for (int i = s.size() - 1; i >= 0; i--) {
    if (s[i] == '1')
      decimal += p2;
    p2 *= 2;
  }
  return decimal;
}
int main() {
  string s;
  cout << "Enter the Binary Number:" << endl;
  cin >> s;
  cout << "The Decimal Equivalent:" << convert2Decimal(s) << endl;
  return 0;
}
