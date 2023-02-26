//peak of mountain 
//means e.g arr[6]={0,1,3,5,3,1}
//leetcode t.c= O(n)
#include<iostream>
using namespace std;
  int pivotIndex(int arr[],int n) {
         
        int left=0;
        int total=0;
        for(int i=0;i<n;i++){
            total=total + arr[i];
        }
        for(int i=0;i<n;i++){
            int right_sum=total-arr[i]-left;
            if(right_sum==left){
                return i;
            }
            else{
                left=left+arr[i];
            }

        }
        return -1;
    }
int main()
{   
    //mountain array
    int arr[6]={1,7,3,6,5,6};

    int pivot = pivotIndex(arr,6);
    cout<<"pivot   is : "<<pivot; 

    return 0;
}