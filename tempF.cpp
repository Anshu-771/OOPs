#include<iostream>
using namespace std;

template <typename A>

A largest()
{
    A a,b;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    if(a>b)
    return a;
    else
    return b;
}

int main()
{
    int X;
    float y;
    cout<<"\n largest element taking integer type: "<<largest<int>()<<endl;
    cout<<"\n largest element taking float type  : "<<largest<float>()<<endl;
    return 0;
}