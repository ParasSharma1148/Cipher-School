#include<iostream>
using namespace std;
class student
{
    string passcode;
    public:
    string name;
    int id;
    void into()
    {
        cout<<"My name is "<<name<<",my id is "<<passcode;
    }
    void setPass(string s)
    {
        passcode = s;
    }
};
int main()
{
    student s1;
    s1.name = "Mohit";
    s1.setPass("0001");
    s1.into();
    return 0;
}
