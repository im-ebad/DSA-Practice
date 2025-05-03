#include <bits/stdc++.h>
using namespace std;
void reversed(int i, vector<int> &temp) {
  if (i >= temp.size() / 2)
    return;
  swap(temp[i++], temp[temp.size() - i - 1]);
  reversed(i, temp);
}
/*void reversed(int i,int j,vector<int>&temp){
    if(i>j)return;
    swap(temp[i++],temp[j--]);
    reversed(i,j,temp);
}*/
int main() {
  vector<int> temp = {10, 20, 30, 40, 50};
  reversed(0, temp);
  //    reversed(0,temp.size()-1,temp);
  for (auto x : temp)
    cout << x << " ";
  cout << endl;
  return 0;
}
