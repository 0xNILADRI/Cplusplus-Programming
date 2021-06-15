#include<fstream>
#include<iostream>
using namespace std;

class Student{
    public:
        string name, branch;
        int rollNo;

        // constructor
        Student(string name= " ", int rollNo=0, string branch=" "){
            this->name = name;
            this->rollNo = rollNo;
            this->branch = branch;
        }

        friend ofstream & operator<<(ofstream &ofs, Student &s);
        friend ifstream & operator>>(ifstream &ifs, Student &s);
};

ofstream & operator<<(ofstream &ofs, Student &s){
    cout<<"Name    : "<<s.name<<endl;
    cout<<"Roll No : "<<s.rollNo<<endl;
    cout<<"Branch  : "<<s.branch<<endl;
    return ofs;
}

ifstream & operator>>(ifstream &ifs, Student &s){
    ifs>>s.name>>s.rollNo>>s.branch;
    return ifs;
}

int main(){
    Student s1("Niladri Ghosh",17,"CS");
    ifstream ifs("student.txt");
    ifs>>s1;
    ifs.close();

    ofstream ofs("student.txt");
    if(!ofs.is_open())
        cout<<"Unable to open file"<<endl;
    ofs<<s1;
    ofs.close();

    return 0;
}