# include<iostream>
using namespace std;
    
namespace first
{
	void fun()
	{
		cout<<"first"<<endl;
	}
};

namespace second
{
	void fun()
	{
		cout<<"second"<<endl;
	}
};

using namespace first;

int main()
{
	fun(); // by default first fun is used due to namespace
    second::fun();
	std::cout<<"Used namespace cout::std"<<endl;
    return 0;
}