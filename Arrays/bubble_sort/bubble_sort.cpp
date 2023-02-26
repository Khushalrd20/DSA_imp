#include<iostream>
using namespace std; //compairing alternate elements in bubble sort
void bubbleSort(int arr[],int n)  // t.c (w.c)=O(n2)   //b.c =O(n)
{
    for(int i=1;i<n;i++){   //round    //stable algorithm
        bool swapped=false;   //this is optimized solution  O(n)
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);     
                swapped=true;
            }
        }
        if(swapped==false){
            //already sorted
            break;
        }
    }
    
}
void printArrays(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{   int arr[5]={7,6,5,4,3};
    bubbleSort(arr,5);
    printArrays(arr,5);
    return 0;
}