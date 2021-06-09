#include <iostream>
using namespace std;
int main()
{
    int num,i=1;
    cout<<"Enter the number for table \n";
    cin>>num;
    cout<<"***** For Loop *****"<<endl;
    while(i<=10)
    {
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
        i++;
    }

    cout<<"***** For Loop *****"<<endl;
    for (i=1;i<=10;i++)
    {
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
    }
    
    return 0;
}