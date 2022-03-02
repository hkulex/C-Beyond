#pragma once

#include <string>

using namespace std;

class Transaction { 
    public:
        Transaction(string contra, float amount, string date, string status = "?");

        string getContra() const;
        float getAmount() const;
        string getDate() const;
        string getStatus() const;
    
    private:
        string contra;
        float amount;
        string date;
        string status;
};