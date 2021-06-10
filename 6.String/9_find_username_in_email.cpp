#include <iostream>
using namespace std;

int main(){
    string email = "abc1472@gmail.com";
    string id="";
    for (int i=0;i<email.length();i++){
        if(email[i]=='@')
            break;
        else
            if (email[i]>=48 || email[i]<=57 || email[i]>=65 || email[i]<=90 || email[i]>=97 || email[i]<=122 || email[i]==95){
                
            }
            id.push_back(email[i]);
    }
    cout<<"User ID : "<<id<<endl;
    return 0;
}