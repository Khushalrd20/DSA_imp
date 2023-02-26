#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) 
{
    // Write your code here.
   vector<vector<int>>ans;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==K)
                {
                    vector<int>temp;
                    temp.push_back(min(arr[i],arr[j],arr[k]));
                    temp.push_back(max(arr[i],arr[j],arr[k]));
                    ans.push_back(temp);
                }
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;

}
int main()
{   vector<int>arr;
    arr.push_back('2');
    arr.push_back('7');
    arr.push_back('11');
    arr.push_back('13');
    
    int k;
    cin>>k;
    findTriplets(arr,arr.size(),9);

    
    

    return 0;
}