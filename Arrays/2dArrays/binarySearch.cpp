#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool binarySearch(vector<vector<int>>arr,int row ,int col ,int key){
        int s =0 ;
        int e = row*col -1;
        int mid =s +(e-s)/2;
        while(s<=e){   ///t.c O(log nm) // for 2darrays
            int element = arr[mid/col][mid%col];   // mid /colIndex-->quotient  [mid%colIndex]-->remainder
            if(element == key){
                return 1;
            }
            if(element < key){
                s = mid + 1;
            }
            else{
                e = mid -1 ;
            }
            mid = s + (e-s)/2;
        }
        return 0;
}        
int main()
{   vector<vector<int>> arr = {{1 ,2,3},{4 ,5,6},{7,8,9}};
    for(int i= 0;i<arr.size();i++){
        for(int j =0 ;j<arr[0].size();j++){
            cout<<arr[i][j]<<" ";
        }
    }
    bool found = binarySearch(arr,arr.size(),arr[0].size(),5);
    if(found){
        cout<<" found"<<endl;

    }
    else{
        cout<<"not  found"<<endl;
        
    }
    return 0;
}