#include <bits/stdc++.h>

using namespace std;

void permut(int ind,string str){
    if(ind==str.length())
    {
        cout<<str<<endl;
        return;
    }
    for(int i=ind;i<str.length();i++){
        swap(str[ind],str[i]);
        permut(ind+1,str);
        swap(str[ind],str[i]);
    }
}

int main(){
    string str="abc";
    permut(0,str);
    return 0;
}
