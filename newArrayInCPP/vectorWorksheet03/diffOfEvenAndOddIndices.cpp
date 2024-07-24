/*
Find the difference between the sum of elements at even indices to the sum of elements at odd indices.
*/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(4);
    for (int i = 0; i < v.size(); i++)
    {
        cin>>v[i];
    }
    int oddsum = 0, evensum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if(i%2 == 0) evensum += v[i];
        else oddsum += v[i];
    }
    int diff = 0;
    diff = evensum - oddsum;
    cout<<"the difference of sum of even indices and odd indices is : "<<diff;
}