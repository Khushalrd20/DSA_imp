#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols){ //two vector repesents 2d array
    vector<int>ans;
    for(int col =0 ;col<mCols;col++){
     //   ans.push_back(arr[row][col]);
     if(col&1){
        //for odd
        //bottom to top
        for(int row=nRows-1;row>=0;row--){
            ans.push_back(arr[row][col]);
        }
     }
     else{
        for(int row=0;row<nRows;row++){
            ans.push_back(arr[row][col]);
        }
     }

    }
    // for(int col=0;col<mCols;col++){
    //     if(col&1)// odd index -bottom to top
    //     {
    //             for(int row = nRows -1 ;row>=0;row--){
    //                 ans.push_back(arr[row][col]);

                    
    //             }
            
    //     }
    //     else{
    //         //even index - top to bottom
    //         for(int row =0;row<nRows;row++){
    //                   ans.push_back(arr[row][col]);
    //         }

    //     }
        
    
    return ans;
}
int main()
{
    return 0;
}