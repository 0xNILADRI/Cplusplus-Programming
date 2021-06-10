#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char s1[]="Programming",s2[]="gram",s3='g',s4[]="progrAmming";

    //find and print proceeding
    if (strstr(s1,s2)!=NULL){
        cout<<strstr(s1,s2)<<endl;
    }
    else {
        cout<<"No match found!"<<endl;
    }
    
    // find and print proceeding : character
    if (strchr(s1,s3)!=NULL){
        cout<<strchr(s1,s3)<<endl;
    }
    else {
        cout<<"No match found!"<<endl;
    }

    // find and print proceeding : character from rear end
    if (strrchr(s1,s3)!=NULL){
        cout<<strrchr(s1,s3)<<endl;
    }
    else {
        cout<<"No match found!"<<endl;
    }

    // compare strings , first mismatch
    cout<<strcmp(s1,s4)<<endl;

    return 0;
}