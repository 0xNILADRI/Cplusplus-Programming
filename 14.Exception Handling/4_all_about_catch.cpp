# include<iostream>
using namespace std;
    
class myexception1: exception{

};

class myexception2:public myexception1{

};

int main(){
	try{
		throw myexception1();
	}

	catch(myexception2 e){ // child class must be used at the top
		cout<<"int catch"<<endl;
	}

	catch(myexception1 e){   // parent class must be used at the end
		cout<<"double catch"<<endl;
	}
	catch(...) // must be used at last
	{
		cout<<"all catch"<<endl;
	}
}