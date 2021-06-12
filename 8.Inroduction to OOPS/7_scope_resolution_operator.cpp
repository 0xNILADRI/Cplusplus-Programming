#include <iostream>
using namespace std;

class Rectangle{
    private:        // data members should always be private
        int length;
        int breadth;
    
    public:        // functions should be public
        
        Rectangle(); //default or non-parameterized constructor fucntion
        
        Rectangle(int l, int b); // parameterized constructor function
        
        Rectangle(Rectangle (&r)); //copy constructor function
        
        void setLength(int l); // Mutators
        void setBreadth(int b); 
        
        int getLength(); // Accessors
        int getBreadth();

        int area(){ return length*breadth; }; // facilitatators  // declared inline
        int perimeter(){ return 2*(length+breadth); };

        inline bool isSquare(); // inspector / enquire           // declared inline

        ~Rectangle(); // destructors
};


int main(){
    Rectangle r(10,10);
    cout<<"Area : "<<r.area()<<endl;
    if (r.isSquare()){
        cout<<"It's Square!"<<endl;
    }
    return 0;
}

//default or non-parameterized constructors
Rectangle::Rectangle(){
    length=1;
    breadth=1;
}

// parameterized constructor
Rectangle::Rectangle(int l=1, int b=1){  // passing arguments is similar to default or non-parameterized constructors
    length = l;
    breadth = b;
}

//copy constructor
Rectangle::Rectangle(Rectangle (&rect)){
    length = rect.length;
    breadth = rect.breadth;
}

// mutators
void Rectangle::setLength(int l){
    if (l>0)
        length = l;
    else{
        cout<<"Length cannot be negative. Set to 0."<<endl;
        length = 0;
    }
}
void Rectangle::setBreadth(int b){
    if (b>0)
        breadth = b;
    else{
        cout<<"Breadth cannot be negative. Set to 0."<<endl;
        breadth = 0;
    }
}

// accessors
int Rectangle::getLength(){
    return length;
}

int Rectangle::getBreadth(){
    return breadth;
}

// inspector / enquire

bool Rectangle::isSquare(){
    return (length==breadth);
}

// destructor
Rectangle::~Rectangle(){
    cout<<"Rectangle Destroyed."<<endl;
}