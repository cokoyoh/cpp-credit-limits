#include <iostream>
#include "Customer.h"

using namespace std;

int main() {
    int accountNumber;
    double beginningBalance,
            totalCharges,
            totalCredits,
            creditLimit;

   cout << "Enter account number (or -1 to quit): ";
   cin >> accountNumber;

   while(accountNumber != -1) {
       cout << "Enter beginning balance: ";
       cin >> beginningBalance;

       cout << "Enter total charges: ";
       cin >> totalCharges;

       cout << "Enter total credits: ";
       cin >> totalCredits;

       cout << "Enter credit limit: ";
       cin >> creditLimit;

       Customer customer(accountNumber, beginningBalance, totalCharges, totalCredits, creditLimit);

       cout << "New balance: " << customer.balance();
       cout << "\nAccount: " << customer.getAccountNumber();
       cout << "\nCredit Limit: " << customer.getCreditLimit();
       cout << "\nBalance: " << customer.balance();

       if(customer.creditLimitExceeded()) {
           cout << "\nCredit Limit Exceeded.";
       }

       cout << "\n\nEnter account number (or -1 to quit): ";
       cin >> accountNumber;
   }
}
