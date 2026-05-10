#include <iostream>   // Input Output library add করা হয়েছে

using namespace std;  // std বারবার না লেখার জন্য

// BankAccount নামে একটি class তৈরি
class BankAccount
{
private:
    // private variable
    // এটা বাইরের কেউ direct access করতে পারবে না
    int balance;

public:

    // balance set করার function
    void setBalance(int b)
    {
        // user যে value দিবে সেটা balance এ store হবে
        balance = b;
    }

    // balance দেখানোর function
    void showBalance()
    {
        // balance print করবে
        cout << "Balance = " << balance << endl;
    }
};

// Program execution এখান থেকে শুরু
int main()
{
    // BankAccount class এর object তৈরি
    BankAccount user;

    // setBalance function call করে
    // balance এর value 5000 set করা হচ্ছে
    user.setBalance(5000);

    // showBalance function call করে
    // balance print করা হচ্ছে
    user.showBalance();

    return 0; // program successful end
}