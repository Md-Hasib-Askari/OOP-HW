#include<iostream>
using namespace std;

class Employee{
    string name;
    int joining_year;
    double salary;
    string address;
public:
    // Setter Methods
    void setName(string n){name=n;}
    void setJoiningYear(int j){joining_year=j;}
    void setSalary(double s){salary=s;}
    void setAddress(string addr){address=addr;}

    // Getter Methods
    string getName(){return name;}
    int getJoiningYear(){return joining_year;}
    double getSalary(){return salary;}
    string getAddress(){return address;}
};

int main(){
    Employee e1, e2, e3;
    e1.setName("Robert");
    e1.setJoiningYear(1994);
    e1.setSalary(25000);
    e1.setAddress("64C-WallsStreet");

    e2.setName("Sam");
    e2.setJoiningYear(2000);
    e2.setSalary(20000);
    e2.setAddress("68D-WallsStreet");

    e3.setName("John");
    e3.setJoiningYear(1999);
    e3.setSalary(21000);
    e3.setAddress("26B-WallsStreet");

    cout << "Name\tYear of joining\tSalary\tAddress" << endl;
    cout << e1.getName() << "\t" << e1.getJoiningYear() << "\t\t" << e1.getSalary() << "\t" << e1.getAddress() << endl;
    cout << e2.getName() << "\t" << e2.getJoiningYear() << "\t\t" << e2.getSalary() << "\t" << e2.getAddress() << endl;
    cout << e3.getName() << "\t" << e3.getJoiningYear() << "\t\t" << e3.getSalary() << "\t" << e3.getAddress() << endl;
}
