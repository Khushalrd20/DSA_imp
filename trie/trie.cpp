#include<iostream>
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
        int index = word[0] - 'A' ;
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

    bool searchUtil(trieNode*root ,string word){
        //base 
        if(word.length() == 0 ){
                return root->isTerminal ;
        }
        int index = word[0] -'A' ;
        trieNode*childs ;
        //present 
        if(root->child[index] != NULL){
            childs = root->child[index] ;

        }
        else{
            return false ;

        }
       return  searchUtil(childs,word.substr(1)) ;
    }

    bool search(string word){
        return searchUtil(root,word) ;
    }

};

int main()
{   trie *t = new trie() ;
    t->insertWord("kayo") ;
    t->insertWord("time") ;
    t->insertWord("do") ;
    cout<<"present or absent : " << t->search("time")<<endl ;    
    return 0;
}