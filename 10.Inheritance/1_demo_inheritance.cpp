#include <iostream>
using namespace std;

class Rectangle{
    int length;
    int breadth;
    public:
        //constructor
        Rectangle(int length=0, int breadth=0){
            this->length = length;
            this->breadth = breadth;
        }

        // copy constructor
        Rectangle (Rectangle (&r)){
            this->length = r.length;
            this->breadth = r.breadth; 
        }

        // accessor 
        int getLength(){ return length; }
        int getBreadth(){ return breadth; }

        // mutators
        void setLength(int length);
        void setBreadth(int breadth);

        // facilatators
        int area();

        // inspector 
        bool isSquare();

        // operator overloading
        friend ostream & operator<<(ostream &out, Rectangle &r);

        // destructor
        ~Rectangle();
};

void Rectangle::setLength(int length){
    if (length>0){
        this->length = length;
    }
    else{
        cout<<"Length cannot be negative. Set to 0."<<endl;
        this->length = 0;
    }
}

void Rectangle::setBreadth(int breadth){
    if (breadth>0){
        this->breadth = breadth;
    }
    else{
        cout<<"Breadth cannot be negative. Set to 0."<<endl;
        this->breadth = 0;
    }
}

int Rectangle::area(){
    return length*breadth;
}

bool Rectangle::isSquare(){
    return (length==breadth);
}

ostream & operator<<(ostream &out, Rectangle &r){
    out<<"Length : "<<r.getLength()<<endl<<"Breadth : "<<r.getBreadth()<<endl;
    return out;
}

Rectangle::~Rectangle(){
    cout<<"Rectangle destroyed."<<endl;
}

class Cuboid:public Rectangle{
    int height;
    public:
        // constructor
        Cuboid(int length=0,int breadth=0,int height=0):Rectangle(length,breadth){
            this->height = height;
        }

        // copy constructor 
        Cuboid (Cuboid (&c)):Rectangle(){
            setLength(c.getLength());
            setBreadth(c.getBreadth());
            this->height = c.height;
        }

        // accessor
        int getHeight(){ return height; }

        // mutator
        void setHeight(int height);

        // facilitatator
        int volume();

        // enquire
        bool isSquareCuboid();

        // operator overloading
        friend ostream & operator<<(ostream &out, Cuboid &c);

        // destructor
        ~Cuboid();
};

void Cuboid::setHeight(int height){
    if (height>0){
        this->height = height;
    }
    else {
        cout<<"Height cannot be zero. Set to 0."<<endl;
        this->height = 0;
    }
}

int Cuboid::volume(){
    return getLength()*getBreadth()*height;
}

bool Cuboid::isSquareCuboid(){
    return (getLength()==getBreadth()==height);
}

ostream & operator<<(ostream &out, Cuboid &c){
    out<<"Length : "<<c.getLength()<<endl<<"Breadth : "<<c.getBreadth()<<endl<<"Height : "<<c.getHeight()<<endl;
    return out;
}

Cuboid::~Cuboid(){
    cout<<"Cuboid destroyed."<<endl;
}

int main(){
    Cuboid c(5,6,4),c1(c);
    cout<<c<<endl<<c1<<endl;
    cout<<"Volume of cuboid : "<<c.volume()<<endl;
    if (c.isSquareCuboid()){
        cout<<"This is a square cuboid"<<endl;
    }
    else{
        cout<<"Not a square cuboid."<<endl;
    }
    return 0;
}