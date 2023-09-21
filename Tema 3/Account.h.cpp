#include <iostream>
#include <string>

class Account {
public:
    Account(std::string accountName, int initialBalance)
            :  name{accountName} {
        if (initialBalance > 0) {
            balance = initialBalance;
        }
    }

    void deposit(int depositAmount) {
        if (depositAmount > 0) {
            balance  = balance + depositAmount;
        }
    }

    void withdraw(int withdrawAccount) {
        if(withdrawAccount > balance) {
            std::cout << "\n\nWhitdrawl amount excesed account balance "
                    << std::endl;
        } else {
            balance = balance - withdrawAccount;
        }
    }

    int getBalance() const {
        return balance;
    }

    void setName(std::string accountName) {
        name = accountName;
    }
     
    std::string getName() const {
        return name;
    }
    
    void displayAccount(Account accountToDisplay) {
        std::cout << accountToDisplay.getName() << " balance is $" 
        << accountToDisplay.getBalance() << std::endl;
    }


private:
    std::string name;
    int balance{0};

};

