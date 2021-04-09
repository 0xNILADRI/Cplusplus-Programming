#include <iostream>
using namespace std;
int main ()
{
    int num, count=0;
    cout<<"Enter the number : ";
    cin>>num;
    if (num <= 1)
    {
        cout<<cout<<"Not a prime number"<<endl;
    }
    for(int i=2; i<=num/2; i++)
    {
        if (num%i == 0)
        {
            cout<<"Not a prime number"<<endl;
            count++;
            break;
        }
    }
    if (count == 0)
    {
        cout<<"Prime Number"<<endl;
    }
    return 0;
}