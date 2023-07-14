#include <iostream>
using namespace std;

class student {
    string passcode;
    protected:
        int age;
    public:
        string name;
        int id;

        void intro() {
            cout << "My name is " << name << ", my id is " << id << endl;
        }

        void setPass(string s, int a) {
            passcode = s;
            age = a;
        }

        friend void hacker(student s);
};

void hacker(student s) {
    cout << s.passcode << "." << s.age << endl;
}

class bestfriend {
    public:
        void sharingSecret(student s) {
            cout << s.passcode << " " << s.age << endl;
        }
};

int main() {
    student s1;
    s1.name = "John";
    s1.id = 123;
    s1.setPass("0001", 10);
    s1.intro();

    bestfriend bbf;
    bbf.sharingSecret(s1);

    return 0;
}
