#include <iostream>
#include <string>
using namespace std;

int main(){
    int vowelCount=0, wordCount=0, consonantCount=0;
    string str = "How      many words and vowels are there in this sentence 77642 {] >< .?";
    for(int i=0;str[i]!='\0';i++){
        if(str[i]<=90 && str[i]>=65){
            str[i] += 32;
        }
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            vowelCount++;
        }
        else{
            if(str[i]>=97 && str[i]<=122){
                consonantCount++;
            }
        }
        if(str[i]==' ' && str[i+1]!=' '){
            wordCount++;
        }
    }
    cout<<"Words : "<<wordCount<<endl<<"Vowels : "<<vowelCount<<endl<<"Consonants : "<<consonantCount<<endl;
    cout<<str.length()<<endl;
    return 0;
}