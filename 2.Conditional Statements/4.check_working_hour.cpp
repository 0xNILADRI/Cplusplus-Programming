#include <iostream>
using namespace std;
int main()
{
    int hour;
    cout<<"Enter hour : \n";
    cin>>hour;
    if (hour >= 9 && hour <= 18)
    {
        cout<<"working"<<endl;
    }
    else if (hour < 0 || hour > 24)
    {
        cout<<"Invalid hour"<<endl;
    }
    else
    {
        cout<<"leisure"<<endl;
    }
    return 0;
}