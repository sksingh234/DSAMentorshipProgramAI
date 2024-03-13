
//Display this AP - 100,97,94,..upto all terms which are positive. N 

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the highest value from which you want to print the ap:";
    cin >> n;
    int ap = n;
    for (int i = 1;  ap>=0; i++)
    {
        cout << ap << " ";
        ap-=3;
    }
    return 0;
}