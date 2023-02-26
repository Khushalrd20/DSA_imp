#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
    
    while(row<=n){
        int space = n -row;
        //print space
       
        while(space)
        {
        
        cout<<" ";//space sathi
        space--;
        
        }
        //print 2nd triangle
        int col=1;
        while(col<=row){
            cout<<col;
            col++;
        }
        //print 3rd triangle
        int start=row-1;
        while(start){
            cout<<start;
            start--;
        }
    cout<<endl;
    row=row+1;
    }
}
// 4
//    *
//   **
//  ***
// ****