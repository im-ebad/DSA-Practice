#include <bits/stdc++.h>

using namespace std;

void subsetSum(int i,vector<int>arr,vector<int>&ans,int sum){
    if(i==arr.size()){
        ans.push_back(sum);
        return;
    }
    subsetSum(i+1,arr,ans,sum);
    subsetSum(i+1,arr,ans,sum+arr[i]);
}

int main(){
    vector<int>arr{1,2,3};
    vector<int>ans;
    subsetSum(0,arr,ans,0);
    for(auto it:ans)cout<<it<<" ";
    cout<<endl;
    return 0;
}
