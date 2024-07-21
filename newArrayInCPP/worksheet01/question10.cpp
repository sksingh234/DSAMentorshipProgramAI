/*
Write a program that declares an array of size 5, takes input from the user to fill the array, and prints the array elements in reverse order.
*/

#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    for (int i = 4; i >= 0; i--)
    {
        cout<<arr[i];
    }
    
}