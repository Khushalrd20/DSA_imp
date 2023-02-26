#include<iostream>
using namespace std;
int main()
{   int a[]={1,2,3,4};
    cout<<""<<*(a+2)<<endl;
    int *p = (a+1);
    cout<<*a + 9 <<endl;
    char b[] ="xyz";
    char *c = &b[0];
    cout<<c;
    cout<<sizeof(c);
    return 0;
}