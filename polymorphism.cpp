#include<iostream>
using namespace std;

class base 
{
    public:
    int a;
    void get_a(int x) 
    { 
        a=x; 
    } 
    virtual void display_a() 
    { 
        cout<<"In base"<<"\n"<<"a="<<a<<endl; 
    }
}; 
 
 
class derived:public base 
{ 
    int b; 
    public:
    void get_ab(int x,int y) 
    { 
        a=x; 
        b=y; 
    }
    void display_a() 
    { 
        cout<<"In derived"<<"\n"<<"a="<<a<<endl; 
    }
    void display_ab() 
    { 
        cout<<"In Derived "<<"\n"<<"a="<<a<<"\nb="<<b<<endl; 
    } 
}; 

int main() 
{ 
base b; 
base *bptr; 
bptr=&b;//points to the object of base class 
bptr->get_a(100); 
bptr->display_a(); 
derived d; 
derived *dptr; 
dptr=&d;//points to the object of derived class 
dptr->get_a(400); 
dptr->display_a(); 
dptr->get_ab(300,200); 
dptr->display_ab(); 
bptr=&d;//points to the object of derived class 
bptr->get_a(400); 
bptr->display_a();
return 0; 
} 