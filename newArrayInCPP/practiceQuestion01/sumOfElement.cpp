/*
Calculate the sum of all the elements in the given array
*/

#include<iostream>
using namespace std;
int main(){
    int arr[] = {45,96,86,78,32};
    int sum = 0;
    for (int i = 0; i < 5; i++){
        sum = sum + arr[i];
    }
    cout<<"the sum is : "<<sum;
}
