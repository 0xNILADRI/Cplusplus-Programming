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
    Rectangle *ptr = new Rectangle();
    ptr->length=10;
    ptr->breadth=20;
    cout<<"Perimeter : "<<ptr->perimeter()<<endl;
    return 0;
}