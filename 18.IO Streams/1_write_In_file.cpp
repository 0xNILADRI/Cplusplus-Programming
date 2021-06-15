#include<fstream>
#include<iostream>
using namespace std;

int main(){
    ofstream ofs ("a.txt",ios::trunc);
    ofs<<"John"<<endl;
    ofs<<25<<endl;
    ofs<<"cs";
    ofs.close();
}
