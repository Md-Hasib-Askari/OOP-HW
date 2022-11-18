#include<iostream>
using namespace std;

class Box{
    double length;
    double breadth;
    double height;
public:
    // Setter Methods
    void setLength(double l){length=l;}
    void setBreadth(double b){breadth=b;}
    void setHeight(double h){height=h;}

    // Getter Methods
    double getLength(){return length;}
    double getBreadth(){return breadth;}
    double getHeight(){return height;}
    double returnVolume(){return length*breadth*height;}
};

int main(){
    double len, br, ht;
    cout << "Enter the length: ";
    cin >> len;
    cout << "Enter the breadth: ";
    cin >> br;
    cout << "Enter the height: ";
    cin >> ht;

    Box b1;
    b1.setLength(len);
    b1.setBreadth(br);
    b1.setHeight(ht);

    cout << "Volume of the Box: " << b1.returnVolume() << endl;
}
