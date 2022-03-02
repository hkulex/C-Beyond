#include <iostream>
#include "BankAccount.h"

using namespace std;

int main() { 
    BankAccount account = BankAccount("Edwin", 49339.33);

    account = account + Transaction("Albert Heijn", 23.11, "1-1-2022");
    account = account - Transaction("Apple", 999.99, "2-1-2022");
    account = account - Transaction("IKEA", 2.50, "3-1-2022");

    cout << account << endl;

    system("PAUSE");

    return 0;
}