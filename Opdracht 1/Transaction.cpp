#include "Transaction.h"

Transaction::Transaction(string contra, float amount, string date, string status) {
    this->contra = contra;
    this->amount = amount;
    this->date = date;
    this->status = status;
}

string Transaction::getContra() const {
    return contra;
}

float Transaction::getAmount() const {
    return amount;
}

string Transaction::getDate() const {
    return date;
}

string Transaction::getStatus() const {
    return status;
}