#include<iostream>
using namespace std;
int sum(int *arr ,int n){
    //base con
     if(n == 0){
        return 0;
     }
    if( n ==1){
        return arr[0];
    }
    int ans  = arr[0] + arr[1];
    return ans + sum(arr+2,n-2);
}
bool isSorted(int *arr,int n){
    //base case
    if(n == 0 || n == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool remain = isSorted(arr+1,n-1);
        return remain;
    }
}
int main()
{   int arr[5]={1,2,3,4,5};
    bool ans = isSorted(arr,5);
    if(ans){
        cout<<"sorted"<<endl;
    }
    else{
        cout<<"not sorted"<<endl;
    }
    int plus = sum(arr,5);
    cout<<plus<<endl;
    return 0;
}