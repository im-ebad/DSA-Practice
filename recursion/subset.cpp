#include <iostream>
#include <vector>
using namespace std;
void subset(int index,vector<int> num,vector<int>temp){
    if(index>=num.size()){
        for(auto it:temp){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    subset(index+1,num,temp);
    temp.push_back(num[index]);
    subset(index+1,num,temp);
}

int main(){
    vector<int>num{1,2,3};
    vector<int>output;
    subset(0,num,output);
    cout<<endl;
    return 0;
}
