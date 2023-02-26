#include<iostream>
using namespace std;
bool isPresent(int arr[][3],int target,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}
int main()
{   int a[3][3];
    for(int i=0;i<3;i++){
        for(int j = 0 ;j<3;j++){
            cin>>a[i][j];
        }
    }
    //row wise
    for(int i=0;i<3;i++){
        for(int j = 0 ;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //col wise
    // for(int j=0;j<3;j++){
    //     for(int i = 0 ;i<3 ;i++){
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // return 0;
    int target;
    cin>>target;
    if(isPresent(a,target,3,3)){
        cout<<"found"<<endl;

    }
    else{
        cout<<"not found"<<endl;
        
    }
}