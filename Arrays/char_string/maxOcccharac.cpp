#include<iostream>
using namespace std;
int getMaxOccChr(string s){
    char arr[26]={0};
    for(int i=0;i<s.length();i++){
        int ch =s[i];
        int num=0;   
        num = ch - 'a';
        arr[num]++; //go to that block and plus the occ as +1
    }
    //find maximum occc character
    int maxi = -1 ,ans=0;
    for(int i=0;i<26;i++){  // no of counting of chr is stored in  arr
        if(arr[i]> maxi){//so we just getting maximum no from array so that we get maxi occ of chr
            ans =i ;
            maxi =arr[i];
        }
    }
    char finalans = 'a'+ ans;
    return finalans;
}
int main()
{   string s;
    cin>>s;
    char ans =getMaxOccChr(s);
    cout<<ans;
    return 0;
}