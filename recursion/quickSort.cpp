#include <bits/stdc++.h>
using namespace std;

int partition(int low, int high, vector<int> &arr) {
  int pivot = arr[low];
  int start = low;
  int end = high;
  while (start < end) {
    while (arr[start] <= pivot)
      start++;
    while (arr[end] > pivot)
      end--;
    if (start < end)
      swap(arr[start], arr[end]);
  }
  swap(arr[low], arr[end]);
  return end;
}

void quickSort(int low, int high, vector<int> &arr) {
  if (low < high) {
    int loc = partition(low, high, arr);
    quickSort(low, loc - 1, arr);
    quickSort(loc + 1, high, arr);
  }
}

int main() {
  vector<int> arr{100, 90, 80, 70, 60, 50, 40, 20, 10};
  quickSort(0, arr.size() - 1, arr);
  for (auto it : arr)
    cout << it << " ";
  cout << endl;
}
