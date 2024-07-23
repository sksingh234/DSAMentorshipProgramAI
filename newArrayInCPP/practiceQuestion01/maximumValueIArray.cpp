/*
Find the maximum value out of all the elements in the array.
*/

#include<iostream>
using namespace std;
int main(){
    int arr[] = {45,96,86,78,32};
    int max = arr[0];
    for (int i = 1; i < 5; i++){
         if (max < arr[i])
         {
            max = arr[i];
         }
    }
    cout<<"The maximum value in array is : "<<max;
}