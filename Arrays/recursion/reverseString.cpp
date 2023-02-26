#include<iostream>
using namespace std;
void reverse(string &str ,int s ,int e){
    //base case
    if(s > e){
        return ;
    }
    swap(str[s],str[e]);
    s++;
    e--;
    return reverse(str,s,e);
}
int main()
{   string s="khushal";
    reverse(s,0 ,s.length()-1);
    cout<<s;
    return 0;
}