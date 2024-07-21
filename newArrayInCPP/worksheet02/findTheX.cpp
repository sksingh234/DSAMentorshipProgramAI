/*
Given an array arr. Your task is to find the elements whose value is equal to that of its index value
*/

#include<iostream>
using namespace std;
int main(){
    int arr [] = {5,3,2,14};
    int elementX;
    cout<<"enter the element to search in array :";
    cin>>elementX;
    for (int  i = 0; i < 4; i++)
    {
        if (elementX == arr[i])
        {
             cout<<"missing element found";
             break;
        }
    }
}