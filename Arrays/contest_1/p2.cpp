//Ninja And The Possible Configurations
//https://www.codingninjas.com/codestudio/contests/codestudio-weekend-contest-42/6285057/problems/22809?leftPanelTab=0
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> largestConfiguration(int n, int k, vector<int> &a) {
    // Write your code here.
    
    int target=n-k;
    int ans=a[0], pos=0;
    for(int i=1;i<=k;i++)
    {
        if(a[i]>ans)
        {
            pos=i;
            ans=a[i];
        }
    }
    
    vector<int> b(a.begin()+pos, a.begin()+pos+target);
    return b;
}
int main()
{   vector<int>a ={2,6,3,4,5};
   

    


    return 0;
}