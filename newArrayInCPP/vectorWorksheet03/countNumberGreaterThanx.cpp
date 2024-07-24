/*
Count the number of elements strictly greater than x.
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
    int x,count = 0;
    cout<<"enter the target element x : ";
    cin>>x;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i] > x) count++;
    }
    cout<<"the total number greater then x is : "<<count;
}
 