#include <iostream>
using namespace std;
int main()
{
    int num,range;
    cout<<"Enter the number : \n";
    cin>>num;
    while(1)
    {
        cout<<"Enter the range : ";
        cin>>range;
        if (range<=num)
        {
            break;
        }
        else
        {
            cout<<"Invalid range. Try Again! \n";
        }
    }
    for (int i = 1; i <= range; i++)
    {
        if (num % i == 0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}