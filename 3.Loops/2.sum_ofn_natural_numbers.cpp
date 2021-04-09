#include <iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Enter the number \n";
    cin>>num;
    for (int i=1;i<=num;i++)
    {
        sum+=i;
    }
    cout<<"Sum : "<<sum<<endl;
    return 0;
}