//unstable means its replaced the duplicated elements with original onces
//e.g unstable sorted list=[A(position 3), A(position 1), B, C(position 5), C(position 2), D]
//it is unstable algorithm 
//in selection sort we compair first with all elements and consider that 
//element as minimum and plus the values 
//t.c = O(n2)  s.c =O(n)
#include<iostream>  
using  namespace std;
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j = i+1 ;j<=n-1;j++){
            if(arr[j]< arr[minIndex]){
            minIndex = j ;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{   int arr[6]={4,5,3,6,2,1};
    selectionSort(arr,6);
    printArray(arr,6);
    return 0;
}