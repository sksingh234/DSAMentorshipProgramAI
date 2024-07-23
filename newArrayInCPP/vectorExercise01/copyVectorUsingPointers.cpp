/*
Two Pointers : Write a program to reverse the array without using any extra array.
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
    int i = 0;
    int j = v.size()-1;
    while (i<j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    display(v);
}