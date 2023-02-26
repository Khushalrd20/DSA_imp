#include<iostream>
using namespace std;   //merge sorted arrays  // t.c=O(n)
void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    //vachlele element sathi i chya copy remaining elements 
    while(i<n){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    
    //vachlele element sathi j chya   copy remaining elements 
    while(j<m){
        arr3[k]=arr2[j];
        k++;
        j++;
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}
int main()
{   int arr1[5]={1,3,5,7};
    int arr2[3]={2,4,6};
    int arr3[7]={0};
    merge(arr1,5,arr2,3,arr3);
    print(arr3,7);
    return 0;
}
  //1 2 3 4 5 6 7

//leetcode merge sorted array solution
// void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//       int count=0;
//         for(int i=m;i<m+n;i++){
//           nums1[i]=nums2[count++];
//        }
//         sort(nums1.begin(),nums1.end());
//     }