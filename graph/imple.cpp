// adjancency list 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template<typename T  >

class graph{
    public :
    //unordered_map<int,list<int>>adj ;
    
    unordered_map<T,list<T>>adj ;

    void addEdge(T u ,T v ,bool direction){
        //direction represents (1)directed or (0)undirected graph
        adj[u].push_back(v);
        //undirected graph
        //i.e creating both mapping with each other
        if(direction == 0 ){
            adj[v].push_back(u);
        }
    }

    void print(){
        for(auto i:adj){
            cout<<i.first<<"->";
            for(auto j:i.second){
                cout<<j<<",";
            }cout<<endl;

        }
    }
};
int main()
{
    int n , m ;
    cout<<"enter no of nodes : ";
    cin>>n ;

     cout<<"enter no of edges : ";
    cin>>m;

    graph<int> g ; // generic means any form of datatype
    for(int i= 0 ;i<m;i++){
        int u ,v ;
        cin>>u>>v ;
        g.addEdge(u,v,0) ; // 0 for undirected
    }
    g.print();

    return 0;
}

// ///o/p 
// enter no of nodes : 5
// enter no of edges : 6
// 0 1
// 1 2
// 2 3
// 3 1
// 3 4
// 0 4
// 4->3,0,
// 3->2,1,4,
// 2->1,3,
// 0->1,4,
// 1->0,2,3,