/*
Find the element x in the array . Take array and x as input
*/

#include<iostream>
using namespace std;
int main(){
    int n, target;
    cout<<"enter the size of array : ";
    cin >>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
         cin>>arr[i];
    }
    cout<<"enter the target of array : ";
    cin >>target;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
       if (arr[i] == target)
       {
         flag =  true;
       }
    }
    if (flag == true)
    {
      cout<<"The target element is found.";
    }
    else
    cout<<"The target element is missing.";
}