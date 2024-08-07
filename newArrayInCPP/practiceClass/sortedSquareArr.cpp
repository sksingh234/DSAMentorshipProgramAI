#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
void sortsquare(vector<int> &a)
{
    int i = 0;
    int j = a.size() - 1;

    vector<int> res;

    while (i <= j)
    {
        if (abs(a[j]) < abs(a[i]))
        {
            res.push_back(a[i]*a[i]);
            i++;
        }
        else
        {
            res.push_back(a[j]*a[j]);
            j--;
        }
    }
    reverse(res.begin(),res.end());
    for (int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<" ";
    }
}
int main()
{
    int n;
    cout << "enter the size of vector :";
    cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }

    sortsquare(v);
    
}