#include<iostream>
using namespace std;

template <typename T>
void swapp(T *a, T *b)
{
    T temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int x,y;
    cout<<"\n enter the value of X and Y : ";
    cin>>x>>y;
    cout<<"\n before swapping X = "<<x<<" Y = "<<y;
    swapp<int>(&x,&y);
    cout<<"\n after swapping X = "<<x<<" Y = "<<y;
    return 0;
}