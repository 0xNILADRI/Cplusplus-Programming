# include<iostream>
# include<memory>
using namespace std;
    
class test{
	int x=10;
    int y=13;
    public:
	    test(int a,int b){
            x=a;
            y=b;
        }
        test():test(1,1)
        {}
};
int main()
{}