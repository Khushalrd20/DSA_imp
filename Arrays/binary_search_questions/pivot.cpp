#include<iostream>      //pivot =one part sorted and next part sorted
using namespace std;    //rotated  4 5 6 7 8 1 2 3  pivot = 1
int getPivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

int main()
{   
    int arr[5]={3,8,10,17,1};
    int index=getPivot(arr,5);
    cout<<"pivot is : "<<index;
    return 0;
}