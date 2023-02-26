// // // void printPattern(int n)
// // // {
// // //     for (int i = 1; i <= n; i++)
// // //     {
// // //         for (int j = n; j > i; j--)
// // //             printf(" ");
// // //         for (int k = 0; k < i; k++)
// // //             printf("*");
// // //         if (i == 1)
// // //         {
// // //         }
// // //         else
// // //         {
// // //             for (int l = 0; l < i - 1; l++)
// // //                 printf("*");
// // //         }
// // //         printf("\n");
// // //     }
// // // }

// // #include<iostream>
// // #include<bits/stdc++.h>
// // using namespace std;
// //  void moveZerosToEnd(vector<int>&nums, int n)
// // {
   
// //     int count = 0;
    
   
// //     for (int i = 0; i < n; i++)
// //         if (nums[i] != 0)
// //             swap(nums[count++], nums[i]);
   
// // }   
// //     vector<int> applyOperations(vector<int>& nums) {
        
// //         for( int i =0 ;i<nums.size();i++){
            
// //             if( nums[i] == nums[i+1]){
// //                 nums[i] = nums[i]*2;
// //                 nums[i+1] = 0;
// //             }
            
// //         }
      
// //          moveZerosToEnd(nums,nums.size());
// //         return nums;
   
   
// //     }

// // int  solve( int n ,vector<string>groups){
  
// // }
// // int main()
// // {    vector<int> num = {0,1};
// // vector<string>a ={"ABB", "DA"};
// //     // applyOperations(num);
// //     // for(int i = 0;i<num.size();i++){
// //     //     cout<<num[i]<<" ";
// //     // }
// //     cout<<solve(2,a);
// //     return 0;
// // }


// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void  solve(vector<string> &s)
// {
//     int cnt1 =0 ,cnt2=0;
    
//     for(int i = 0 ;i<s.size();i++){
//         if(i =='Q'){
//             cnt1++;
//         }
//         if(i=='A'){
//             cnt2++;
//         }
//     }
//     if(cnt2>=cnt1){
//         cout<<"Yes";
//     }
//     else{
//         cout<<"No";
//     }
// }
// int main()
// {   
//     vector<string> s = {"QQA"};
    
//     solve(s);
//     return 0;
// }
// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;

// void solve(vector<int>&arr){
//     int cnt = 0 ;
//     for(int i = 0 ;i<3;i++){
//         if(arr[i] == 1){
//             cnt++;
//         }
//     }
//     cout<<cnt;
// }


// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
//     int n ;
//     cin>>n;
//     for(int i = 0;i<=n;i++){
//         vector<int>arr;
       
//             cin>>arr[0]>>arr[1]>>arr[2];

//             arr.push_back(arr[0]);
//             arr.push_back(arr[1]);
//             arr.push_back(arr[2]);

     
//         solve(arr);
        
//     }
//     return 0;
// }
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
void  solve(string s){
    int cnt1 =0 ,cnt2=0;
    for(int  i=0; i<s.size();i++){
        if(s[i] == 'Q'){
            cnt1++;
        }
        if(s[i]== 'A'){
            cnt2++;
        }
    }
    if(cnt2>=cnt1){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    string s;
    
    for(int i = 0 ;i<=n;i++){
       
        cin>>s;
        solve(s);
    }
    return 0;
}

