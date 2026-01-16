#include<iostream>
using namespace std;

class BankAccount{
private:           //hidden data
    string accountHolder;   
    int accountNumber;
    double balance;

public:
    //contructor(initializing in a safe way)
    BankAccount(string name, int accNo, double bal){
        accountHolder = name;
        accountNumber = accNo;
        if(bal >= 0){
            balance = bal;
        }
        else
        {
            balance = 0;
        }
    }

    //SETTER
    void setAccountHolder(string name){
        if(!name.empty()){
            accountHolder = name;
        }
    }

    //GETTER
    string getAccountHolder(){
        return accountHolder;
    }

    int getAccountNumber(){
        return accountNumber;
    }

    double getBalance(){
        return balance;
    }

    //Business logic functions
    void deposit(double amount){
        if(amount>0){
            balance += amount;
            cout << "Amount Deposited: " << amount << endl;
        }
    }
    
    void withdraw(double amount){
        if(amount > 0 && amount <= balance){
            balance -= amount;
            cout << "Amount Withdrawn: " << amount << endl;
        }
        else{
            cout << "Insufficient Funds." << endl;
        }
    }

    //display function(no direct data exposure)
    void display(){
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main(){
    BankAccount account1("sami", 12345, 1000);
    account1.getBalance();
    account1.deposit(200);
    account1.withdraw(1000);

    account1.display();

    return 0;
}