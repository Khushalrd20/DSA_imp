#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> &arr, int n)
{
    // Write your code here
    string ans ;
    //checking first with all
    for(int i = 0 ;i<arr[0].size();i++){
        char ch = arr[0][i] ;
        bool match = true ;
        for(int j = 0 ;j<n;j++){
            //not match
            if(ch != arr[j][i]){
                match =false;
                break ;
            }
        }
        if(match == false){
                break ;
        }
        else{
            ans.push_back(arr[0][i]);
        }
    }
    return ans ;
}
int main()
{
    return 0;
}


