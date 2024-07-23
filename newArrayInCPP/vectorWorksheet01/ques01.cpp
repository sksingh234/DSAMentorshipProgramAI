/*
Write a program that initializes a vector of integers with values {1, 2, 3, 4, 5}. Use the push_back function to add the value 6 to the vector. Then use the pop_back function to remove the last element.Print the final vector to verify the operations
*/
#include<iostream>
#include<vector>
using namespace std;
int printVector(vector<int> a){
     for (int i = 0; i < a.size(); i++)
     {
         cout<<a[i]<<" ";
     }
     cout<<endl;
}
int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    printVector(v);
    v.push_back(6);
    printVector(v);
    v.pop_back();
    printVector(v);
}
