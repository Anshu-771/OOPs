#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"enter the value of b: ";
    cin>>b;
    cout<<"enter the value of c: ";
    cin>>c;

    if(a>b && a>c)
    cout<<"A is greater";
    else if(b>c)
    cout<<"B is greater"; 
    else
    cout<<"C is greater";
    return 0;
}