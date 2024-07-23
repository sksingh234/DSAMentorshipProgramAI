/*
Write a program to copy the contents of one array into another in the reverse order.
*/

#include<iostream>
#include<vector>
using namespace std;
vector<int> display(vector<int> &a){
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v = {1,2,3,4,5};
    display(v);
    vector<int> v2(v.size());
    for (int i = 0; i < v.size(); i++)
    {
        int j = v.size()-1-i;
        v2[i] = v[j];
    }
    display(v2);
}