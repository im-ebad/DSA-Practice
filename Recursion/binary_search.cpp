#include <bits/stdc++.h>
using namespace std;
bool binarySearch(int low, int high, int target, vector<int> num) {
  int mid = (low + high) / 2;
  if (low > high)
    return false;
  if (num[mid] == target)
    return true;
  else if (target <= num[mid])
    return binarySearch(low, mid - 1, target, num);
  else
    return binarySearch(mid + 1, high, target, num);
}
int main() {
  vector<int> num{10, 20, 30, 40, 50};
  cout << binarySearch(0, num.size() - 1, 0, num) << endl;
  return 0;
}
