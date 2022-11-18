#include<iostream>
using namespace std;

class Rectangle{
    double length;
    double breadth;
public:
    // Setter Methods
    void setLength(double l){length=l;}
    void setBreadth(double b){breadth=b;}

    // Getter Methods
    double returnArea(){return length*breadth;}
};

int main(){
    double len, br;
    cout << "Enter the length: ";
    cin >> len;
    cout << "Enter the breadth: ";
    cin >> br;

    Rectangle r1;
    r1.setLength(len);
    r1.setBreadth(br);

    cout << "Area of the rectangle: " << r1.returnArea() << endl;
}
