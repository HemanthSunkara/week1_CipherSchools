#include<iostream>
using namespace std;

class Student{

    string passcode;
    friend class bestFriend;

    protected:
    int age;

    public:
    string name;
    int id;
 
    Student(){

    }

    Student(int id, string name, string passcode, int age){
        this->name = name; 
        this->id = id;
        this->passcode = passcode;
        this->age = age;
    }
    void intro(){
        cout<<"My name is: "<<name<<" , my id is: "<<id<<" passcode is "<<passcode<<endl;
    }

    void setter(string s,int a, string n, int i){
        passcode = s;
        age = a;
        name = n;
        id = i;
    }

    friend void hacker(Student s);
    // friend class bestFriend;
};

void hacker(Student s){
    cout<<s.passcode<<" "<<s.age<<endl;
}

class bestFriend{
    public:

    void sharingSecret(Student s){
        cout<<s.passcode<<" "<<s.age<<endl;
    }
};
int main(){
    Student s1(1, "Hemanth", "0001", 10);
    // Student s2;

    // s2 = s1;
    // s2.intro();
    // s1.setter("0001", 10, "Mohit", 1);

    // int a = 10;
    // int*ptri = &a;

    // Student*ptrs = &s1;
    // cout<<ptrs->name<<endl;
    // cout<<(*ptrs).name<<endl;
    // bestFriend bff;
    // hacker(s1);
    // bff.sharingSecret(s1);
    return 0;
}
