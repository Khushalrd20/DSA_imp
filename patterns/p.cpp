#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
void sort1(string   &arr){
    int left=0,right= arr.length()-1;

    while(left < right){

        while(arr[left]==0){
            left++;
        }
        while(arr[right]==1){
            right--;
        }
        //ithe pohchla mhnje
        //arr[i]=1,arr[j]=0 then swap them
        if(left < right ){
        swap(arr[left],arr[right]);
        left++;
        right--;
        }
    }
    for(int i=0;i<arr.length();i++){
        cout<<arr<<endl;
    }
    
}

int mexString(string &a) {
    // Write your code here.
    int count = 0;
    //  vector<string > ans;
    // ans.push_back(a);
    
    // int i=0;
    // for(int i =0 ;i<a.size();i++)
    // {
    //     if(ans[i] == "0"){
    //         count++;
    //         ans.pop_back();



            
            
    //     }
        
    //     else{
    //         count++;
            
    //     }
    // }
    return count;
}


int main()
{   string arr ="101010";
    sort1(arr);
  //  print(arr);
    //print(a);
    return 0;
}