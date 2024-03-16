/*   Print the following pattern
Output:
A
A B
A B C
A B C D      */


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n :";
    cin >>n;
    for (int i = 1; i <= n; i++)
    {
        char alphabet = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout<<alphabet<<" ";
            alphabet++;
        }
        cout<<endl;
    }
    return 0;
}