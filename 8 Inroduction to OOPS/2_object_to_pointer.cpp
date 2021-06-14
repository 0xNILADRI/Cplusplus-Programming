#include <iostream>
using namespace std;

class Rectangle{
    public:
        int length;
        int breadth;

        int area(){
            return length*breadth;
        }

        int perimeter(){
            return 2*(length+breadth);
        }
};

int main(){
    Rectangle r;
    Rectangle *ptr;
    ptr=&r;
    
    ptr->length=10;
    ptr->breadth=20;
    cout<<"Area : "<<ptr->area()<<endl;
    return 0;
}