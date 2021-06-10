#include <iostream>
using namespace std;

int main(){
    string st = "tattarrattat",st1="";
    for(int i=st.length()-1;i!=-1;i--){
        st1.push_back(st[i]);
    }
    if (st==st1){
        cout<<"Palindrome"<<endl;
    }
    else
        cout<<"Not Palindrome"<<endl;
    return 0;
}