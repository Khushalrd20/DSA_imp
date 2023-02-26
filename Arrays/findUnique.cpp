#include<iostream>
using namespace std;
int unique(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
        
    }
    cout<<ans;
    return ans;
}
int main()
{
     int size;
    cin>>size;
    int array[10];
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    unique(array,size);
    
    return 0;
}