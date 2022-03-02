#include <iostream>
#include "BankAccount.h"

BankAccount::BankAccount(string owner, float balance) {
    this->owner = owner;
    this->balance = balance;
}


list<Transaction> BankAccount::getTransactions() {
    return transactions;
}

string BankAccount::getOwner() { 
    return owner;
}


float BankAccount::getBalance() { 
    return balance;
}


BankAccount& BankAccount::addTransaction(const Transaction& transaction) {
    transactions.push_back(Transaction(transaction.getContra(), transaction.getAmount(), transaction.getDate(), " IN"));
    
    return *this;
}

BankAccount& BankAccount::subtractTransaction(const Transaction& transaction) {
    transactions.push_back(Transaction(transaction.getContra(), transaction.getAmount(), transaction.getDate(), "OUT"));
    
    return *this;
}


BankAccount& BankAccount::operator+(const Transaction& transaction) {
    return this->addTransaction(transaction);
}


BankAccount& BankAccount::operator-(const Transaction& transaction) {
    return this->subtractTransaction(transaction);
}


ostream& operator<<(ostream& out, BankAccount& bankAccount) {
    out << bankAccount.getOwner() << " has a balance of $" << bankAccount.getBalance() << endl;
    out << "History: " << endl;

    for (Transaction transaction : bankAccount.getTransactions()) {
        out << transaction.getStatus() << ": $" << transaction.getAmount() << " on " << transaction.getDate() << " to " << transaction.getContra() << endl;
    }

    return out;
}