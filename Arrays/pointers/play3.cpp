#include<iostream>
using namespace std;
int main()
{   int arr[10];
    int *ptr = &arr[0];
    //error
    //arr = arr + 1 because symbol tabe values cant be changed
    cout<<" address 1st :"<<ptr<<endl;
    ptr = ptr + 1;
     cout<<" address 2st :"<<ptr<<endl;
     char st[]="ABCD";
     for(int i=0;i<st[i]!='\0';i++){
        cout<<st[i]<<*(st)+i<<*(i+st)<<i[st]<<endl;
     }

    return 0;
}