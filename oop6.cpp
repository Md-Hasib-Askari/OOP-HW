#include<iostream>
using namespace std;

class Account{
    string acc_name;
    string acc_no;
    double acc_balance = 0;
    string acc_type;
public:
    // Default Constructor
    Account(){
        cout << "Account Created.\n";
    }

    // Parameterized Constructor
    Account(string name, string number, string type){
        cout << "Account Created.\n";
        acc_name = name;
        acc_no = number;
        acc_type = type;
    }

    // Destructor
    ~Account(){cout << acc_name << " - Account Deleted!\n";}

    // Setter Methods
    void SetName(string name){acc_name = name;}
    void SetAccNo(string number){acc_no = number;}
    void SetAccType(string type){acc_type = type;}
    void deposit(int amount) { acc_balance+=amount; }
    void withdraw(int amount) { acc_balance-= amount; }

    // Getter Methods
    void showAccountDetails(){
        cout << "Account name: " << acc_name << "\n";
        cout << "Account number: " << acc_no << "\n";
        cout << "Account balance: " << acc_balance << "\n";
        cout << "Account type: " << acc_type << "\n";
        cout << "\n";
    }

    void Transfer(int amount, Account *acc){
        if(acc_balance >= amount){
            acc->acc_balance -= amount;
            acc_balance += amount;
        }
        else cout << "Insufficient Balance!\n";
    }
};
int main() {
    Account a1("Ali", "123456789", "Current");
    a1.deposit(1000);
    a1.withdraw(500);
    a1.showAccountDetails();

    Account a2;
    a2.SetName("Ahmed");
    a2.SetAccNo("987654321");
    a2.SetAccType("Savings");
    a2.deposit(2000);
    a2.withdraw(1000);
    a2.showAccountDetails();

    a2.Transfer(300, &a1);
    a1.showAccountDetails();
    a2.showAccountDetails();

}

