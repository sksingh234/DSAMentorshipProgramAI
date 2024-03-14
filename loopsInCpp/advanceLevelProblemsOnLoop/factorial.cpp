
//Print the factorial of a given number ‘n’

#include<iostream>
using namespace std;
int main(){
    int n;
    cout <<"enter the number of which you want to print the factorial:";
    cin >>n;
    int factorial = 1;
    for (int i = 2; i <=n; i++)
    {
        factorial = factorial*i;
    }
    cout <<"the factorial of "<<n<<" is:"<<factorial;
    return 0;
}