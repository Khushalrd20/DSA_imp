#include<iostream>
#include<vector>
using namespace std;
#include <bits/stdc++.h>
vector<pair<int,int>> twoSum(vector<int>& arr, int target, int n)
{
    // Write your code here. 
    vector<pair<int,int>> ans;
    sort(arr.begin() , arr.end());
    int s = 0, e = n-1;
    while(s<e){
        if(arr[s]+arr[e] == target){
            pair<int,int>p(arr[s],arr[e]);
            ans.push_back(p);
            s++;
            e--;
        }
        else if(arr[s]+arr[e]<target){
            s++;
        }
        else{
            e--;
        }
    }
    if(ans.size() == 0){
        pair<int,int>p(-1,-1);
        ans.push_back(p);
        return ans;
    }
    return ans;
}
int main()
{
    return 0;
}