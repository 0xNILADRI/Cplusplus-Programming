#include <iostream>
#include <string>

using namespace std;

int main(){
    string str = "NiLaDRI ghosh";
    for (int i = 0; str[i]!='\0';i++){
        if (str[i]>90 && str[i]<=122){
            str[i] -= 32;
        }
    }
    cout<<str<<endl;
    return 0;
}