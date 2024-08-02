#include <bits/stdc++.h>
using namespace std;
void subset(int index,string str,vector<char>temp){
    if(index>=str.length()){
        for(auto it:temp){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    subset(index+1,str,temp);
    temp.push_back(str[index]);
    subset(index+1,str,temp);
}

int main(){
    string str;
    cout<<"Input the string:";
    cin>>str;
    vector<char>temp;
    subset(0,str,temp);
    cout<<endl;
    return 0;
}

