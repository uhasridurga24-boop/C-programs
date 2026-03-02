#include <iostream>
using namespace std;

class Account {
private:
    int accountNumber;
    string name;
    string contact;
    double balance;

public:
    void create(int accNo, string n, string c, double b) {
        accountNumber = accNo;
        name = n;
        contact = c;
        balance = b;
    }

    int getAccNo() {
        return accountNumber;
    }

    void deposit(double amount) {
        if (amount > 0)
            balance += amount;
        else
            cout << "Invalid amount\n";
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance\n";
    }

    void showBalance() {
        cout << "Balance: " << balance << endl;
    }

    void update(string n, string c) {
        name = n;
        contact = c;
    }
};

int main() {
    Account acc[100];
    int total = 0;
    int choice;

    while (true) {
        cout << "\n1.Create\n2.Deposit\n3.Withdraw\n4.Balance\n5.Update\n6.Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            int no;
            string n, c;
            double b;

            cout << "Account No: ";
            cin >> no;
            cout << "Name: ";
            cin >> n;
            cout << "Contact: ";
            cin >> c;
            cout << "Initial Balance: ";
            cin >> b;

            acc[total].create(no, n, c, b);
            total++;
        }

        else if (choice >= 2 && choice <= 5) {
            int no;
            cout << "Enter Account No: ";
            cin >> no;

            bool found = false;

            for (int i = 0; i < total; i++) {
                if (acc[i].getAccNo() == no) {
                    found = true;

                    if (choice == 2) {
                        double amt;
                        cout << "Deposit amount: ";
                        cin >> amt;
                        acc[i].deposit(amt);
                    }
                    else if (choice == 3) {
                        double amt;
                        cout << "Withdraw amount: ";
                        cin >> amt;
                        acc[i].withdraw(amt);
                    }
                    else if (choice == 4) {
                        acc[i].showBalance();
                    }
                    else if (choice == 5) {
                        string n, c;
                        cout << "New Name: ";
                        cin >> n;
                        cout << "New Contact: ";
                        cin >> c;
                        acc[i].update(n, c);
                    }
                }
            }

            if (!found)
                cout << "Account not found\n";
        }

        else if (choice == 6) {
            break;
        }

        else {
            cout << "Invalid choice\n";
        }
    }

    return 0;
}
