/*
Take an array as input from user and print the alternate element of the array
*/

#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < 5; i = i + 2)
    {
        cout<<arr[i];
    }
    
}