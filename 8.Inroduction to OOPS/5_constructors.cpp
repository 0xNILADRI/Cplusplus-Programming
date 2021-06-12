#include <iostream>
using namespace std;

class Rectangle{
    private:        // data members should always be private
        int length;
        int breadth;
    
    public:        // functions should be public


        //default or non-parameterized constructors
        /*Rectangle(){
            length=1;
            breadth=1;
        }*/

        // parameterized constructor
        Rectangle(int l=1, int b=1){  // passing arguments is similar to default or non-parameterized constructors
            length = l;
            breadth = b;
        }

        //copy constructor
        Rectangle(Rectangle (&rect)){
            length = rect.length;
            breadth = rect.breadth;
        }
        
        // mutators
        void setLength(int l){
            if (l>0)
                length = l;
            else{
                cout<<"Length cannot be negative. Set to 0."<<endl;
                length = 0;
            }
        }
        void setBreadth(int b){
            if (b>0)
                breadth = b;
            else{
                cout<<"Breadth cannot be negative. Set to 0."<<endl;
                breadth = 0;
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