#include <bits/stdc++.h>

using namespace std;

void combSum(int i, int n, vector<int> &temp, int sum, int arr[]) {
  if (i == n) {
    if (sum == 0) {
      for (auto it : temp) {
        cout << it << " ";
      }
      cout << endl;
    }
    return;
  }
  if (arr[i] <= sum) {
    temp.push_back(arr[i]);
    combSum(i, n, temp, sum - arr[i], arr);
    temp.pop_back();
  }
  combSum(i + 1, n, temp, sum, arr);
}

int main() {
  vector<int> temp;
  int arr[] = {2, 3, 6, 7};
  combSum(0, 4, temp, 7, arr);
  return 0;
}
