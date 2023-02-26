#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int s=0;
    int end=n-1;
    while(s<=end){
        swap(arr[s],arr[end]);
        s++;
        end--;

    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{   int arr[10]={1,2,3,4,5,6,7,8,9,10};
    reverse(arr,10);
    
    print(arr,10);
    return 0;


}
  
