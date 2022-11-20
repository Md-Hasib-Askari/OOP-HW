#include<iostream>
using namespace std;

class Mobile{
    string owner_name;
    string mobile_number;
    double mobile_balance = 0;
    string phone_os;
    bool is_locked;
public:
    Mobile(){cout << "New Mobile bought.\n";}
    Mobile(string owner_name, string mobile_number, double mobile_balance, string os, bool is_locked) {
        cout << "New Mobile bought.\n";
        this->owner_name = owner_name;
        this->mobile_number = mobile_number;
        this->mobile_balance = mobile_balance;
        this->phone_os = os;
        this->is_locked = is_locked;
    }
    ~Mobile(){cout << owner_name << " - Mobile destroyed.\n";}

    // Setter Methods
    void setOwnerName(string name) { this->owner_name = name; }
    void setMobileNumber(string number) { this->mobile_number = number; }
    void setOS(string os) { this->phone_os = os; }
    void setIsLocked(bool locked) { this->is_locked = locked; }

    // Getter Methods
    void showInfo(){
        cout << "Owner Name: " << this->owner_name << "\n";
        cout << "Mobile Number: " << this->mobile_number << "\n";
        cout << "Mobile Balance: " << this->mobile_balance << "\n";
        cout << "Phone OS: " << this->phone_os << "\n\n";
    }

    // Other Methods
    void recharge(double amount) {
        this->mobile_balance += amount;
        cout << owner_name << ", Recharge Successful. New Balance: " << this->mobile_balance << "tk\n";
    }
    void callSomeone(int timeDuration) {
        cout << "\n" << owner_name << ", ";
        if(this->is_locked) {
            cout << "your phone is locked. Unlock to make calls.\n\n";
            return;
        }
        if(this->mobile_balance < 0.5*timeDuration) {
            cout << "your balance is insufficient. Recharge to make calls.\n";
            return;
        }
        cout << "your last call cost " << 0.5*timeDuration << "tk...\n";
        cout << "Current Balance: " << this->mobile_balance - 0.5*timeDuration << "tk\n";
    }
};

int main() {
    Mobile obj("Rahul", "1234567890", 1000, "Android", false);
    obj.showInfo();

    Mobile obj2;
    obj2.setOwnerName("Shawon");
    obj2.setMobileNumber("01987654321");
    obj2.setOS("IOS");
    obj2.setIsLocked(false);
    obj2.showInfo();

    obj.recharge(100);
    obj.callSomeone(10);
    obj.callSomeone(100);
    obj.callSomeone(1000);
    obj.setIsLocked(true);
    obj.callSomeone(100);

    obj2.recharge(100);
    obj2.callSomeone(10);
    obj2.callSomeone(100);
    obj2.callSomeone(1000);
    obj2.setIsLocked(true);
    obj2.callSomeone(1000);
}
