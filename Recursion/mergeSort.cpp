#include <bits/stdc++.h>
using namespace std;
void merge(int low, int mid, int high, vector<int> &arr) {
  int i = low;
  int j = mid + 1;
  vector<int> temp;
  while (i <= mid && j <= high) {
    if (arr[i] <= arr[j])
      temp.push_back(arr[i++]);
    else
      temp.push_back(arr[j++]);
  }
  while (i <= mid)
    temp.push_back(arr[i++]);
  while (j <= high)
    temp.push_back(arr[j++]);
  for (i = low; i <= high; i++) {
    arr[i] = temp[i - low];
  }
}
void mergeSort(int low, int high, vector<int> &arr) {
  if (low < high) {
    int mid = (low + high) / 2;
    mergeSort(low, mid, arr);
    mergeSort(mid + 1, high, arr);
    merge(low, mid, high, arr);
  }
}

int main() {
  vector<int> arr{1, 3, 5, 7, 9, 2, 4, 6, 8};
  mergeSort(0, arr.size() - 1, arr);
  for (auto it : arr)
    cout << it << " ";
  cout << endl;
}
