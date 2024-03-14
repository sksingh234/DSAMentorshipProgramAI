
/*WAP to count digits of a given number*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the number of which you want to count digits:";
    cin >> n;
    int noOfDIgits = 0;
    if (n == 0)
    {
        cout << "the no of digit is 1.";
    }
    for (int i = 1; n > 0; i++)
    {
        noOfDIgits = noOfDIgits + 1;
        n = n / 10;
    }
    cout << "the no digits present in given number is:" << noOfDIgits;
    return 0;
}