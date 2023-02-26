#include<iostream>
using namespace std;
int rowMaxSum(int arr[][3]){         //rowise sum
    int maxi = INT_MIN;
    int rowIndex = -1;
    for(int i=0;i<3;i++)
    {   
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        
            if(sum > maxi){
                maxi = sum ;
                rowIndex = i ;

            }
    
    }   
    return rowIndex; 
    
}
int main()
{   int arr[3][3]={3,4,11,2,12,1,7,8,7};
    cout<<"max row INdex is : "<< rowMaxSum(arr)<<endl;
    return 0;
}