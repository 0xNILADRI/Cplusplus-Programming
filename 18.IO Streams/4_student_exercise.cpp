#include<iostream>
#include<fstream>
using namespace std;

class Product{
    public:
        string name;
        float price;
        int quantity;

        //constructor
        Product(string name = " ",float price = 0, int quantity = 0){
            this->name = name;
            this->price = price;
            this->quantity = quantity;
        }

        friend ifstream & operator>>(ifstream &ifs, Product &p);
        friend ofstream & operator<<(ofstream &ofs, Product &p);
};

ifstream & operator>>(ifstream &ifs, Product &p){
    ifs>>p.name>>p.price>>p.quantity;
    return ifs;
}

ofstream & operator<<(ofstream &ofs, Product &p){
    cout<<"Name     : "<<p.name<<endl;
    cout<<"Price    : $"<<p.price<<endl;
    cout<<"Quantity : "<<p.quantity<<endl;
    return ofs;
}

int main(){
    Product p1("Hennessey Cognac",399.99,60);
    ifstream ifs("product.txt");
    ifs>>p1;
    ifs.close();

    ofstream ofs("product.txt");
    ofs<<p1;
    ofs.close();

    return 0;
}