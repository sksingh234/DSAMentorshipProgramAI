/*
Given an unsorted array arr[] of n integers and a key which is present in this array. You need to write a program to find the start index( index where the element is first found from left in the array ) and end index( index where the element is first found from right in the array
*/

#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "enter the value of n :";
    cin>>n;
    int arr [n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key ;
    cout << "enter the value of key:";
    cin>>key;
    for ( int i = 0; i < n; i++)
    {
       if (key == arr[i])
       {
         cout<<"The key element in array from left is present at index :"<<i<<endl;
       }
    }
    for ( int i = n; i >= 0; i--)
    {
       if (key == arr[i])
       {
         cout<<"The key element in array from right is present at index :"<<n-i;
       }
    }
    }