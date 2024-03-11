// Take positive integer input and tell if it is even or odd.

#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter your positive integer:";
    cin>> n;
    if (n%2==0)
    {
        cout<<"it is an even number.";
    }
    else{
        cout<<"it is an odd number.";
    }
    return 0;
}