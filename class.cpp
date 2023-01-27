#include<iostream>
using namespace std;

class Student{

    string passcode;
    public:
    string name;
    int id;

    void intro(){
        cout<<"My name is: "<<name<<" , my id is: "<<id<<" passcode is "<<passcode<<endl;
    }

    void setPass(string s){
        passcode = s;
    }
};
int main(){
    Student s1 ;
    s1.name = "Hemanth";
    s1.id = 1;
    s1.setPass("0001");
    s1.intro();
    return 0;
}
