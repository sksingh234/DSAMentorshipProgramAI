#include <iostream>
#include <vector>
using namespace std;
vector<int> merge(vector<int> &a, vector<int> &b)
{
    int n = a.size();
    int m = b.size();
    vector<int> res(n + m);
    int k = res[k];
    int i = 0;
    int j = 0;
    while (i <= n && j <= m)
    {
        if (a[i] < b[j])
        {
            res[k] = a[i];
            i++;
        }
        else if (b[j] < a[i])
        {
            res[k] = b[j];
            j++;
        }
        else if (i == n)
        {
            res[k] = b[j];
            j++;
        }
        else
        {
            res[k] = a[i];
            i++;
        }
        k++;
    }
    return res;
}
int main()
{
    vector<int> arr1;
    arr1.push_back(12);
    arr1.push_back(15);
    arr1.push_back(18);
    arr1.push_back(19);
    vector<int> arr2;
    arr2.push_back(1);
    arr2.push_back(5);
    arr2.push_back(8);
    arr2.push_back(9);
    vector<int> v = merge(arr1, arr2);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}