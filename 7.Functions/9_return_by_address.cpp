#include <iostream>
using namespace std;

int * recite_table(int num){
    int *table = new int[10];
    for(int i=0;i<10;i++){
        table[i] = num * (i+1);
    }
    return table;
}

int main(){
    int number, *table;
    cout<<"Enter the number : ";
    cin>>number;
    table = recite_table(number);
    for(int i=0;i<10;i++){
        cout<<table[i]<<endl;
    }
    return 0;
}