#include<iostream>
using namespace std;
#include<vector>
#include<bits/stdc++.h>
class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
       // vector<int>ans ={0};
       // vector<int>temp;
       // temp.push_back(pref);
        for(int i=0;i < pref.size();i++){
            for(int j = i+1 ;j <pref.size();j++){
                pref[i]  = pref[i]  ^ pref[j];
            }
            return pref;
        }
        
    }
};

int main()
{
    vector<int> vec(10);       // Auto deduce type to be iterator of a vector of ints.
   for(auto it = vec.begin(); it != vec.end(); it++)
   {
      cin >> *it;
   }
    for(auto it = vec.begin(); it != vec.end(); it++)
   {
      cout << *it;
   }
   
    return 0;
}