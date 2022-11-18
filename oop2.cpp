#include<iostream>
using namespace std;

class Student{
    string name;
    string roll;
    string phone;
    string address;
public:
    // Setter Methods
    void setName(string nm){name=nm;}
    void setRoll(string rl){roll=rl;}
    void setPhone(string phn){phone=phn;}
    void setAddress(string addr){address=addr;}

    // Getter Methods
    string getName(){return name;}
    string getRoll(){return roll;}
    string getPhone(){return phone;}
    string getAddress(){return address;}
};

int main(){
    Student s1, s2;
    s1.setName("Sam");
    s1.setRoll("22-12345-3");
    s1.setPhone("0123456789");
    s1.setAddress("Bashundhara");

    s2.setName("John");
    s2.setRoll("22-54321-3");
    s2.setPhone("0198765432");
    s2.setAddress("Agargaon");

    cout << "Student 1:" << endl;
    cout << "Name: " << s1.getName() << endl << "Roll: " << s1.getRoll() << endl << "Phone: " << s1.getPhone() << endl << "Address: " << s1.getAddress() << endl;
    cout << endl << "Student 2:" << endl;
    cout << "Name: " << s2.getName() << endl << "Roll: " << s2.getRoll() << endl << "Phone: " << s2.getPhone() << endl << "Address: " << s2.getAddress() << endl;
}
