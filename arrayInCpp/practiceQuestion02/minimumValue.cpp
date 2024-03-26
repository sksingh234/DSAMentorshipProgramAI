#include<iostream>
using namespace std;
int main(){
    int arr[5] = {65,47,89,32,14};
    int minimumValue = arr[0]; 
    for (int idx = 0; idx < 5; idx++)
    {
       if (minimumValue>arr[idx])
       {
        minimumValue = arr[idx];
       }
        else
        continue; 
        
    }
     cout<<"the minimum value out of array element is :"<<minimumValue;
    return 0;
}