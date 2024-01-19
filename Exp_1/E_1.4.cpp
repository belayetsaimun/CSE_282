/*Write a C++ program to add two distances in inch-feet using structure.*/

#include<iostream>
using namespace std;

struct distance
{
    int feet;
    int inch;
} distance1,distance2,res;

int main()
{
    cout<<"Enter first distance:"<<endl;
    cout<<"Feet:";
    cin>>distance1.feet;
    cout<<"Inch:";
    cin>>distance1.inch;
    cout<<"Enter second distance:\n";
    cout<<"Feet:";
    cin>>distance2.feet;
    cout<<"Inch:";
    cin>>distance2.inch;
    res.feet=(distance1.feet+distance2.feet);
    res.inch=(distance1.inch+distance2.inch);
    cout<<"Sum of two distances: "<<res.feet<< " Feet " <<res.inch<< " Inches ";

}
