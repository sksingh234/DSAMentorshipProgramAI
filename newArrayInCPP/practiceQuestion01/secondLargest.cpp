/*
Find the second largest element in the given Array
*/

#include<iostream>
using namespace std;
int main(){
    int arr[] = {45,96,86,78,32};
    int max = arr[0],secMax = arr[0];
    for (int i = 1; i < 5; i++){
         if (max < arr[i])
         {
            max = arr[i];
         }
    }
    cout<<"The maximum value in array is : "<<max<<endl;
    for (int i = 1; i < 5; i++)
    {
        if (secMax < max && secMax < arr [i] && arr[i] != max)
        {
            secMax = arr[i];
        }
    }
    cout<<"The second maximum value in array is : "<<secMax;   
}