#include <iostream>
using namespace std;

class Shape{
    public:
        virtual float area()=0;
        virtual float perimeter()=0;
};

class Rectangle:public Shape{
    private:
        float length;
        float breadth;
    public:
        // constructor 
        Rectangle(float length = 1, float breadth = 1){
            this->length = length;
            this->breadth = breadth;
        }

        float area(){
            return length*breadth;
        }

        float perimeter(){
            return 2 * (length+breadth);
        }
};

class Circle:public Shape{
    private:
        float radius;
    public:
        // constructor 
        Circle(float radius = 1){
            this->radius = radius;
        }

        float area(){
            return 3.14*radius*radius;
        }

        float perimeter(){
            return 2*3.14*radius;
        }
};

int main(){
    Shape *s;
    s = new Rectangle(1.2,4);
    cout<<"Area of rectangle "<<s->area()<<endl;
    cout<<"Perimeter of rectangle "<<s->perimeter()<<endl;
    cout<<endl;
    s = new Circle(4.2);
    cout<<"Area of circle "<<s->area()<<endl;
    cout<<"Circumference of circle "<<s->perimeter()<<endl;
    
    return 0;
}