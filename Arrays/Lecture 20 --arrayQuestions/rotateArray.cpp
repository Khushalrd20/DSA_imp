#include<iostream>
#include<vector>
using namespace std;
void rotateArray(vector<int> &arr,int n,int k){
    vector<int> temp(n);   //here address of vector is important because it cant rotate 
    for(int i=0;i<n;i++){  //because temp v is created and address giving is imp
        temp[(i+k)%n]=arr[i]; //if we cant take temp then values are overwritten
    }  //% n gives the values between 0-(n-1)
    arr=temp;
}
void printArray( vector<int> &arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{   vector<int>arr ;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    cout<<"size :"<<arr.size()<<endl;
    rotateArray(arr,4,2);
    printArray(arr,4);
    return 0;
}
// size :4
// 3 4 1 2