#include<iostream>
using namespace std;           // first and last occurence of number
int firstocc(int arr[],int size,int key){
    int s=0,e=size-1;
    int mid =s + ( e - s)/2;
    int ans =-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e = mid -1 ;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        
        else if(key < arr[mid]){
            e = mid - 1;
        }
        mid =s + ( e-s)/2;
    }
    return ans;
}
int lastocc(int arr[],int size,int key){
    int s=0,e=size-1;
    int mid =s + ( e -s)/2;
    int ans =-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            s= mid + 1 ;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        
        else if(key < arr[mid]){
            e = mid - 1;
        }
        mid =s + ( e -s)/2;
    }
    return ans;
}
int main()
{   int even[6]={1,2,3,3,4,5}; 
    
    //int odd[5]={2,4,6,8,10};
    int ans =firstocc(even,6,3);
    cout<<"index of key is : "<<ans<<endl;
 
    int ind = lastocc(even,6,3);
    cout<<"index of key is : "<<ind<<endl;
    return 0;
}
// // pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
// {
//  pair<int,int>p;
//     p.first= firstOcc(arr,n,k);   pair is used to store two int values in it
//      p.second= lastOcc(arr,n,k);
//     return p;
// }