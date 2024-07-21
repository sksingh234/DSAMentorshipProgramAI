/*
Calculate the product of all the elements in the given array.
*/

#include<iostream>
using namespace std;
int main(){
    int product = 1;
    int arr [] = {5,3,2,14};
    for (int i = 0; i < 4; i++)
    {
         product = product * arr[i];
    }
    cout<<"product of array is = "<< product;
}