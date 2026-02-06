#include <iostream>
using namespace std;
class AccountManager;
class BankAccount {
    private:
        int balance;
    public:
        BankAccount(int b) {
            balance = b;
        }
        friend class AccountManager;
};

class AccountManager {
    public:
        void showBalance(BankAccount b) {
            cout << "Balance: " << b.balance << endl;
        }
        void add(BankAccount &b, int amt) {
            b.balance += amt;
        }
        void sub(BankAccount &b, int amt) {
            b.balance -= amt;
        }
};

int main() {
    BankAccount acc(5000);
    AccountManager m;
    m.showBalance(acc);
    m.add(acc, 2000);
    m.showBalance(acc);
    m.sub(acc, 1000);
    m.showBalance(acc);
    return 0;
}
