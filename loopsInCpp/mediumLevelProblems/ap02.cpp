                    
//  Display this AP - 4,7,10,13,16.. upto ‘n’ terms.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the value of terms till which you want to print the ap:";
    cin >> n;
    int ap = 4;
    for (int i = 1; i <= n; i++)
    {
        cout << ap << " ";
        ap+=3;
    }
    return 0;
}