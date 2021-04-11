#include <iostream>
using namespace std;
int main(){
    int A[]{2,4,6,8,10};
    int *p=A, *q=&A[4];
    
    // pointer arithmetic
    p++;
    cout<<"p++ address : "<<p<<endl;
    cout<<"p++  value : "<<*p<<endl;
    cout<<endl;
    p--;
    cout<<"p-- address : "<<p<<endl;
    cout<<"p--  value : "<<*p<<endl;
    cout<<endl;
    cout<<"*p : "<<*p<<endl;
    cout<<"*p+1 : "<<*p+1<<endl;
    cout<<"*(p+1) : "<<*(p+1)<<endl;
    cout<<"looping through A[i]"<<endl;
    for(int i=0;i<5;i++){
        cout<<A[i]<<endl;
    }
    cout<<endl<<"looping through i[A]"<<endl;
    for(int i=0;i<5;i++){
        cout<<i[A]<<endl;
    }
    cout<<endl<<"looping through *(A+i) or *(p+i) or p[i] "<<endl;
    for(int i=0;i<5;i++){
        cout<<*(A+i)<<endl;
    }
    cout<<endl<<"difference between two pointers "<<q-p<<endl;
    return 0;
}