/*
    Polymorphism must have three things :
        * A generalized class with a pointer pointing to the object of a child class.
            (this helps in dynamic programming and achieving less memory usage)
        
        * Function overriding in both the generalized as well as the child classes.

        * Virtual keyword must be used in order to locate the function call to its own object class.


    There are three types of Base class :
        * All concrete functions.
            purpose : reusablity.
        
        * Some concrete and some pure vitual functions.    // Abstract Class
            purpose : reusablity and polymorphism

        * All pure virtual functions.                      // Abstract Class : Interface
            purpose : polymorphism.

*/

#include <iostream>
using namespace std;

// generalized / abstract class : no object can be created.
class Car{
    public:
        // pure virtual class, since assigned to 0. If not called it becomes abstract.
        virtual void start() = 0;
        virtual void stop() = 0;
};

class Innova:public Car{
    public:
        void start(){
            cout<<"Innova started."<<endl;
        }
        void stop(){
            cout<<"Innova stopped."<<endl;
        }
};

class Swift:public Car{
    public:
        void start(){
            cout<<"Swift started."<<endl;
        }
        void stop(){
            cout<<"Swift stopped."<<endl;
        }
};

int main(){
    Car *car = new Innova();
    car->start();
    car->stop();

    car = new Swift();
    car->start();
    car->stop();

    return 0;
}