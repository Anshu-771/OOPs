#include<iostream>
#define infinite 9999999
using namespace std;

template<typename T>

class Same{
    T arr[5];
    int i,j,temp;
    public:
    void getdata(){
        for(i=0;i<5;i++)
        {
            cout<<"\n enter the element "<<i+1<<" : ";
            cin>>arr[i];
        }
    }
    void arrange()
    {
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(arr[i]<arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }

    void display()
    {
        for(i=0;i<5;i++)
        {
            cout<<"\n "<<i+1<<" element is : "<<arr[i];
        }
    }
};

int main()
{
    Same<int> obj;
    obj.getdata();
    obj.arrange();
    obj.display();
    return 0;
}