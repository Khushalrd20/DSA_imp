#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void merge(int *arr,int s ,int e){
    int mid = s + (e-s)/2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int mainArrayIndex =s ;
    int *num1 = new int[len1];
    int *num2 = new int[len2];
    for(int i = 0 ;i<len1;i++){
        num1[i] = arr[mainArrayIndex++];

    }
    mainArrayIndex = mid+1;
    for(int i = 0 ;i<len2;i++){
        num2[i] = arr[mainArrayIndex++];

    }
    mainArrayIndex = s ;
    int index1  =0; 
    int index2  =0 ;
    while(index1 < len1 && index2<len2){
        if(num1[index1] < num2[index2]  ){
            arr[mainArrayIndex++] = num1[index1++];
        }
        else{
            arr[mainArrayIndex++] = num2[index2++];

        }


    }
        while(index1 < len1 ){
            arr[mainArrayIndex++] = num1[index1++];

        }
        while(index2 < len2 ){
            arr[mainArrayIndex++] = num2[index2++];

        }

}
void mergeSort(int *arr ,int s,int e){
    //base case
    if(s>=e){
        return;
    }
    int mid = s+(e-s)/2;
    //left part sort kar
    mergeSort(arr,0 ,mid);
    //right par t sort kar
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);

}
int main()
{
     int arr[6]={23,12,11,56,8,1};
    mergeSort(arr,0,6);
    for(int i =0 ;i<6;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}
