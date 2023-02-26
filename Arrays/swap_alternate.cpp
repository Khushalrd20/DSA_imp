#include<iostream>
using namespace std;
void swapAlternate(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);

        }
    }

}

void printArray(int arr[],int n){
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int size;
    cin>>size;
    int array[10];
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    swapAlternate(array,size);
    printArray(array,size);
    return 0;
}
//odd
// 5
// 1 2 3 4 5
// 2 1 4 3 5

// //even 6
// 1 3 5 6 7 8
// 3 1 6 5 8 7