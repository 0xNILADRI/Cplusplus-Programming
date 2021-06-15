#include<iostream>
#include<fstream>
using namespace std;

class Item{
    private:
        string name;
        float price;
        int qty;
    public:
        Item(){}
        Item(string n,float p,int q);
        friend ifstream & operator>>(ifstream &ifs,Item &i);
        friend ofstream & operator<<(ofstream &ofs,Item &i);
        friend ostream & operator<<(ostream &out,Item &i);

};

Item::Item(string n,float p,int q){
    name=n;
    price=p;
    qty=q;
}

ofstream & operator<<(ofstream &ofs,Item &i){
    ofs<<i.name<<endl<<i.price<<endl<<i.qty<<endl;
    return ofs;
}

ifstream & operator>>(ifstream &ifs,Item &i){
    ifs>>i.name>>i.price>>i.qty;
    return ifs;
}

ostream & operator<<(ostream &out,Item &i){
    out<<i.name<<endl<<i.price<<endl<<i.qty<<endl;
    return out;
}


int main()
{
    int n;
    string name;
    float price;
    int qty;

    cout<<"Enter number of Item:";
    cin>>n;

    Item *list[n];

    cout<<"Enter All Item "<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i+1<<" Item Name , Price and Quantity"<<endl;
        cin>>name;
        cin>>price;
        cin>>qty;

        list[i]=new Item(name,price,qty);
    }

    ofstream fos("product.txt");
    for(int i=0;i<n;i++){
        fos<<*list[i];
    }
    
    Item item;
    ifstream ifs("product.txt");
    for(int i=0;i<n;i++){
        ifs>>item;
        cout<<"Item "<<i<<endl<<item<<endl;
    }
    return 0;
}