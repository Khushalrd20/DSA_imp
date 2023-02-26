#include <iostream>
#include <vector>
#include <bits/stdc++.h> //leetcode duplicate que
using namespace std;

class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        int n = nums.size();
        int i;
        sort(nums.begin(), nums.end());
        vector<int> ans;
        for ( i = 1; i <= n - 1; i++)
        {
            if (nums[i] == nums[i - 1])
            {
                ans.push_back(nums[i]);
            }
        }
        
        return ans;
    }
};

int main(){
    vector<int> ans;
    int arr[10]={1,1,2,2,3,4,5,6,6};
    ans.push_back(arr[10]);
    
    Solution myObj;
    myObj.findDuplicates(ans);
    return 0;
}
