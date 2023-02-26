#include<iostream>
using namespace std;
void rowSum(int arr[][3]){         //rowise sum
  
    for(int i=0;i<3;i++)
    {   
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
    
    }    
    
}
void colSum(int arr[][3]){   //colwise
    
    for(int j=0;j<3;j++)
    {   int sum=0;
        for(int i=0;i<3;i++){
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
    
    }    
    
}
int main()
{   int arr[3][3]={3,4,11,2,12,1,7,8,7};
    rowSum(arr);
    cout<<endl;
    colSum(arr);
    return 0;
}