/*
Implement a program that takes n integers as input from the user, stores them in a vector, and sorts the vector in ascending order using the sort function.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n; 
    cout<<" enter the value of n :";
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}