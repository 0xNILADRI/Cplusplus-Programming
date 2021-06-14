#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char s1[]="hello",s2[]="world",s3[]="hello",s4[]="world",s5[]="",s6[]="world",s7[]="",s8[]="world";

    // length of string
    cout<<strlen(s1)<<endl;

    // concatenate string
    cout<<strcat(s1,s2)<<endl;

    // concatenate n letters
    cout<<strncat(s3,s4,3)<<endl;

    // copy string
    cout<<strcpy(s5,s6)<<endl;
    
    // string buffer created, strcpy and strncpy not safe to use in a single program

    // copy n letters
    cout<<strncpy(s7,s8,2)<<endl;

    return 0;
}