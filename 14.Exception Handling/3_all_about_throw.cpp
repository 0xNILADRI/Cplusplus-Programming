# include<iostream>
using namespace std;
    
class myexception: exception
{
};

int division(int a,int b){
	if(b==0)
		throw myexception();
	return a/b;
}

int main(){
	int x=10,y=2,z;
	try{
		z=division(x,y);
		cout<<z<<endl;
	}
	catch(myexception e){
		cout<<"division by zero"<<endl;
	}
	cout<<"bye"<<endl;
}