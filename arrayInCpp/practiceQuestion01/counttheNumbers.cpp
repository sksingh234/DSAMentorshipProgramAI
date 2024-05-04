/*  Count the number of elements in given array
greater than a given number x.

*/
#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    for (int idx = 0; idx < 5; idx++)
    {
        cin >> arr[idx];
    }

    int elementx;
    cout << "enter the value of element x :";
    cin >> elementx;

    int count = 0;
    for (int idx = 0; idx < 5; idx++)
    {
        if (arr[idx] > elementx)
        {
            count++;
        }
        else
            continue;
    }
    cout << "total number greater than " << elementx << " is :" << count;
    return 0;
}