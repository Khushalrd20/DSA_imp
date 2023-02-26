//longest common prefix 
#include<bits/stdc++.h>
using namespace std ;   // o( m*n)  s.c O(m*n)

class trieNode{
    public:
    int data ;
    trieNode* child[26];
    bool isTerminal ; // means last words satisfy=ies the condition or not 
    int childCount ;
    trieNode(char ch){
        data = ch ;
        for(int i = 0 ;i<26 ;i++){
            child[i] =NULL ;
        }
        childCount = 0 ;
        isTerminal = false ;
    }
};

class trie{
    public:
    trieNode* root;
    trie(char ch){
        root = new trieNode(ch);
    }

    void insertUtil(trieNode* root ,string word){
        //basec case
        if(word.length() == 0){
            root->isTerminal = true ;
            return ;
        }
        //check whether word is present or not 
        int index = word[0] - 'a' ;
        trieNode*childs ;

        //present
        if(root->child[index] !=NULL){
            childs = root->child[index] ;
        }
        else{
            //absent word 
            //create node for that word which is absent
            childs = new trieNode(word[0]) ;
            root->childCount++ ;
            root->child[index] = childs ;
        } 
        insertUtil(childs ,word.substr(1)) ;


    }
    void insertWord(string word){
        insertUtil(root,word);
    }

    void lcp(string first,string &ans){
        for(int i = 0 ;i<first.length();i++){
           char ch = first[i];

           if(root->childCount == 1){
               ans.push_back(ch);
               int index = ch - 'a';
               root = root->child[index] ; //aage jao

           }   
           else{
               break;
           }  
           if(root->isTerminal){
               break;
           }
        }
    }
};
string longestCommonPrefix(vector<string> &arr, int n)
{
    // Write your code here
    // string ans ;
    // //checking first with all
    // for(int i = 0 ;i<arr[0].size();i++){
    //     char ch = arr[0][i] ;
    //     bool match = true ;
    //     for(int j = 0 ;j<n;j++){
    //         //not match
    //         if(ch != arr[j][i]){
    //             match =false;
    //             break ;
    //         }
    //     }
    //     if(match == false){
    //             break ;
    //     }
    //     else{
    //         ans.push_back(arr[0][i]);
    //     }
    // }
    // return ans ;

    //trie approach

    trie *t = new trie('\0');
    //inserting in trie
   for(int i = 0 ;i<n;i++){
       t->insertWord(arr[i]);
   } 
   string first = arr[0];
   string ans="";
   t->lcp(first,ans);
  return ans;
}


