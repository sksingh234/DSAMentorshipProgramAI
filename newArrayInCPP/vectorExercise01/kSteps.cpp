/*
Rotate the given array ‘a’ by k steps, where k is non-negative. Note : k can be greater than n as well where n is the size of array ‘a’.
*/

#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a){
    for (int i = 0; i < a.size(); i++)
    {
        
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void rotate(int i,int j,vector<int> &a){
    while (i<j)
    {
         int temp = a[i];
         a[i] = a[j];
         a[j] = temp;
         i++;
         j--;
    }
}
int main()
{
    vector<int> v;
    v.push_back(12);
    v.push_back(82);
    v.push_back(62);
    v.push_back(42);
    v.push_back(32);
    v.push_back(21);
    int k = 0,n = v.size();
    cout<<"enter the value of steps to rotate the array : ";
    cin>>k;
    // Adjust k to be within the bounds of the array size
    k = k % n;

    /*
      // Adjust k to be within the bounds of the array size
    k = k % n
    
    */

    rotate(0,n-k-1,v);
    display(v);
    rotate(n-k,n-1,v);
    display(v);
    rotate(0,n-1,v);
    display(v);
}