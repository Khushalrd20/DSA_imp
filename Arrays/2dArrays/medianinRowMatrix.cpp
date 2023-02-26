#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int median(vector<vector<int>> &matrix, int r, int c)
{
    // code here
    vector<int> v;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            v.push_back(matrix[i][j]);
        }
    }
    sort(v.begin(), v.end());

    int s = 0;
    int e = r * c - 1;
    int mid = s + (e - s) / 2;

    return v[mid];
}
int main()
{
    vector<vector<int>> arr = {{1, 3, 5}, {2, 7, 9}, {3, 6, 9}};

    for (int i = 0; i < arr.size(); i++)
    {
        sort(arr[i].begin(), arr[i].end());
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "median is : " << median(arr, arr.size(), arr[0].size());
    return 0;
}