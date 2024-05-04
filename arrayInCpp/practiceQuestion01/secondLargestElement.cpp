/* Find the second largest element in the given
Array.  */
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {25,36,97,28989,42};
    int maximumValue = arr[0];
    int secondmaximum = arr[0];
    for (int idx = 1; idx < 5; idx++)
    {
        if (maximumValue < arr[idx])
        {
            maximumValue = arr[idx];
        }
    }
    for (int idx = 1; idx < 5; idx++)
    {
        if (secondmaximum < arr[idx] && arr[idx] < maximumValue)
        {
            secondmaximum = arr[idx];
        }
    }
    cout << "the maximum value is :" << maximumValue << endl;
    cout << "the secondmaximum value is :" << secondmaximum << endl;
    return 0;
}