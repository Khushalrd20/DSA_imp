#include<iostream>
#include<vector> ///median of two sorted arrays
#include <bits/stdc++.h> 
using namespace std;  //t.c O(n)
double median(vector<int> a,vector<int> b){
    double ans=0;
    for(int i=0;i<b.size();i++){
        a.push_back(b[i]);   //merge b in to a
    }
    int s=0;
    int e=a.size()-1;
    int mid=s+(e-s)/2;
    sort(a.begin(),a.end());
    if(e%2==0){
        ans=a[mid];
    }
    else{
        ans=a[mid]+a[mid+1];
        ans=ans/2;
    }
    return ans;
}
int main()
{   
    vector<int>a ={2,4,6,8};
    vector<int>b ={1,3,5,7};
    double ans=median(a,b);
    cout<<ans;
    

    return 0;
}