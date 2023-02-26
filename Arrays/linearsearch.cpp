#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){    //linear search =checking one by one 
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter element you want to search : ";
    int key;
    cin>>key;
    bool found =search(arr,5,key);
    if(found){
        cout<<"key is present "<<endl;

    }
    else{
        cout<<"key is absent "<<endl;
    }
    return 0;
}
// 5
// 1 2 3 4 5
// enter value you want to search : 3
// key is present