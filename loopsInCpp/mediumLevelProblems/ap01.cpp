
// Display this AP - 1,3,5,7,9.. upto ‘n’ terms.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of terms till which you want to print the ap:";
    cin >> n;
    int ap = 1;
    for (int i = 1; i <= n; i++)
    {
        cout << ap << " ";
        ap+=2;
    }
    return 0;
}