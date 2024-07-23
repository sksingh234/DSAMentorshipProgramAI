#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int> &a)
{
    int i = 0;
    int j = a.size();
    while (i<j)
    {
        if (a[i] == 0) i++;
        if (a[j] == 1) j--;
        if (a[i] == 1 && a[j] == 0)
         {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
         }
    }
}
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    sort(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i];
    }
}