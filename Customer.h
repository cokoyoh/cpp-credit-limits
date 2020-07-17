using namespace std;

class Customer {
public:
    Customer(int accountNumber, double beginningBalance, double totalCharges, double totalCredits, double creditLimit)
    {
        setAccountNumber(accountNumber);
        setBeginningBalance(beginningBalance);
        setTotalCharges(totalCharges);
        setCreditLimit(creditLimit);
        setTotalCredits(totalCredits);
    }

    void setAccountNumber(int accountNumber) {
        this->accountNumber = accountNumber;
    }

    int getAccountNumber() const {
        return accountNumber;
    }

    void setBeginningBalance(double beginningBalance) {
        this->beginningBalance = beginningBalance;
    }

    double getBeginningBalance() const {
        return beginningBalance;
    }

    void setTotalCharges(double totalCharges) {
        this->totalCharges = totalCharges;
    }

    double getTotalCharges() const {
        return totalCharges;
    }

    void setCreditLimit(double creditLimit) {
        this->creditLimit = creditLimit;
    }

    double getCreditLimit() const {
        return creditLimit;
    }

    void setTotalCredits(double totalCredits) {
        this->totalCredits = totalCredits;
    }

    double getTotalCredits() const {
        return totalCredits;
    }

    double balance() {
        return beginningBalance + totalCharges - totalCredits;
    }

    bool creditLimitExceeded() {
        return balance() > getCreditLimit();
    }

private:
    int accountNumber{0};
    double beginningBalance{0.0};
    double creditLimit{0.0};
    double totalCharges{0.0};
    double totalCredits{0.0};
};
