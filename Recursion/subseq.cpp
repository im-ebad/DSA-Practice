#include <bits/stdc++.h>
using namespace std;
void subseq(int i, int n, vector<int> &temp, vector<int> arr) {
  if (i >= n) {
    int result = temp[0];
    for (int x = 1; x < temp.size(); x++) {
      result = gcd(result, temp[x]);
    }
    cout << result << endl;
    return;
  }
  subseq(i + 1, n, temp, arr);
  temp.push_back(arr[i]);
  subseq(i + 1, n, temp, arr);
  temp.pop_back();
}
int main() {
  vector<int> arr{1, 20, 51, 9};
  vector<int> temp;
  subseq(0, 4, temp, arr);
  return 0;
}
