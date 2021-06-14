#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int *p = new int[size];
    cout<<"enter elements : \n";
    for (int i=0;i<size;i++){
        cin>>p[i];
    }
    delete []p; // avoid memory leak  
    cout<<"enetr new size : ";
    cin>>size;
    p = new int[size];
    for (int i=0;i<size;i++){
        cin>>p[i];
    }
    return 0;
}