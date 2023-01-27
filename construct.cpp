#include<iostream>
using namespace std;

class student{

    string passcode;

    public:
    string name;
    int id;

    student(){

    }
    student(string passcode, string name, int id): name(name), passcode(passcode), id(id){
        // name = n; 
        // id = i;
        // passcode = pss;
        this->id = id;
        this->passcode = passcode;
    }

    void intro(){
        cout<<"My name is: "<<name<<" , my id is: "<<id<<" passcode is "<<passcode<<endl;
    }

    void setPass(string s){
        passcode = s;
    }

    ~student(){
    }
};
int main(){
    student s1;
    student s2("20", "Hemanth", 2);
    student s3;

    s3 = s2;
    s3.intro();

    // int a = 10;
    // int*ptri = &a;
    // student*ptrs = &s2;

    // if(sizeof(ptri) == sizeof(ptrs)){
    //     cout<<"true"<<endl;
    // }else{
    //     cout<<"false"<<endl;
    // }

    return 0;
}
