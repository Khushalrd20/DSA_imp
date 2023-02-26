#include<iostream>
using namespace std;
void merge(int *arr ,int s ,int e){
    int mid = s + (e-s)/2;
    int len1 = mid - s + 1; // if mid is 3 the 3 - 0  + 1= 4  
    int len2 = e - mid;

    //creating dynamically 
    //manually free memory
    int mainArrayIndex = s;
    int *first = new int[len1];
    int *second  = new int[len2];
    //copying element int two arrays
    for(int i =0;i<len1;i++){
        first[i] = arr[mainArrayIndex++] ;  // first array
    }
    mainArrayIndex = mid+1;
    for(int i =0;i<len2;i++){
        second[i] = arr[mainArrayIndex++] ; // second array
    }
    //merge two sorted arrays
    int index1= 0;
    int index2= 0;
    mainArrayIndex = s;
    while(index1<len1 && index2<len2){
        
        if(first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
           arr[mainArrayIndex++] = second[index2++];
     
        }    
    }
       
        while(index1<len1){
            arr[mainArrayIndex++] = first[index1++];
        }
        while(index2<len2){
            arr[mainArrayIndex++] = second[index2++];
        }
        //deleting allocated memory
        delete []first;
        delete []second;

    


    
}
void mergeSort(int *arr ,int s ,int e){
    //base case
    if(s>=e){
        return ;

    }
    int mid =  s+(e-s)/2;
    mergeSort(arr,s,mid); //sort left parT
    mergeSort(arr,mid+1,e); //sort right part
    merge(arr,s,e);

}
int main()
{   int arr[6]={23,12,11,56,8,1};
    mergeSort(arr,0,6);
    for(int i =0 ;i<6;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}