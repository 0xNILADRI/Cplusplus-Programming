#include <iostream>
using namespace std;

class Rectangle{
    private:        // data members should always be private
        int length;
        int breadth;
    
    public:        // functions should be public

        // parameterized constructor
        Rectangle(int length=1, int breadth=1){  // passing arguments is similar to default or non-parameterized constructors
            this->length = length;
            this->breadth = breadth;
        }

        //copy constructor
        Rectangle(Rectangle (&rect)){
            length = rect.length;
            breadth = rect.breadth;
        }
        
        // mutators
        void setLength(int length){
            if (length>0)
                this->length = length;
            else{
                cout<<"Length cannot be negative. Set to 0."<<endl;
                this->length = 0;
            }
        }
        void setBreadth(int breadth){
            if (breadth>0)
                this->breadth = breadth;
            else{
                cout<<"Breadth cannot be negative. Set to 0."<<endl;
                this->breadth = 0;
            }
        }

        // accessors
        int getLength(){
            return length;
        }

        int getBreadth(){
            return breadth;
        }

        // functions
        int area(){
            return length*breadth;
        }
        int perimeter(){
            return 2*(length+breadth);
        }
};


int main(){
    Rectangle r;
    Rectangle r1(10,5);
    Rectangle r2(r1);
    cout<<endl;
    cout<<"Length r : "<<r.getLength()<<endl<<"Breadth r : "<<r.getBreadth()<<endl;
    cout<<"Area r : "<<r.area()<<endl<<"Perimeter r : "<<r.perimeter()<<endl;
    cout<<endl;
    cout<<"Length r1 : "<<r1.getLength()<<endl<<"Breadth r1 : "<<r1.getBreadth()<<endl;
    cout<<"Area r1 : "<<r1.area()<<endl<<"Perimeter r1 : "<<r1.perimeter()<<endl;
    cout<<endl;
    cout<<"Length r2 : "<<r2.getLength()<<endl<<"Breadth r2 : "<<r2.getBreadth()<<endl;
    cout<<"Area r2 : "<<r2.area()<<endl<<"Perimeter r2 : "<<r2.perimeter()<<endl;
    return 0;
}