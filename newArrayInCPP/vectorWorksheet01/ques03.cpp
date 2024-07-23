/*
Write a program that takes n integers as input from the user and stores them in a vector.Print the vector using a loop.
*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of vector : ";
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for (int i = 0; i < n; i++)
    {
       cout<<v[i]<<" ";
    }
}