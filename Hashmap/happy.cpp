#include <bits/stdc++.h>
using namespace std;
int sod(int n) {
  int sum = 0;
  while (n) {
    int ld = n % 10;
    sum += ld * ld;
    n /= 10;
  }
  return sum;
}
bool isHappy(int num) {
  unordered_set<int> uset;
  int temp = sod(num);
  if (temp == 1)
    return true;
  while (uset.find(temp) == uset.end()) {
    uset.insert(temp);
    isHappy(num);
  }
  return false;
}
int main() {
  int num;
  cin >> num;
  cout << isHappy(num);
  return 0;
}
