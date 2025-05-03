#include <bits/stdc++.h>
using namespace std;
int count1(int n) {
  int count = 0;
  while (n > 0) {
    // if (n % 2 == 1)
    //   count += 1;
    // n = n / 2;
    count += n & 1;
    n = n >> 1;
  }
  return count;
}
int main() {
  int n;
  cout << "Enter a number:" << endl;
  cin >> n;
  cout << "Number of set bit:" << count1(n) << endl;
  return 0;
}
