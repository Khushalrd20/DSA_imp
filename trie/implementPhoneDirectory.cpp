#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class trieNode{
    public:
    int data ;
    trieNode* child[26];
    bool isTerminal ; // means last words satisfy=ies the condition or not 
    trieNode(char ch){
        data = ch ;
        for(int i = 0 ;i<26 ;i++){
            child[i] =NULL ;
        }
        isTerminal = false ;
    }
};

class trie{
    public:
    trieNode* root;
    trie(){
        root = new trieNode('\0');
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
            root->child[index] = childs ;
        } 
        insertUtil(childs ,word.substr(1)) ;


    }
    void insertWord(string word){
        insertUtil(root,word);
    }


    void printSuggestions(trieNode*curr ,vector<string>&temp,string prefix){
        if(curr->isTerminal){
            temp.push_back(prefix);
        }

        for(char ch = 'a';ch<='z';ch++){
              trieNode*next =curr->child[ch-'a'];
              if(next != NULL){
                  prefix.push_back(ch);
                  printSuggestions(next,temp,prefix);
                  //backtrack
                  prefix.pop_back();
              }
        }
    }
    vector<vector<string>>getSuggestions(string queryStr){
            trieNode*prev = root ;
            vector<vector<string>>output ;
            string prefix = ""; //it stores staring chr of query

            for(int i = 0 ;i<queryStr.length();i++){
                char lastch = queryStr[i]; // i.e c
                prefix.push_back(lastch) ;

                //check child exist
                trieNode*curr = prev->child[lastch - 'a'];

                //if not found 
                if(curr == NULL){
                    break;
                }
                //if found 
                vector<string >temp;
                printSuggestions(curr,temp,prefix);

                output.push_back(temp) ;
                temp.clear();
                prev  = curr ;
              
            }
              return output ;
    }


};
//s.c o(m*n) ;
//t.c o(n*m^2) ;
vector<vector<string>> phoneDirectory(vector<string>&contactList, string &queryStr)
{
    //trie creation 
    trie* t = new trie();
    for(int i = 0 ;i<contactList.size();i++){
        string str = contactList[i] ;
        t->insertWord(str) ;
    }

    return t->getSuggestions(queryStr);
}