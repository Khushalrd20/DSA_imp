#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
    
    while(row<=n){
        int space = n -row +1;
        
     
        while(space)
        {
        
        cout<<" ";//space sathi
        space--;
        
        }
          int col=1;
        while(col<=row){
            cout<<"*";
            col++;
        }
    cout<<endl;
    row=row+1;
    }
}
//***
//**
//*
//not solved