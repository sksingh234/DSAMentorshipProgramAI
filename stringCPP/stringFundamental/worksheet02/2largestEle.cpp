#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "0123456789";
    int max = s[0];
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] > max)  max = s[i];
    }
    int secmax = s[0];
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] > secmax && s[i] != max)  secmax = s[i];
    }
    cout<<char(max)<<" "<<char(secmax);
}