#include<iostream>
using namespace std;
// int binarySearch(int arr[],int size,int key){
//     int start=0;
//     int end=size-1;
//     int mid = start + (end - start)/2; // this formula is solve int_max = 2^31 -1 exceed problem 
//     while(start <=end){
//         if(arr[mid]==key){    // comparing key with mid
//             return mid;
//         }
//         if(key > arr[mid]){  // key is greater then move toward s the right part means update the start
//             start=mid + 1;
//         }
//         else{
//             end= end - 1;  // key is less then move toward left parts means update the end
//         }
//          mid = start + (end - start)/2;    // if both start or end are updated then mid also update
//     }
//     return -1;
// }
int binarySearch(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid =s +(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        if(key > arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main()
{   
    int even[7]={10,20,30,40,50,60,70};
    
    int odd[5]={2,4,6,8,10};
    int index = binarySearch(even,7,50);
    cout<<"index of key is : "<<index<<endl;
 
    int ind = binarySearch(odd,5,10);
    cout<<"index of key is : "<<ind<<endl;
    return 0;
}
