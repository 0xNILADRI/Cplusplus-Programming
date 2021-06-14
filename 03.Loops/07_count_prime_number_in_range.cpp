#include <iostream>
using namespace std;

int isPrime(int num)
{
    if (num<=1)
    {
        return 0;
    }
    for (int i=2; i<=num/2; i++)
    {
        if (num%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int countPrime(int start, int stop)
{
    int count = 0;
    for (int i = start; i<= stop; i++)
    {
        if(isPrime(i) == 1)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int start,stop;
    cout<<"Enter Start and Stop point : \n";
    cin>>start>>stop;
    cout<<"Number of prime numbers in range :"<< countPrime(start,stop)<< endl;
    return 0;
}