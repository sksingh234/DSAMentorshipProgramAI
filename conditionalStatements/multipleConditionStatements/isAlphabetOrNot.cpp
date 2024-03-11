#include<iostream>
using namespace std;
int main(){
    char alphabet;
    cout<<"enter the alphabet:";
    cin>>alphabet;
    if (alphabet>='a'&&alphabet<='z')
    {
        cout<<"it is an alphabet.";
    }
    else
    {
         cout<<"it is not an alphabet.";
    }
    return 0;
}