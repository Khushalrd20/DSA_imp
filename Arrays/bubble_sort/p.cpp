#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    for(int i=1;i<n;i++){
        bool swapped=false;
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped=false){
            break;
        }
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}
int main()
{   int arr[5]={7,6,5,4,3};
    bubbleSort(arr,5);
   print(arr,5);
    return 0;
}