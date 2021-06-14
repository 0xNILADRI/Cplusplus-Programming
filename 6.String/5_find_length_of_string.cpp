#include <iostream>
#include <string>
using namespace std;

int main(){
    int len1=0, len2=0;
    string str = "Hello this is a demo sentence!";

    // basic for loop
    for(int i=0;str[i]!='\0';i++){
        len1++;
    }
    
    // using iterator
    string::iterator it;
    for(it=str.begin();it!=str.end();it++){
        len2++;
    }
    cout<<"Length : "<<len1<<endl;
    cout<<"Length : "<<len2<<endl;
    return 0;
}