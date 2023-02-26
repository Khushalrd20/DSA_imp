#include<iostream>    // row and column elements are both sorted 
#include<bits/stdc++.h>
using namespace std;
bool binarySearch(vector<vector<int>>arr,int row ,int col,int key){  //t.c = O(log nm)
    int rowIndex = 0 ;
    int colIndex = col -1 ;
    while(rowIndex < row && colIndex>=0){
        int element = arr[rowIndex][colIndex];
        if(element == key){
            return 1 ;
        }
        if(element < key){
            rowIndex++;
        }
        else{
            colIndex--;
        }
    }
    return 0;
    //int these we are traversing from 0th row and col -1  if valuse is less then row++ and is greater the col-- 
}
int main()
{   vector<vector<int>> arr = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    for(int i= 0;i<arr.size();i++){
        for(int j =0 ;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    bool found = binarySearch(arr,5,5,1);
    if(found){
        cout<<" found"<<endl;

    }
    else{
        cout<<"not  found"<<endl;
        
    }
    return 0;
}
// 1 4 7 11 15
// 2 5 8 12 19
// 3 6 9 16 22
// 10 13 14 17 24
// 18 21 23 26 30
//  found