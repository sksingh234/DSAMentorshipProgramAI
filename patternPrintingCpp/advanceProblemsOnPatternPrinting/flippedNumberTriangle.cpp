/*Print the given pattern
Number Triangle Flipped
 1
 1 2
 1 2 3
 1 2 3 4   */

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n :";
    cin >>n;
    for (int i = 1; i <= n; i++)
    {
        int number = 1;
        for (int j = 1; j <= i; j++)
        {
            cout<<number<<" ";
            number++;
        }
        cout<<endl;
    }
    return 0;
}