// #include <bits/stdc++.h> 
// #include<vector>
// vector<int> reverse(vector<int>v){
//     int s=0;
//     int e=v.size()-1;
//     while(s<e){
//         swap(v[s++],v[e--]);
//     }
//     return v;
    
// }
// vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
// 	// Write your code here.
//     int i=n-1;
//     int j=m-1;
//     int carry=0,value;
//     vector<int>ans;
//     while(i>=0 && j>=0){
//         int val1=a[i];
//         int val2=b[j];
//         int sum = val1 + val2 + carry;
//         carry = sum /10;
//         value = sum %10;
//         ans.push_back(value);
//         i--;
//         j--;
//     }
//     while(i>=0){
//         int val1=a[i];
//         int sum = val1 + carry;
//         carry = sum /10;
//         value = sum %10;
//         ans.push_back(value);
//         i--;
       
//     }
//     while(j>=0){
//         int val2=b[j];
//         int sum = val2 + carry;
//         carry = sum /10;
//         value = sum %10;
//         ans.push_back(value);
//         j--;  
//     }
//     while(carry!=0){   
//         int sum =  carry;
//         carry = sum /10;
//         value = sum %10;
//         ans.push_back(value);
//     }
//     return reverse(ans);
    
// }