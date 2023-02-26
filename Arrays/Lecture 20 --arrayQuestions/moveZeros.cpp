#include<iostream>
using namespace std;
void move(int arr[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=0){      //e.g 12!=0 the swap 
            swap(arr[j],arr[i]);
            i++;
        }
        //0==0 then ignore
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
     cout<<endl;
}
int main()
{   int arr[5]={1,0,2,0,3};
    move(arr,5);
    print(arr,5);
    return 0;
}
//1 2 3 0 0