#include <bits/stdc++.h>
using namespace std;
void subseq(int i, int n, vector<int> &temp, vector<int> arr) {
  if (i >= n) {
    for (int x : temp) {
      cout << x << " ";
    }
    cout << endl;
    return;
  }
  subseq(i + 1, n, temp, arr);
  temp.push_back(arr[i]);
  subseq(i + 1, n, temp, arr);
  temp.pop_back();
}
int main() {
  vector<int> arr{1, 2, 3};
  vector<int> temp;
  subseq(0, 3, temp, arr);
  return 0;
}
