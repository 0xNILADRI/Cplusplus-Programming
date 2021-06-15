#include<fstream>
#include<iostream>
using namespace std;

int main(){
    ifstream infile;
    infile.open("a.txt");
    if(!infile.is_open())
        cout<<"Unable to open file"<<endl;
    
    string str,str2;
    int x;

    infile>>str>>x>>str2;
    if(infile.eof()){
        cout<<"end of file reached"<<endl;
        infile.close();
    }
    cout<<"Name : "<<str<<endl<<"Roll No : "<<x<<endl<<"Branch : "<<str2<<endl;
    return 0;
}