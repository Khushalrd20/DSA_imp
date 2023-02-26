#include<iostream>
using namespace std;
int main()
{   
    int arr[10]={2,3,4};
    cout<<" address of first : "<<arr<<endl;
    cout<<" address of first : "<<&arr[0]<<endl;
    cout<<" 2nd : "<<*arr<<endl;
    cout<<" 3rd : "<<*arr +1<<endl;//increamenting 2 to 3
    cout<<" 4th : "<<*(arr +1)<<endl;//value 1st location    
    cout<<" 5th : "<<*(arr) +1<<endl;//value 1st location   
    int i = 2; 
    cout<<" 6th: "<<i[arr]<<endl;// arr[i] =*(arr + i)  i[arr] =*(i + arr) 
    int temp[10] ={1,2};
    int *ptr = &temp[0];
    cout<< " 1 : "<<sizeof(temp)<<endl;
    cout<< " 2 : "<<sizeof(*ptr)<<endl;//size of value stored at temp which is 4
    cout<<" 3 : "<<sizeof(&ptr)<<endl;
    cout<<" 4 : "<<sizeof(ptr)<<endl;//(4 in windows )8 in mac os
    cout<<" 5 : "<<sizeof(*temp)<<endl;
    

    

    return 0;
}