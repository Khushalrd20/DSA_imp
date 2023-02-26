//find power set of array means subasets
// o/p = {{},{1},{2},{3},{1,2},{2,3},{1,3},{1,2,3}}
//use include exclude technique
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>nums,vector<int>output,int index ,vector<vector<int>>&ans){
    //base case
    if(index >= nums.size()){
        ans.push_back(output);
        return ;
    }
    //exclude
    solve(nums,output,index,ans);
    //include
    int element = nums[index];
    output.push_back(element);
    solve(nums,output,index,ans);

}
vector<vector<int>> subsets(vector<int>&nums){
    vector<vector<int>> ans;
    vector<int>output;
    int index = 0;
    solve(nums,output,index,ans);
    //   for(int i =0 ;i<ans.size();i++){
    //     {
    //         for(int j =0 ;j<ans[i].size();j++){
    //                cout<<ans[i][j]<<" ";   
    //         }
              
    //     }
       
    // }cout<<endl;
    //  for (int i = 0; i < ans.size(); i++)
    // {
    //     // j loop
    //     for (int j = 0; j < ans[i].size(); j++)
    //         // print elements of vector
    //         cout << ans[i][j] << " ";
    //     cout << endl;
    // }

    return ans; 
}
int main()
{   vector<int>nums ={1,2,3};
    subsets(nums);
    // for(int i =0 ;i<nums.size();i++){
    //     cout<<nums[i]<<" ";
    // }cout<<endl;
    return 0;
}