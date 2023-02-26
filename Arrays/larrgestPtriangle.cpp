//largest perimeter of triangle
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int perimeter(vector<int>arr){
    sort(arr.begin(),arr.end());
    for(int i= arr.size()-3;i>=0;i--){  // 3 because of triangle
        if(arr[i] + arr[i+1] > arr[i+2]){   //if shorter two sides are not greater or equal then 0
            return arr[i] + arr[i+1] + arr[i+2];
        }
    }
    return 0;
}
int main()
{   vector<int >arr ={3,2,3,4}; //10
    
    cout<<perimeter(arr);
    return 0;
}