/*
Given a stream of incoming numbers, find average or mean of the stream at every point.
*/

#include<iostream>
using namespace std;
int main(){
    int arr [] = {5,3,2,14};
    int sum = arr[0], average;
    for (int i = 1; i < 4; i++)
    {
        sum = sum + arr[i];
        average = sum/i;
        cout<<"The average of elements till index "<<i<< " is :"<<average<<endl;
    }
}