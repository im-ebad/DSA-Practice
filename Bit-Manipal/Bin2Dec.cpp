#include <bits/stdc++.h>

using namespace std;

string convert2Binary(int num) {

  string x;

  while (num > 0) {
    if (num % 2 == 1)
      x += "1";
    else
      x += "0";
    num /= 2;
  }

  reverse(x.begin(), x.end());
  return x;
}

int main() {

  int num;
  cout << "Enter the Decimal Number:" << endl;
  cin >> num;
  cout << "The Binary Equivalent:" << convert2Binary(num) << endl;
  return 0;
}
