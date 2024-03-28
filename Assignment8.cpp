#include<iostream>
using namespace std;
class Account
{
    private:
    int accno;
    int EAccountType;
    double balance;


    public:

    Account()
    {

    }
    Account(int accno,int EAccountype,double balance)
    {
        this->accno=accno;
        this->EAccountType=EAccountType;
        this->balance=balance;

    }

    void accept()
    {
        cout<<"Enter Account no :"<<endl;
        cin>>accno;
        cout<<"Enter EAccountType :"<<endl;
        cin>>EAccountType;
        cout<<"Enter balance :"<<endl;
        cin>>balance;

    }
    void display()
    {
        cout<<"Account no :"<<endl;
        cout<<"EAccounType :"<<endl;
        cout<<"Balance :"<<endl;

    }
    void deposit(double amount)
    {
        balance=balance+amount;
        cout<<"Deposit :"<<balance;

    }
    void withdraw(double amount)
    {
        balance=balance-amount;
        cout<<"Current Balance :"<<balance;
    }


};
class InsufficientFundsException
{
    private:

    int accno;
    double currentBalance;
    double withdrawAmount;

    public:
    InsufficientFundsException(int accno,int EAccountype,double balance)
    {
        this->accno=accno;
        this->currentBalance=currentBalance;
        this->withdrawAmount=withdrawAmount;
        



    }




    
};
Enum AccountType
{
    SAVING;
    CURRENT;
    DMAT;

}

int main()
{

    return 0;
}
