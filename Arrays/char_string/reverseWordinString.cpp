#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 string reverseWords(string s) {
        string res, word;
        stringstream str(s); //turning it into a stream so that we can extract the words
        while(str>>word) //extracting each word from the stream and putting it in another string - word
            res=word+" "+res; //keep adding the incoming words in front
        res.pop_back(); //remove the extra space
        return res; 
    }
int main()
{   
    return 0;
}