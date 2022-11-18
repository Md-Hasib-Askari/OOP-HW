#include<iostream>
using namespace std;

class Student{
public:
    string name;
    char *id;
//    string id;
    void setID(char *new_id) {
        id=new_id;
    }
};

int main(){
    Student s1;
    s1.name = "Md Hasib Askari";
    char id[] = "22-48472-3";
    s1.setID(id);
    cout << "Name: " << s1.name << endl << "ID: " << s1.id << endl;
}
