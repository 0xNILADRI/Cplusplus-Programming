#include <iostream>
using namespace std;

class Test{
    private:
        int a;
        int b;
    public:
        static int count;
        Test(){
            a = 10;
            b = 20;
            count++;
        }

        // static function
        static int getCount(){
            return count;
        }
};

int Test::count =0;

int main(){
    Test t1;
    cout<<t1.count<<endl;
    Test t2;
    cout<<t2.count<<endl;
    
    t1.count = 25;          // count memory assigned is same for t1 and t2
    cout<<t2.count<<endl;
    cout<<Test::count<<endl; // static member can called using just the class name without using any object.

    cout<<t2.getCount()<<endl;    // static function
    cout<<Test::getCount()<<endl;
    return 0;
}