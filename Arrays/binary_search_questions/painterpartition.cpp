// // //painters partition problem  codestudio same as book allocation

// // //allocate book problem  codestudio

// //allocate book problem  codestudio
// #include <bits/stdc++.h> 
// bool isPossible(vector<int>arr,int k,int mid){ //n==k as bookallocation problem
//    int painterCount=1;
//    int timeSum =0;
//     for(int i=0;i<arr.size();i++){
//         if(timeSum + arr[i] <=mid){
//                timeSum+=arr[i];
            
//         }
//         else{
//             painterCount++;
//             if(painterCount > k || arr[i] > mid){
//                 return false;
//             }
//             timeSum= arr[i];
//         }
//     }
//     return true;
// }

// int findLargestMinDistance(vector<int> &boards, int k)
// {
//     //    Write your code here.

  
//     // Write your code here.
//     int s=0;
//     int sum=0;
//     int ans =-1;
//     for(int i=0;i<boards.size();i++){
//         sum+=boards[i];
//     }
//      int e=sum;
//      int mid =s +(e-s)/2;
//     while(s<=e){
//         if(isPossible(boards,k,mid)){
//             ans=mid;
//             e = mid -1 ;
            
//         }
//         else{
//             s = mid +1;
//         }
//         mid =s + (e-s)/2;
//     }
//     return ans;
// }

