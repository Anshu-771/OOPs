#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream out("file.txt", ios::out | ios::app);
    if (!out) {
        cout << "File could not be opened!" << endl;
        return 1;
    }
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    out <<name<< endl;
    out.close();

    ifstream in("file.txt", ios::in);
    if (!in) {
        cout << "File could not be opened!" << endl;
        return 1;
    }
    string line;
    in>>line;
    cout<<"displaying : "<<line;
    while (getline(in, line)) {
        cout << line << endl;
    }
    in.close();
    
    return 0;
}
