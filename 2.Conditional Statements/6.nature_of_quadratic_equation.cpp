#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c;
    float dis, single, root1, root2;
    cout<<"Enter values of a, b and c \n";
    cin>>a>>b>>c;
    dis = (float) pow(b,2) - (4*a*c);
    if (dis == 0)
    {
        cout<<"Roots are real and equal"<<endl;
        cout<<"Solution is "<< -b /(2*a)<<endl;
    }
    else if (dis > 0)
    {
        cout<<"Roots are real and unequal"<<endl;
        root1 = (float) (-b + sqrt(dis))/(2*a); 
        root2 = (float) (-b - sqrt(dis))/(2*a);
        cout<<"Root 1 is "<<root1<<" and Root 2 is "<<root2<<endl;
    }
    else
    {
        cout<<"Root is imaginary"<<endl;
    }
    return 0;
}