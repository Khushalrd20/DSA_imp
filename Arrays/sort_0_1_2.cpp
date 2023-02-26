using namespace std;
#include <bits/stdc++.h> 
void sort012(int *num, int n)
{
  int low=0;
  int mid=0;
  int high=n-1;
  while(mid<=high){
      switch(num[mid]){
          case 0:
              swap(num[mid],num[low]);
              mid++;
              low++;
              break;
          case 1:
              mid++;
              break;
          case 2:
              swap(num[mid],num[high]);
              high--;
              break;
      }
  }  

}
void print(int num[],int n){
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
}

int main(){
    int arr[9]={1,0,2,0,1,2,1,0,1};
    sort012(arr,9);
    print(arr,9);
    return 0;
}
//0 0 0 1 1 1 1 2 2
