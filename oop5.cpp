#include<iostream>
#include<string>

using namespace std;

class student{
    private:
        string name;
        int roll_no;
        int marks[5];
        float percentage;

    public:
        void getdata()
        {
        cout<<"Enter your roll number: ";
        cin>>roll_no;
        cout<<"Enter your name: ";
        cin>>name;
        cout<<"Enter your 5 subjects marks: ";
        for(int i=0;i<5;i++)
        {
            cout<<"\n subject "<<i+1<<" marks : ";
            cin>>marks[i];
        }
    }

    void display()
    {
        cout<<"\n Name: "<<name<<endl;
        cout<<"\n Roll Number: "<<roll_no<<endl;
        cout<<"\n subject 1: "<<marks[0];
        cout<<"\n subject 2: "<<marks[1];
        cout<<"\n subject 3: "<<marks[2];
        cout<<"\n subject 4: "<<marks[3];
        cout<<"\n subject 5: "<<marks[4]<<endl;
        percentage = (marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/5.0;
        cout<<"Percentage: "<<percentage<<endl;
    }
};

int main()
{
    student s1;
    s1.getdata();
    s1.display();
    return 0;
}