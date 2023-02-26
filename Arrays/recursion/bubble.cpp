#include<iostream>
using namespace std;
void bubbleS(int arr[],int n){
    //base 
    if(n == 0 || n ==1){
        return ;
    }
    for(int i =0 ;i<n-1 ;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleS(arr,n-1);// n-1 === last place is already occupied by right element
}
int main()
{   int arr[5]= {4,2,7,1,1};
    bubbleS(arr,5);
    for(int i =0 ;i<5;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}