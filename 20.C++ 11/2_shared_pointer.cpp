# include<iostream>
# include<memory>
using namespace std;
    
class rectangle
{
	int length;
    int breadth;
    public:
        rectangle(int l,int b){
            length=l;
            breadth=b;
        }
        int area(){
            return length*breadth;
        }
};

int main()
{
	shared_ptr<rectangle> ptr(new rectangle(10,5));
	cout<<ptr->area()<<endl;
	shared_ptr<rectangle> ptr2;
	ptr2=ptr;
	cout<<"ptr2 "<<ptr2->area()<<endl;
	cout<<"ptr "<<ptr->area()<<endl;
	cout<<ptr.use_count()<<endl;
}