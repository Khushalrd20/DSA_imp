#include<iostream>
using namespace std;

int getMax(int num[],int n){
    int max=INT_MIN;          //INT_MIN=VALUES BETWEEN -2^31 TO( 2^31-1)
    for(int i=0;i<n;i++){           
        if(num[i]>max){         //maxi=max(maxi,num[i])
            max=num[i];
        }
    }
    return max;
}
int getMin(int num[],int n){
    int min=INT_MAX;          //INT_MAX=VALUES BETWEEN (-2^31 TO) 2^31-1
    for(int i=0;i<n;i++){
        if(num[i]<min){         //mini=min(mini,num[i])
            min=num[i];
        }
    }
    return min;
}

int main(){

    int size;
    cin>>size;
    int num[100];
     for(int i=0;i<size;i++){
        cin>>num[i];
     }
    cout<<"maximum value is "<<getMax(num,size)<<endl;
    cout<<"minimum value is "<<getMin(num,size)<<endl;   
}
// 5
// 12 2 13 24 67 21
// maximum value is 67
// minimum value is 2