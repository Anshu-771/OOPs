#include<iostream>

using namespace std;

class student_height{
    private:
       int foot,inche; 
       
    public:
       void getdata()
       {
            cout<<"enter the foot : ";
            cin>>foot;
            cout<<"enter the inche : ";
            cin>>inche;
       }
       void display()
       {
            cout<<"\n height of student : "<<foot<<"'"<<inche;
       }
       student_height compute(student_height b)
       {
         student_height total;
         total.inche=inche+b.inche;
         total.foot=foot+b.foot+(total.inche/12);
         total.inche=total.inche%12;
         return total;
       }
};

int main()
{
    student_height anshu,subh,ans;
    anshu.getdata();
    subh.getdata();
    anshu.display();
    subh.display();
    ans=anshu.compute(subh);
    ans.display();
    return 0;
}