#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,b,c,r1,r2;
    cout<<"Enter values of a , b , c \n";
    cin>>a>>b>>c;
    r1 = (-b - sqrt(b*b-4*a*c))/(2*a);
    r2 = (-b + sqrt(b*b-4*a*c))/(2*a);
    cout<<"Solutions are : "<<r1<<" and "<<r2<<endl;
    return 0;
}