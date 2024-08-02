#include <bits/stdc++.h>
using namespace std;
//Uisng two Pointer
bool isPalindrome(int i,int j,string &str){
    if(i>j)return true;
    if(str[i]!=str[j])return false;
    return isPalindrome(i+1,j-1,str);
}
//Using One Pointer
/*bool isPalindrome(int i,string str){
    if(i>str.length()/2)return true;
    if(str[i]!=str[str.length()-i-1])return false;
    return isPalindrome(i+1,str);
}*/
int  main(){
    string str;
    cout<<"Input a string:";
    cin>>str;
    // cout<<isPalindrome(0,str)<<endl;
    if(isPalindrome(0,str.length()-1,str)==true)
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not a isPalindrome"<<endl;
    return 0;
}

