/*
Find the last occurrence of x in the array
*/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(12);
    v.push_back(82);
    v.push_back(62);
    v.push_back(12);
    v.push_back(32);
    v.push_back(12);
    int x, occurence;
    cout<<"enter the target element to find the occurence :";
    cin>>x;
    bool flag = false;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == x)
        {
            flag = true;
            occurence = i;
        }
    }
    if(flag == true) cout<<"the last occurence of x is : "<<occurence;
    else cout<<"the element is not present";
}