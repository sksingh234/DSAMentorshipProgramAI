
/*   Write a function that takes the radius of 
a circle as an argument and returns its area.   */

#include<iostream>
using namespace std;
void area(float x){
    float pi = 3.1415;
    cout<<"thr area of circle is "<<pi*x*x;
}
int main(){
    float radius;
    cout<<"enter the radius of circle:";
    cin>>radius;
    area(radius);
    return 0;
}
