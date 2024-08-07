#include <iostream>
#include <vector>
using namespace std;
void sort(vector<int> &a){
    int n = a.size();
    int lo = 0, mid = 0, hi = n-1;
    while(mid<=hi){
        if (a[mid] == 2)
        {
            int temp = a[mid];
            a[mid] = a[hi];
            a[hi] = temp;
            hi--;
        }
        else if(a[mid] == 0)
        {
            int temp = a[mid];
            a[mid] = a[lo];
            a[lo] = temp;
            mid++;
            lo++;
        }
        else mid++;
    }
}
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    sort(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i];
    }
}