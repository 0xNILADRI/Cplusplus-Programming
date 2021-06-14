#include <iostream>
using namespace std;

void reverse(string st){
    int i = 0;
    if (st[i]!='\0'){
        reverse(st.substr(1));
        cout<<st[0]<<endl;
    }
}

int main(){
    string word = "hello";
    reverse(word);
    return 0;
}