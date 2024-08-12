#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {19, 12, 23, 80, 16};
    int n = 5;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        int min = __INT_MAX__;
        int minidx = -1;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] < 0)
                continue;
            else if (min >= arr[j] && arr[j] > 0)
            {
                min = arr[j];
                minidx = j;
            }
        }
        arr[minidx] = x;
        x--;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] * (-1);
        cout << arr[i] << " ";
    }
}