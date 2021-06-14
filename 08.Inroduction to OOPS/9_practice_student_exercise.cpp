#include <iostream>
using namespace std;

class Student{
    int rollNo;
    string name;
    float scoreOne;
    float scoreTwo;
    float scoreThree;

    public :
        //constructor 
        Student (int rollNo, string name, float scoreOne, float scoreTwo, float scoreThree){
            this->rollNo = rollNo;
            this->name = name;
            this->scoreOne = scoreOne;
            this->scoreTwo = scoreTwo;
            this->scoreThree = scoreThree;
        }

        float total_score(){
            return scoreOne+scoreTwo+scoreThree;
        }

        char grade(){
            float avg = total_score()/3;
            if (avg>=60.0f) 
                return 'A';
            else if (avg>=40.0f && avg<60.0)
                return 'A';
            else    
                return 'C';
        }
};

int main(){
    int rollNo;
    string name;
    float scoreOne,scoreTwo,scoreThree;
    cout<<"Enter your name : ";
    getline(cin,name);
    cout<<"Enter your roll number : ";
    cin>>rollNo;
    cout<<"Enter three scores : "<<endl;
    cin>>scoreOne>>scoreTwo>>scoreThree;
    Student s(rollNo,name,scoreOne,scoreTwo,scoreThree);
    cout<<"Total Marks : "<<s.total_score()<<endl;
    cout<<"Grade obtained : "<<s.grade()<<endl;
    return 0;
}