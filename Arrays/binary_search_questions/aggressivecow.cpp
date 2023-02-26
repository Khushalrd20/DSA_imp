// //Aggressive cow  codestudio   APPROCH IS TO FIND MAXIMUM  --BY search space
// #include <bits/stdc++.h> 
// #include<vector>
// bool isPossible(vector<int>arr,int n ,int m,unsigned long long int mid){
//     unsigned long long  int dayCount=1;
//     unsigned long long int timeSum =0;
//     for(int i=0;i<m;i++){
//         if(timeSum + arr[i] <=mid){
//                timeSum+=arr[i];
            
//         }
//         else{
//             dayCount++;
//             if(dayCount > n || arr[i] > mid){
//                 return false;
//             }
//             timeSum= arr[i];
//         }
//     }
//     return true;
// }
// long long ayushGivesNinjatest(int n, int m, vector<int> time) 
// {	
// 	// Write your code here.
//     unsigned long long int s=0;
//     unsigned long long int sum=0;
//     unsigned long long int ans =-1;
//     for(int i=0;i<m;i++){
//         sum+=time[i];
//     }
//     unsigned long long int e=sum;
//     unsigned long long int mid =s +(e-s)/2;
//     while(s<=e){
//         if(isPossible(time,n,m,mid)){
            
//             e = mid -1 ;
//             ans=mid;
//         }
//         else{
//             s = mid +1;
//         }
//         mid =s + (e-s)/2;
//     }
//     return ans;
// }