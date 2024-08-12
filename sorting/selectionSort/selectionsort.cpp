#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
// n = 5
// i = 0
// j = 0
// minidx = 0 
void selectionsort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minidx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[minidx])
            {
                minidx = j;
            }
        }
        swap(v[i], v[minidx]);
    }
}
int main()
{
    vector<int> v = {44, 33, 55, 22, 11};
    selectionsort(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}