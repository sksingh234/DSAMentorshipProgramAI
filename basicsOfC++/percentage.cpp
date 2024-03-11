//calculating percentage of 5 subjects.

#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e;
    cout << "enter the value of a:";
    cin >> a;
    cout << "enter the value of b:";
    cin >> b;
    cout << "enter the value of c:";
    cin >> c;
    cout << "enter the value of d:";
    cin >> d;
    cout << "enter the value of e:";
    cin >> e;
    int totalMarks;
    cout << "enter the value of totalMarks:";
    cin >> totalMarks;
    float percentage =   ((a + b + c + d + e)*100)/totalMarks ;
    cout << "percentage of five subject is:" << percentage;
    return 0;
}
