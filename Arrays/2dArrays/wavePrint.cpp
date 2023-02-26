#include<iostream>
#include<vector>    //wave print matrix
//t.c =O(nm)
using namespace std;
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols){ //two vector repesents 2d array
    vector<int>ans;
    for(int col=0;col<mCols;col++){
        if(col&1)// odd index -bottom to top
        {
                for(int row = nRows -1 ;row>=0;row--){
                    ans.push_back(arr[row][col]);

                    
                }
            
        }
        else{
            //even index - top to bottom
            for(int row =0;row<nRows;row++){
                      ans.push_back(arr[row][col]);
            }

        }
        
    }
    return ans;
}
int main()
{   vector<vector<int>>arr ;//{1,2,3,4,5,6,7,8,9};
    vector <int>ans;
   // ans.push_back(wavePrint);

    return 0;
}