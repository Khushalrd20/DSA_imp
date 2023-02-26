//peak of mountain 
//means e.g arr[6]={0,1,3,5,3,1}
//leetcode
#include<iostream>
using namespace std;
int peakofmountain(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid=s + (e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1 ;

        }
        else{
            e=mid;
        }
        mid=s + (e-s)/2;
    }
    return s;
}
int main()
{   
    //mountain array
    int arr[8]={0,1,3,5,3,1,0,0};

    int index = peakofmountain(arr,8);
    cout<<"peak index is : "<<index; 

    return 0;
}