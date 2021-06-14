#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the two numbers : \n";
    cin>>a>>b;
    if (a > b)
    {
        cout<<"Max is "<< a <<endl;
    }
    else
    {
        cout<<"Max is "<< b <<endl;
    }
    return 0;
}