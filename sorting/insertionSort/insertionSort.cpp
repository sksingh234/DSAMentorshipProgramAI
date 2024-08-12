#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {5, 41, 6, 23, 2};
    int n = v.size();
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j>=1)
        {
            if(v[j] >= v[j-1]) break;
            else swap(v[j],v[j-1]);
            j--;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}