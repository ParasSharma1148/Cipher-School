// class.cpp


// #include<iostream>
#include<bits/stdc++.h>


using namespace std;


class student{


    string passcode;
    // int,char,string,float...
    public :
    string name;
    int id;


    void into(){
        cout<<"My name is "<<name<<" ,my id is "<<id<<"passcord is "<<passcode<<endl;
    }


    void setPass(string s){
        passcode = s;


    }


};


int main(){


    student s1;
    s1.name = "Mohit";
    s1.id = 1;
    s1.setPass("0001");
    s1.into();
    // s1.passcode = "001";


    return 0;
}


//friend.cpp


// #include<iostream>
#include<bits/stdc++.h>


using namespace std;


class student{


    string passcode;


    protected:


    int age;


    // int,char,string,float...
    public :
    string name;
    int id;


    void into(){
        cout<<"My name is "<<name<<" ,my id is "<<id<<"passcord is "<<passcode<<endl;
    }
