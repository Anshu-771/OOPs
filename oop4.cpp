#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,opt;
    cout<<"enter the value of A: ";
    cin>>a;
    cout<<"enter the value of B: ";
    cin>>b;
    cout<<"RECTANGLUR OPREATION \n1. Area \n2. Perimeter \n3. diagonal \n enter the choice : ";
    cin>>opt;
    switch(opt)
    {
        case 1:cout<<"AREA = "<<a*b;
        break;
        case 2:cout<<"PERIMETER = "<<2*(a+b);
        break;
        case 3:cout<<"HYPOTENANCE = "<<sqrt(a*a+b*b);
        break;
        default:cout<<"wrong choice";
    }
    return 0;
}