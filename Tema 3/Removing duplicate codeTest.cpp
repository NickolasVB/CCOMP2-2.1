#include <iostream>
#include "Account.h.cpp"

using namespace std;

int main()
{
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    cout << "account1: " << endl;
    account1.displayAccount(account1);
    cout << "\naccount2: " << endl;
    account2.displayAccount(account2);

    cout << "\n\n Enter deposit amount for account1: "; 
    int depositAmount;
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to accountl balance ";
    account1.deposit(depositAmount);

    cout << "\n\naccount1: " << endl;
    account1.displayAccount(account1);
    cout << "\naccount2: " << endl;
    account2.displayAccount(account2);

    cout << "\n\n Enter deposit amount for account2: "; 
    cin >> depositAmount;
    cout << "adding " << depositAmount << " to accountl balance ";
    account2.deposit(depositAmount);

    cout << "\n\naccount1: " << endl;
    account1.displayAccount(account1);
    cout << "\naccount2: " << endl;
    account2.displayAccount(account2);

    cout << "\n\nEnter withdrawl amount for account1: ";
    int withdrawlAmount;
    cin >> withdrawlAmount;
    cout << "withdrawing " << withdrawlAmount << " to account1 balance";
    account1.withdraw(withdrawlAmount);

    return 0;
}

