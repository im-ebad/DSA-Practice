#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(int i, int j, string s) {
  if (i > j)
    return true;
  return s[i] == s[j] && isPalindrome(i + 1, j - 1, s);
}

int main() {
  string s;
  cin >> s;
  cout << isPalindrome(0, s.length() - 1, s) << endl;
  return 0;
}
