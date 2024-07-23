/*
 Count the number of elements in given array greater than a given number x.
*/

#include<iostream>
using namespace std;
int main(){
    int arr [] = {5,3,2,14};
    int count = 0,elementX;
    cout<<"enter the element x :";
    cin>>elementX;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i]>elementX)
        {
           count++;
        }
    }
    cout<<"the total number of elements greater than element x is :"<<count;
}