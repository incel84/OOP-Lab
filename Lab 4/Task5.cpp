#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;
    static int total_accounts;

public:
    BankAccount() {
        accountNumber = 0;
        balance = 0;
        total_accounts++;
    }

    BankAccount(int acc, double bal) {
        accountNumber = acc;
        balance = bal;
        total_accounts++;
    }

    ~BankAccount() {
        total_accounts--;
    }

    void deleteAccount() {
        if (balance == 0) {
            delete this;
        }
    }

    static int getTotalAccounts() {
        return total_accounts;
    }
};

int BankAccount::total_accounts = 0;

int main() {
    BankAccount* a1 = new BankAccount(101, 5000);
    BankAccount* a2 = new BankAccount(102, 0);

    cout << BankAccount::getTotalAccounts() << endl;

    a2->deleteAccount();

    cout << BankAccount::getTotalAccounts() << endl;

    delete a1;

    return 0;
}