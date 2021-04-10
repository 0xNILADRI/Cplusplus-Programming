#include <iostream>
using namespace std;
int main(){
    int A[10]={6,8,13,17,20,22,25,28,30,35},n=10,key,low=0,high=9,mid;
    cout<<"Enter the key : ";
    cin>>key;
    while(low<=high){
        mid=(low+high)/2;
        if(key==A[mid]) {
            cout<<"Element found at "<<mid<<endl;
            return 0;
        }
        else if(key>A[mid]){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout<<"Not found"<<endl;
    return 0;
}