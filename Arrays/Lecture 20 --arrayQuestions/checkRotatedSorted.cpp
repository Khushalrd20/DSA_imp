#include<iostream>
#include<vector>
using namespace std;
bool rsArray(int arr[],int n){
    int count=0;
    for(int i=1;i<n;i++){ //0 and 1 pair is true 
        if(arr[i-1]>arr[i]){
            count++;
        }
    }
    if(arr[n-1]>arr[0]){
        count ++;
    }
    if(count<=1){  //if pairs are greater than one then false
        return true;
    }
    else{
        return false;
    }
}
int main()
{   int arr[5]={3,4,5,1,2};// rotated sorted means last element is always less than first
        //and sorted
    bool ans = rsArray(arr, 5);
    if(ans==true){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

    return 0;
}