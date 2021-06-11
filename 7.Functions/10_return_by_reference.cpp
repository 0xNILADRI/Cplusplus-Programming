#include <iostream>
using namespace std;

string & uppper_case(string &name){
    for(int i=0;i<name[i]!='\0';i++){
        name[i] = name[i]>=95 && name[i]<=122?(name[i]-=32):(name[i]);
    }
    return name;
}

int main(){
    string name;
    cout<<"Enter your name : ";
    getline(cin,name);
    cout<<uppper_case(name)<<endl;
    return 0;
}