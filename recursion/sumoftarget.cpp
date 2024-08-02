
#include <bits/stdc++.h>

using namespace std;

void subsetSum(int i,vector<int>arr,vector<int>temp,int target){
    if(i==arr.size()){
        if(target==0){
            for(auto it:temp)
            {
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    if(arr[i]<=target){
        temp.push_back(arr[i]);
        subsetSum(i+1,arr,temp,target-arr[i]);
        temp.pop_back();
    }
    subsetSum(i+1,arr,temp,target);
}

int main(){
    vector<int>arr{10,1,2,7,6,1,5};
    vector<int>temp;
    subsetSum(0,arr,temp,8);
    return 0;
}

