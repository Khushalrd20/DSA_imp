#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>> arr)
{
    int n = arr.size();
    // take transpose then reverse it
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
            if (i != j)
            {
                swap(arr[i][j], arr[j][i]);
            }
    }
    // reverse it
    for (int i = 0; i < n; i++)
    {
        reverse(arr[i].begin(), arr[i].end());
    }
    //only for printing
      for (int i = 0; i < arr.size(); i++)
    {
        // j loop
        for (int j = 0; j < arr[i].size(); j++)
            // print elements of vector
            cout << arr[i][j] << " ";
        cout << endl;
    }

}
void print( vector<vector<int>> v1 ){
     for (int i = 0; i < v1.size(); i++)
    {
        // j loop
        for (int j = 0; j < v1[i].size(); j++)
            // print elements of vector
            cout << v1[i][j] << " ";
        cout << endl;
    }
}
int main()
{
    vector<vector<int>> v1 ={{1,2,3},{4,5,6},{7,8,9}};
  
    cout<<"before rotate : "<<endl;
    print(v1);
    cout<<endl;
      cout<<"after rotate : "<<endl;
    rotate(v1);
  
  
    return 0;
}
// before rotate :
// 1 2 3
// 4 5 6
// 7 8 9

// after rotate :
// 7 4 1
// 8 5 2
// 9 6 3