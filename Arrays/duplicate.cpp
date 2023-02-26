#include<iostream>
using namespace std;
int findDuplicate(int arr[],int n) 
{
    // Write your code here
	int ans=0;
    for(int i=0;i<n;i++){    // XOR method a^a=0,0^a=a
        ans=ans^arr[i];  //
    }
    
    for(int i=1;i<n;i++){
        ans=ans^i;
    }
    cout<<ans;
    return ans;
}

int main()
{   int size;
    cin>>size;
    int array[10];
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    findDuplicate(array,size);
    return 0;
   
}
// 5
// 1 2 1 3 4
// 1

//second sol
// #include <bits/stdc++.h> 

// int findDuplicate(vector<int> &arr, int n){
// 	// Write your code here.
    
//     sort(arr.begin(),arr.end());
//     for(int i=1;i<n;i++){
//         if(arr[i] == arr[i-1]){
//             return arr[i];        }        
//     }
//    }
