/*
Create a program that initializes a vector with some values. Use a for loop to print all the elements of the vector
*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    for (int i = 0; i < v.size(); i++)
     {
        cout<<v[i]<<" ";
     }
}