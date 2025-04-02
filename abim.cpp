#include<iostream>
using namespace std;

class base1
{
    public:
    void display()
    {
        cout<<"This is base1 class"<<endl;
    }
};

class base2
{
    public:
    void display()
    {
        cout<<"This is base2 class"<<endl;
    }    
};

class derived : public base1, public base2
{
    public:
    void display()
    {
        cout<<"this is drived class"<<endl;
    }
};

int main()
{
    derived obj;
    obj.display();
    obj.base1::display();
    obj.base2::display();
    return 0;
}