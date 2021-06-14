#include <iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Enter the number : ";
    cin>>num;
    for (int i=1; i<=num; i++)
    {
        if (num%i == 0)
        {
            sum += i;
        }
    }
    cout<<"Sum of factors is "<<sum<<endl;
    if (num*2==sum)
    {
        cout<<"Perfect Number."<<endl;
    }
    else
    {
        cout<<"Not a perfect number."<<endl;
    }
    return 0;
}