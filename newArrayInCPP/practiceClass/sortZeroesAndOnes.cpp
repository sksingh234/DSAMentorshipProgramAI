#include<iostream>
#include<vector>
//#include<algorithm>
using namespace std;
void sort(vector<int> &a){
    int noo = 0;
    int noz = 0 ;
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
       if (a[i] == 0) noz++;
       else noo++;
    }
    for (int i = 0; i < n; i++)
    {
        if (i<noz) a[i] = 0;
        else a[i] = 1;   
    }
}
int main(){
    vector<int> v;
    int noz,noo;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    //sort(v.begin(),v.end());
    sort(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i];
    }
}