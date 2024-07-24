/*
WAP to find the largest three elements in the array.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v(4);
    for (int i = 0; i < v.size(); i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int lar1=v[0],lar2=v[0] ,lar3=v[0];
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i] > lar1) 
        {
            lar3 = lar2;
            lar2 = lar1;
            lar1 = v[i];
        }
    }
    cout<<"the largest element in vector is : "<<lar1<<endl;
    cout<<"the second largest element in vector is : "<<lar2<<endl;
    cout<<"the second largest element in vector is : "<<lar3<<endl;

    
    /*int lar1=v[0],lar2=v[0] ,lar3=v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if(v[i] > lar1) lar1 = v[i];
    }
    cout<<"the largest element in vector is : "<<lar1<<endl;
    for (int i = 1; i < v.size(); i++)
    {
        if(v[i] > lar2 && lar2 < lar1 && v[i] != lar1) lar2 = v[i];
    }
    cout<<"the second largest element in vector is : "<<lar2<<endl;
    for (int i = 1; i < v.size(); i++)
    {
        if(v[i] > lar3 && lar2 < lar1 && lar3 < lar2 && v[i] != lar1 && v[i] != lar2) lar3 = v[i];
    }
    cout<<"the second largest element in vector is : "<<lar3<<endl;*/
}