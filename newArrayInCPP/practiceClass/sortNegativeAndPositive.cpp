#include <iostream>
#include <vector>
using namespace std;
void sort(vector<int> &a)
{
    int i = 0;
    int j = a.size() - 1;
    while (i < j)
    {
        if (a[i] < 0)
            i++;
        else if (a[j] >= 0)
            j--;
        else if (a[i] >= 0 && a[j] < 0)
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
}
int main()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(-6);
    v.push_back(-4);
    v.push_back(0);
    v.push_back(1);
    sort(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i]<<" ";
    }
}