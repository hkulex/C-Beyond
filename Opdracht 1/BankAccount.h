#pragma once

#include <string>
#include <list>
#include "Transaction.h"

using namespace std;


class BankAccount {
    public:
        BankAccount(string owner, float balance);

        list<Transaction> getTransactions();
        string getOwner();
        float getBalance();

        BankAccount& addTransaction(const Transaction& transaction);
        BankAccount& subtractTransaction(const Transaction& transaction);

        BankAccount& operator+(const Transaction& transaction);
        BankAccount& operator-(const Transaction& transaction);
        friend ostream& operator<<(ostream& out, BankAccount& bankAccount);

    private:
        string owner;
        float balance;
        list<Transaction> transactions;
};