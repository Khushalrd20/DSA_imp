#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    unordered_map<string,int>m ;  //o(1)
//for map  o(n)
    //insertion
    m["k"] = 1 ;

    //2
    pair<string,int>p = make_pair("kh" ,3) ;

    //3
     pair<string,int>p1{"khu" ,3} ;


     //searching

     cout<<m["k"]<<endl ;  //this will create entry with corresponding word

     //2
     cout<<m.at("k")<<endl ;

    // cout<<m.at("h")<<endl ;//error_abort      
     cout<<m["h"]<<endl ; //gives 0 

     cout<<m.count("k")<<endl ; //gives 1 because k is present

     //erase 
     m.erase("khu");

     //access map
     for(auto i : m) {
        cout<<i.first<<" "<<i.second<<endl ;
     }

     //iterative way 
     unordered_map<string,int> :: iterator it = m.begin() ;
     while(it != m.end()){
        cout<<it->first<<" "<<it->second<<endl ;
        it++ ;
     }
      
    return 0;
}