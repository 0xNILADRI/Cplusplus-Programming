#include <iostream>
using namespace std;

class Employee{
    int eid;
    string name;
    public:
        // constructor 
        Employee(int eid, string name){
            this->eid = eid;
            this->name = name;
        }
        int getEmployeeID(){ return eid; }
        string getName(){ return name; }
};
class FulltimeEmployee:public Employee{
    int salary;
    public:
        //constructor 
        FulltimeEmployee(int eid, string name, int salary):Employee(eid,name){
            this->salary = salary;
        }
        int getSalary(){ return salary; }
};
class ParttimeEmployee:public Employee{
    int wage;
    public:
        //constructor
        ParttimeEmployee(int eid, string name, int wage):Employee(eid,name){
            this->wage = wage;
        }
        int getWage(){ return wage; }
};

int main(){
    FulltimeEmployee micheal(1244,"Micheal Krasinski",4000);
    ParttimeEmployee scott(7614,"Scott Beesly",120);
    cout<<"Salary of "<<micheal.getName()<<" is "<<micheal.getSalary()<<endl;
    cout<<"Salary of "<<scott.getName()<<" is "<<scott.getWage()<<endl;
    return 0;
}