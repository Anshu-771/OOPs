#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream anshu_write;
    anshu_write.open("doc.txt");
    if(!anshu_write)
    {
        cout<<"file not found : "<<endl;
        return 0;
    }
    string line;
    cout<<"enter your name: "<<endl;
    getline(cin,line);
    anshu_write<<line<<endl;
    anshu_write.close();

    ifstream kumar_read;
    kumar_read.open("doc.txt");
    if(!kumar_read)
    {
        cout<<"file not found : "<<endl;
        return 0;
    }
    string live;
    cout<<"displaying file content: "<<endl;
    while(getline(kumar_read,live))
    {
        cout<<live<<endl;
    }
    kumar_read.close();
    return 0;
}