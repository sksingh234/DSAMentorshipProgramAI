#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void rotate(int i, int j, vector<int> &a)
{
    while (i < j)
    {
        swap(a[i], a[j]);
        i++;
        j--;
    }
}
int main()
{
    vector<int> v = {0, 4, 0, 3, 2, 1};
    int n = 6;
    int noo = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
            noo++;
    }
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = true;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                flag = false;
            }
        }
        if (flag == true)
        {
            break;
        }
    }
    int k = n - noo;
    rotate(0, n - k - 1, v);

    rotate(n - k, n - 1, v);

    rotate(0, n - 1, v);

    for (int i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    
}