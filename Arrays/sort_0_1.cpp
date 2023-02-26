#include<iostream>
using namespace std;
void sort1(int arr[] ,int n){
    int left=0,right=n-1;

    while(left < right){

        while(arr[left]==0){
            left++;
        }
        while(arr[right]==1){
            right--;
        }
        //ithe pohchla mhnje
        //arr[i]=1,arr[j]=0 then swap them
        if(left < right ){
        swap(arr[left],arr[right]);
        left++;
        right--;
        }
    }
}

void printA(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{   
    int arr[8]={1,1,1,1,1,0,0,0};
    sort1(arr,8);
    printA(arr,8);
    return 0;
}
// 0 0 0 0 0 1 1 1