#include<iostream>
#include<string>
#include <algorithm> 
using namespace std;
int main(){
    string str = "hellosir";
    string str2 = str; 
    reverse(str.begin(),str.end());
    cout<<str2 + str;
}