#include<iostream>    //input {a,a,b,b,c,c,c}
#include<vector>     //output {a,2,b,2,c,3}
using namespace std;
int compress(vector<char> chars){
    int i=0;
    int ansIndex =0;
    while(i < chars.size()){
        int j = i + 1;
        while(j < chars.size()  &&  chars[i]==chars[j]){
            j++;
        }
        chars[ansIndex++]=chars[i];
        int count =j-i;
        if(count > 1){
            string cnt = to_string(count);
            for(char ch : cnt){
                chars[ansIndex++]= ch;
            }
        }
        i =j ;

    }
    return ansIndex;
}
int main()
{   vector<char>ch;
    ch.push_back('a');
    ch.push_back('a');
    ch.push_back('b');
    ch.push_back('b');
    // ch.push_back('c');
    // ch.push_back('c');
    int ans = compress(ch);
    cout<<ans;
    return 0;
}