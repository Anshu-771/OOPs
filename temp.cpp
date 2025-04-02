#include<iostream>
using namespace std;

template <typename T>
class sample{
    T a,b,c;
    public:
    sample(){
        cout<<"enter the values of a,b: "<<endl;
        cin>>a>>b;
    }
    void compute(){
        c=a+b;
    }
    T display(){
        return c;
    }
};

int main(){
    sample<int> obj;
    obj.compute();
    cout<<"sum of a and b is: "<<obj.display()<<endl;
    sample<float> obj1;
    obj1.compute();
    cout<<"sum of a and b is: "<<obj1.display()<<endl;
    return 0;
}