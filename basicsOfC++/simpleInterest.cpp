// calculating simple interest.

#include <iostream>
using namespace std;
int main()
{
    float p, r, t;
    cout << "enter the amount:";
    cin >> p;
    cout << "enter the rate:";
    cin >> r;
     cout<< "enter the time:";
    cin>>t; 
    float simpleInterest=  (p*r*t)/100;
    cout<<"the simple interest is:"<<simpleInterest;
    return 0;
}