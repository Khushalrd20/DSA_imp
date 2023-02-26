//imp
#include<iostream>
#include<vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& matrix){
    int row  = matrix.size();
    int col  = matrix[0].size();
    //index 
    int startingRow = 0 ;
    int endingRow   = row - 1 ;
    int startingCol = 0;
    int endingCol = col - 1 ;

    int total = row * col ;
    int count = 0;
    vector<int >ans;
    while(count < total ){

        //printting first row 
        for (int index = startingCol ; count < total && index <= endingCol ;index ++){
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;

        //printing ending col
        for(int index = startingRow ;count< total && index<=endingRow;index++){
             ans.push_back(matrix[index][endingCol]);
             count++;
        }
        endingCol--;
        //printing ending row

        for(int index = endingCol ;index>=startingCol;index--){
             ans.push_back(matrix[endingRow][index]);
             count++;

        }
        endingRow--;

        //print startingCol
        for(int index = endingRow ;index>=startingRow;index--){
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
}
int main()
{
    return 0;
}