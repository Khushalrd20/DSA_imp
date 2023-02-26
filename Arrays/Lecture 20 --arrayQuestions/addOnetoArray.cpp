#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
 vector<int> addOneToNumber(vector<int> arr)
{
    // Write your code here
    int i = arr.size()-1;
    arr[i]+=1;
    while(i>=0){
        if(arr[i]!=10){
            return arr; //work done
        }
        arr[i]=0;      
        if(i > 0){
            arr[i-1]+=1;
            
        }
        else{
            arr.insert(arr.begin(),1);
        }
        i--;
    }
    return arr;
}
int main()
{
    return 0;
}