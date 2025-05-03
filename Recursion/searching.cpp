#include <bits/stdc++.h>
using namespace std;
bool isPresent(int index, int target, vector<int> arr) {
  if (index == arr.size())
    return false;
  if (arr[index] == target)
    return true;
  return isPresent(++index, target, arr);
}
int main() {
  int target;
  vector<int> num{1, 2, 3, 4, 5};
  cout << "Enter the elment to be searched:";
  cin >> target;
  cout << isPresent(0, target, num) << endl;
  return 0;
}
