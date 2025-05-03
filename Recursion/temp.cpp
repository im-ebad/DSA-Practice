#include <iostream>
#include <string>
using namespace std;
bool palindrome(int i, int j, string s) {
  if (i > j)
    return true;
  return s[i] == s[j] && palindrome(i + 1, j - 1, s);
}
int main() {
  string s;
  cin >> s;
  cout << palindrome(0, s.length() - 1, s) << endl;
  return 0;
}
