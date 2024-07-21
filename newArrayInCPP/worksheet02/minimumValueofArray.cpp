/*
Find the minimum value out of all elements in the array.
*/

#include<iostream>
using namespace std;
int main(){
    int arr [] = {5,3,2,14};
    int minimum = arr[0];
    for (int i = 1; i < 4; i++)
    {
         if ( minimum > arr[i])
         {
          minimum = arr[i];
         } 
    }
    cout<<"The minimum value out of array element is :"<< minimum;
}   
