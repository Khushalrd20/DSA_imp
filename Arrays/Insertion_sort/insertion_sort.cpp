#include<iostream>
using namespace std;
void insertionSort(int arr[],int n){     //storing first element as sorted and compairing all elements and placed right or left of starting element
    for(int i=1;i<n;i++){     //w.c t.c =O(n2)   b.c t.c =O(n)   s.c =O(1)
        int temp=arr[i];        //stable algorithm  == duplicate value index cannot change
        int j=i-1;
        for(j;j>=0;j--){
            if(arr[j]>temp){
                //shift not swap in insertin sort
                arr[j+1]=arr[j];
            }
            else{
                break;
                //arr[j]<temp then thamb 
            }
        }
        arr[j+1]=temp;
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{   int arr[6]={4,5,3,6,2,1};
    insertionSort(arr,6);
    printArray(arr,6);
    return 0;
    return 0;
}