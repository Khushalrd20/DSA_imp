//search in rotated array
#include<iostream>
#include<vector>
#include<bits/stdc++.h>

int getPivot(vector<int>& arr,int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid] >=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;   
        }
         mid=s+(e-s)/2;
    }
     return s;
}
int binarySearch(vector<int>&arr,int s1,int e1,int key){
    int s=s1;
    int e=e1;
    int mid =s +(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        else if(key > arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int findPosition(vector<int>& arr, int n, int k)
{    
    int pivot=getPivot(arr,n);
    if(k>=arr[pivot] && k <= arr[n-1] ){       //for 2nd line
        return binarySearch(arr,pivot,n-1,k);
    }
    else{//for 1st line
        return binarySearch(arr,0,pivot-1,k);
    }
    // Write your code here.
    // Return the position of K in ARR else return -1.
}
int main(){

}

