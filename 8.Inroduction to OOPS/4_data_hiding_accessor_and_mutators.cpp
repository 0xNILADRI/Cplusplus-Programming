#include <iostream>
using namespace std;

class Rectangle{
    private:        // data members should always be private
        int length;
        int breadth;
    
    public:        // functions should be public
        
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
            return 2*(length*breadth);
        }
};


int main(){
    Rectangle r;
    r.setLength(10);
    r.setBreadth(5);
    cout<<"Length : "<<r.getLength()<<endl<<"Breadth : "<<r.getBreadth()<<endl;
    cout<<"Area : "<<r.area()<<endl<<"Perimeter : "<<r.perimeter()<<endl;
    return 0;
}