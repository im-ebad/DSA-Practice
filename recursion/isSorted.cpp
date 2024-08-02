#include <bits/stdc++.h>
using namespace std;
bool isSorted(int index,vector<int>arr)
{
    if(index==arr.size()-1)return true;
    return arr[index]<=arr[index+1]&&isSorted(++index,arr);
}
int main(){
    vector<int>num{1,2,3,6,5};
    cout<<isSorted(0,num)<<endl;
    return 0;
}
