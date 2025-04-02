#include<iostream>
#include<fstream>
using namespace std;


int main(){

    ifstream file("file.txt");
    if(!file){
        cout<<"File not found!"<<endl;
        return 1;
    }
    string live;
    cout<<"Displaying file content: "<<endl;
    while(getline(file,live))
    {
        cout<<live<<endl;
    }
    file.close();

    ofstream file1("file.txt", ios::app);
    string send;
    cout<<"Enter your name: ";
    getline(cin, send);
    file1<<send;
    file1.close();
    
    file.open("file.txt");
    while(getline(file, live))
    cout<<live<<endl;
    file.close();
    
    file.open("file.txt");
    getline(file, live);
    cout<<"Displaying: "<<live<<endl;
    file.close();
    return 0;
}