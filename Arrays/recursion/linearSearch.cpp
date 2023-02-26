#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool linearSearch(int *arr ,int n,int key){
    //base case
    if(n == 0){
        return 0;
    }
    if(arr[0] == key){
        return 1;
    }
    bool remain = linearSearch(arr + 1 ,n - 1 ,key); 
    return remain;
}
int main()
{   int arr[5] ={1,2,3,4,5};
    bool ans = linearSearch(arr,5,6);
    if(ans){
        cout<<"found"<<endl;

    }
    else{
        cout<<"not found"<<endl;
        
    }
    return 0;
}