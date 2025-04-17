#include <iostream>
using namespace std;
int main() {
  string str;
  cin >> str;
  int hash[26] = {0};
  for (int i = 0; i < str.size(); i++) {
    char ch = str[i] - 'a';
    hash[ch]++;
  }
  for (auto it : hash) {
    cout << it << endl;
  }
  return 0;
}
