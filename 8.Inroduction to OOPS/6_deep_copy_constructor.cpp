#include <iostream>
using namespace std;

class Create_array{
    int a;
    int *p;

    public :
        Create_array (int x){   // constructor 
            a = x;
            p = new int[a];
            fill_array(p,a);
        }

        Create_array (Create_array &t){
            a = t.a;
            p = new int[a]; 
            p = t.p;
        }

        // Mutator
        void fill_array(int arr[], int s){
            cout<<"Enter the elements : "<<endl;
            for (int i=0;i<s;i++){
                cin>>arr[i];
            }
        }

        // Accessor
        void display(){
            cout<<"Elements are : "<<endl;
            for(int i=0;i<a;i++){
                cout<<p[i]<<endl;
            }
        }
};

int main(){
    Create_array t(5);
    Create_array t2(t);
    t.display();
    t2.display();
}