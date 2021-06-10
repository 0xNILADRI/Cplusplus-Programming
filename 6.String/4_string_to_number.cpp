#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str1[]="235",str2[]="54.78",str3[]="x=4;y=6;z=10";

    // string to long int 
    long int a = strtol(str1,NULL,10);

    // string to float
    float b = strtof(str2,NULL);

    cout<<a<<b<<endl;

    // tokenize a string : using delimiters
    char *token = strtok(str3,"=;");
    while (token!=NULL){
        cout<<token<<endl;
        token=strtok(NULL,"=;");
    }

    return 0;
}