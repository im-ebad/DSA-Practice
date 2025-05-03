#include <bits/stdc++.h>

using namespace std;

int main() {

  int arr[] = {3, 2, 1, 5, 4};

  int maxi = INT_MIN;
  int sec_max = INT_MIN;

  for (int i = 0; i < 5; i++) {
    maxi = max(maxi, arr[i]);

    if (arr[i] > sec_max && arr[i] != maxi) {
      sec_max = arr[i];
    }
  }
  cout << sec_max << endl;
  return 0;
}
